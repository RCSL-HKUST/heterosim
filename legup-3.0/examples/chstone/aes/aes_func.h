#include "aes.h"

void
ByteSub_ShiftRow (int statemt[32], int nb);

void
InversShiftRow_ByteSub (int statemt[32], int nb);

int
MixColumn_AddRoundKey (int statemt[32], int nb, int n);

int
AddRoundKey_InversMixColumn (int statemt[32], int nb, int n);

int
AddRoundKey (int statemt[32], int type, int n);

int
SubByte (int in);
