/*
The Keccak sponge function, designed by Guido Bertoni, Joan Daemen,
Michaël Peeters and Gilles Van Assche. For more information, feedback or
questions, please refer to our website: http://keccak.noekeon.org/

Implementation by the designers and Ronny Van Keer,
hereby denoted as "the implementer".

To the extent possible under law, the implementer has waived all copyright
and related or neighboring rights to the source code in this file.
http://creativecommons.org/publicdomain/zero/1.0/
*/

#ifndef _KeccakF400Reference_h_
#define _KeccakF400Reference_h_
#include "ketjesrv1_KeccakF-400-interface.h"

// CHANGE namespace moved due to includes
namespace Ketjesrv1_raw {

void displayRoundConstants(FILE *f);
void displayRhoOffsets(FILE *f);

} // namespace Ketjesrv1_raw
#endif
