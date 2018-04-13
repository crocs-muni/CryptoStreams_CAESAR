#ifndef CAESAR_CIPHERS_H
#define CAESAR_CIPHERS_H

// CAESAR algorithm constants
#define CAESAR_ACORN128                     1
#define CAESAR_AEADAES128OCBTAGLEN128V1     2
#define CAESAR_AEADAES128OCBTAGLEN64V1      3
#define CAESAR_AEADAES128OCBTAGLEN96V1      4
#define CAESAR_AEADAES192OCBTAGLEN128V1     5
#define CAESAR_AEADAES192OCBTAGLEN64V1      6
#define CAESAR_AEADAES192OCBTAGLEN96V1      7
#define CAESAR_AEADAES256OCBTAGLEN128V1     8
#define CAESAR_AEADAES256OCBTAGLEN64V1      9
#define CAESAR_AEADAES256OCBTAGLEN96V1      10
#define CAESAR_AEGIS128                     11
#define CAESAR_AEGIS128L                    12
#define CAESAR_AEGIS256                     13
#define CAESAR_AES128AVALANCHEV1            14
#define CAESAR_AES128CPFBV1                 15
#define CAESAR_AES128GCMV1                  16
#define CAESAR_AES128MARBLE4RV1             17
#define CAESAR_AES128N12CLOCV1              18
#define CAESAR_AES128N12SILCV1              19
#define CAESAR_AES128N8CLOCV1               20
#define CAESAR_AES128N8SILCV1               21
#define CAESAR_AES128OTRPV1                 22
#define CAESAR_AES128OTRSV1                 23
#define CAESAR_AES128POETV1AES128           24
#define CAESAR_AES128POETV1AES4             25
#define CAESAR_AES192AVALANCHEV1            26
#define CAESAR_AES256AVALANCHEV1            27
#define CAESAR_AES256CPFBV1                 28
#define CAESAR_AES256GCMV1                  29
#define CAESAR_AES256OTRPV1                 30
#define CAESAR_AES256OTRSV1                 31
#define CAESAR_AESCOPAV1                    32
#define CAESAR_AESJAMBUV1                   33
#define CAESAR_AEZV1                        34
#define CAESAR_AEZV3                        35
#define CAESAR_ARTEMIA128V1                 36
#define CAESAR_ARTEMIA256V1                 37
#define CAESAR_ASCON128V1                   38
#define CAESAR_ASCON96V1                    39
#define CAESAR_CALICOV8                     40
#define CAESAR_CBA1                         41
#define CAESAR_CBA10                        42
#define CAESAR_CBA2                         43
#define CAESAR_CBA3                         44
#define CAESAR_CBA4                         45
#define CAESAR_CBA5                         46
#define CAESAR_CBA6                         47
#define CAESAR_CBA7                         48
#define CAESAR_CBA8                         49
#define CAESAR_CBA9                         50
#define CAESAR_CMCC22V1                     51
#define CAESAR_CMCC24V1                     52
#define CAESAR_CMCC42V1                     53
#define CAESAR_CMCC44V1                     54
#define CAESAR_CMCC84V1                     55
#define CAESAR_DEOXYSEQ128128V1             57
#define CAESAR_DEOXYSEQ256128V1             58
#define CAESAR_DEOXYSNEQ128128V1            59
#define CAESAR_DEOXYSNEQ256128V1            60
#define CAESAR_ELMD1000V1                   61
#define CAESAR_ELMD1001V1                   62
#define CAESAR_ELMD101270V1                 63
#define CAESAR_ELMD101271V1                 64
#define CAESAR_ELMD500V1                    65
#define CAESAR_ELMD501V1                    66
#define CAESAR_ELMD51270V1                  67
#define CAESAR_ELMD51271V1                  68
#define CAESAR_ENCHILADA128V1               69
#define CAESAR_ENCHILADA256V1               70
#define CAESAR_HS1SIVHIV1                   71
#define CAESAR_HS1SIVLOV1                   72
#define CAESAR_HS1SIVV1                     73
#define CAESAR_ICEPOLE128AV1                74
#define CAESAR_ICEPOLE128V1                 75
#define CAESAR_ICEPOLE256AV1                76
#define CAESAR_IFEEDAES128N104V1            77
#define CAESAR_IFEEDAES128N96V1             78
#define CAESAR_ISCREAM12V1                  79
#define CAESAR_ISCREAM12V2                  80
#define CAESAR_ISCREAM14V1                  81
#define CAESAR_ISCREAM14V2                  82
#define CAESAR_JOLTIKEQ12864V1              83
#define CAESAR_JOLTIKEQ6464V1               84
#define CAESAR_JOLTIKEQ8048V1               85
#define CAESAR_JOLTIKEQ9696V1               86
#define CAESAR_JOLTIKNEQ12864V1             87
#define CAESAR_JOLTIKNEQ6464V1              88
#define CAESAR_JOLTIKNEQ8048V1              89
#define CAESAR_JOLTIKNEQ9696V1              90
#define CAESAR_JULIUSV1DRAFT                91
#define CAESAR_KETJEJRV1                    92
#define CAESAR_KETJESRV1                    93
#define CAESAR_KIASUEQ128V1                 94
#define CAESAR_KIASUNEQ128V1                95
#define CAESAR_LACV1                        96
#define CAESAR_LAKEKEYAKV1                  97
#define CAESAR_LED80N6SILCV1                98
#define CAESAR_MINALPHERV1                  99
#define CAESAR_MORUS1280128V1               100
#define CAESAR_MORUS1280256V1               101
#define CAESAR_MORUS640128V1                102
#define CAESAR_NORX3241V1                   103
#define CAESAR_NORX3261V1                   104
#define CAESAR_NORX6441V1                   105
#define CAESAR_NORX6444V1                   106
#define CAESAR_NORX6461V1                   107
#define CAESAR_OCEANKEYAKV1                 108
#define CAESAR_OMDSHA256K128N96TAU128V1     109
#define CAESAR_OMDSHA256K128N96TAU64V1      110
#define CAESAR_OMDSHA256K128N96TAU96V1      111
#define CAESAR_OMDSHA256K192N104TAU128V1    112
#define CAESAR_OMDSHA256K256N104TAU160V1    113
#define CAESAR_OMDSHA256K256N248TAU256V1    114
#define CAESAR_OMDSHA512K128N128TAU128V1    115
#define CAESAR_OMDSHA512K256N256TAU256V1    116
#define CAESAR_OMDSHA512K512N256TAU256V1    117
#define CAESAR_PAEQ128                      118
#define CAESAR_PAEQ128T                     119
#define CAESAR_PAEQ128TNM                   120
#define CAESAR_PAEQ160                      121
#define CAESAR_PAEQ64                       122
#define CAESAR_PAEQ80                       123
#define CAESAR_PI16CIPHER096V1              124
#define CAESAR_PI16CIPHER128V1              125
#define CAESAR_PI32CIPHER128V1              126
#define CAESAR_PI32CIPHER256V1              127
#define CAESAR_PI64CIPHER128V1              128
#define CAESAR_PI64CIPHER256V1              129
#define CAESAR_PI64CIPHER256V1ONEROUND      130
#define CAESAR_PI64CIPHER256V1TWOROUNDS     131
#define CAESAR_POLAWISV1                    132
#define CAESAR_PPAEV11                      133
#define CAESAR_PRESENT80N6SILCV1            134
#define CAESAR_PRIMATESV1APE120             135
#define CAESAR_PRIMATESV1APE80              136
#define CAESAR_PRIMATESV1GIBBON120          137
#define CAESAR_PRIMATESV1GIBBON80           138
#define CAESAR_PRIMATESV1HANUMAN120         139
#define CAESAR_PRIMATESV1HANUMAN80          140
#define CAESAR_PROEST128APEV1               141
#define CAESAR_PROEST128COPAV1              142
#define CAESAR_PROEST128OTRV1               143
#define CAESAR_PROEST256APEV1               144
#define CAESAR_PROEST256COPAV1              145
#define CAESAR_PROEST256OTRV1               146
#define CAESAR_RAVIYOYLAV1                  147
#define CAESAR_RIVERKEYAKV1                 148
#define CAESAR_SABLIERV1                    149
#define CAESAR_SCREAM10V1                   150
#define CAESAR_SCREAM10V2                   151
#define CAESAR_SCREAM12V1                   152
#define CAESAR_SCREAM12V2                   153
#define CAESAR_SEAKEYAKV1                   154
#define CAESAR_SHELLAES128V1D4N64           155
#define CAESAR_SHELLAES128V1D4N80           156
#define CAESAR_SHELLAES128V1D5N64           157
#define CAESAR_SHELLAES128V1D5N80           158
#define CAESAR_SHELLAES128V1D6N64           159
#define CAESAR_SHELLAES128V1D6N80           160
#define CAESAR_SHELLAES128V1D7N64           161
#define CAESAR_SHELLAES128V1D7N80           162
#define CAESAR_SHELLAES128V1D8N64           163
#define CAESAR_SHELLAES128V1D8N80           164
#define CAESAR_SILVERV1                     165
#define CAESAR_STRIBOB192R1                 166
#define CAESAR_TIAOXINV1                    167
#define CAESAR_TRIVIA0V1                    168
#define CAESAR_TRIVIA128V1                  169
#define CAESAR_TWINE80N6CLOCV1              170
#define CAESAR_WHEESHTV1MR3FR1T128          171
#define CAESAR_WHEESHTV1MR3FR1T256          172
#define CAESAR_WHEESHTV1MR3FR3T256          173
#define CAESAR_WHEESHTV1MR5FR7T256          174
#define CAESAR_YAES128V2                    175

#define CAESAR_RANDOM                       999

namespace CaesarCiphers {

    /** converts CAESAR algorithm constant to human-readable string
    * @param algorithm        algorithm constant
    * @return human readable algorithm description
    */
    const char* caesarToString(int algorithm);

} // end namespace CaesarCiphers

#endif // CAESAR_CIPHERS_H
