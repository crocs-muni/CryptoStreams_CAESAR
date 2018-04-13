#ifndef SHELLAES128V1D4N80_ENCRYPT_H
#define SHELLAES128V1D4N80_ENCRYPT_H

#include "shellaes128v1d4n80_api.h"

namespace Shellaes128v1d4n80_raw {
extern int numRounds;

int crypto_aead_encrypt(unsigned char *c, unsigned long long *clen,
                        const unsigned char *m, unsigned long long mlen,
                        const unsigned char *ad, unsigned long long adlen,
                        const unsigned char *nsec, const unsigned char *npub,
                        const unsigned char *k);

int crypto_aead_decrypt(unsigned char *m, unsigned long long *outputmlen,
                        unsigned char *nsec,
                        const unsigned char *c, unsigned long long clen,
                        const unsigned char *ad, unsigned long long adlen,
                        const unsigned char *npub, const unsigned char *k);
} // namespace Shellaes128v1d4n80_raw

#endif // SHELLAES128V1D4N80_ENCRYPT_H
