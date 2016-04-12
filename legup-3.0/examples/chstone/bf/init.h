#include "blowfish.h"

unsigned int buff[1067];
BF_LONG *key_P;//[BF_ROUNDS + 2];
BF_LONG *key_S;//[4 * 256];
