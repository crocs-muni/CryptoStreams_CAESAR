#include "Shellaes128v1d7n80.h"
#include "shellaes128v1d7n80_encrypt.h"
#include "../../common/api.h"
#include "EACglobals.h"

Shellaes128v1d7n80::Shellaes128v1d7n80(int numRounds)
    : CaesarInterface(CAESAR_SHELLAES128V1D7N80, numRounds, CRYPTO_KEYBYTES, CRYPTO_NSECBYTES, CRYPTO_NPUBBYTES, CRYPTO_ABYTES) {
    if (numRounds < -1 || numRounds > maxNumRounds) {
        mainLogger.out(LOGGER_WARNING) << "Weird number of rouds (" << numRounds << ") for " << shortDescription() << endl;
    }
    if (numRounds == -1) {
        Shellaes128v1d7n80_raw::numRounds = maxNumRounds;
        CaesarCommon::numRounds = maxNumRounds;
    } else {
        Shellaes128v1d7n80_raw::numRounds = m_numRounds;
        CaesarCommon::numRounds = m_numRounds;
    }
}

Shellaes128v1d7n80::~Shellaes128v1d7n80() { }

int Shellaes128v1d7n80::encrypt(bits_t *c, length_t *clen, const bits_t *m, length_t mlen,
                       const bits_t *ad, length_t adlen, const bits_t *nsec, const bits_t *npub,
                       const bits_t *k) {
    return Shellaes128v1d7n80_raw::crypto_aead_encrypt(c, clen, m, mlen, ad, adlen, nsec, npub, k);
}

int Shellaes128v1d7n80::decrypt(bits_t *m, length_t *outputmlen, bits_t *nsec,
                       const bits_t *c, length_t clen, const bits_t *ad, length_t adlen,
                       const bits_t *npub, const bits_t *k) {
    return Shellaes128v1d7n80_raw::crypto_aead_decrypt(m, outputmlen, nsec, c, clen, ad, adlen, npub, k);
}

std::string Shellaes128v1d7n80::shortDescription() const {
    return "Shellaes128v1d7n80";
}
