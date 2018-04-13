#include "ketjejrv1_encrypt.h"

#include <string.h>
#include "ketjejrv1_Ketje.h"

// CHANGE namespace moved due to includes
namespace Ketjejrv1_raw {
int numRounds = -1;

int crypto_aead_encrypt(
    unsigned char *c,unsigned long long *clen,
    const unsigned char *m,unsigned long long mlen,
    const unsigned char *ad,unsigned long long adlen,
    const unsigned char *nsec,
    const unsigned char *npub,
    const unsigned char *k
    )
{
    Ketje_Instance instance;

    Ketje_Initialize(&instance, k, 96, npub, 80);
    Ketje_FeedAssociatedData(&instance, ad, adlen);
    Ketje_WrapPlaintext(&instance, m, c, mlen);
    *clen = mlen;
    Ketje_GetTag(&instance, c+mlen, 12);
    *clen += 12;

    return 0;
}

int crypto_aead_decrypt(
    unsigned char *m,unsigned long long *mlen,
    unsigned char *nsec,
    const unsigned char *c,unsigned long long clen,
    const unsigned char *ad,unsigned long long adlen,
    const unsigned char *npub,
    const unsigned char *k
    )
{
    Ketje_Instance instance;
    unsigned char tag[12];

    if (clen < 12)
        return -1;

    Ketje_Initialize(&instance, k, 96, npub, 80);
    Ketje_FeedAssociatedData(&instance, ad, adlen);
    *mlen = clen-12;
    Ketje_UnwrapCiphertext(&instance, c, m, *mlen);
    Ketje_GetTag(&instance, tag, 12);
    if (memcmp(tag, c+(*mlen), 12) != 0) {
        memset(m, 0, *mlen);
        return -1;
    }
    else
        return 0;
}

} // namespace Ketjejrv1_raw
