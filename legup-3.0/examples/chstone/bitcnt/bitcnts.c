/* +++Date last modified: 05-Jul-1997 */

/*
**  BITCNTS.C - Test program for bit counting functions
**
**  public domain by Bob Stout & Auke Reitsma
*/

#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#include <limits.h>
#include <time.h>
#include <float.h>
#include "bitops.h"
#include "bitcnt_1.c"
#include "bitcnt_2.c"
#include "bitcnt_3.c"
#include "bitcnt_4.c"

#define FUNCS  6

int CDECL bit_shifter(long long * in, int mm, int  * out, int nn);

int main()//(int argc, char *argv[])
{
  //clock_t start, stop;
  double ct, cmin = DBL_MAX, cmax = 0;
  int i, cminix, cmaxix;
  long long j,co;
  int iterations;
/*  static int (* CDECL pBitCntFunc[FUNCS])(long long * in, int mm, int  * out, int nn) = {
    bit_count,
    bitcount,
    ntbl_bitcnt,
    ntbl_bitcount,
    BW_btbl_bitcount,
    AR_btbl_bitcount,
    bit_shifter
  };*/

  iterations=20;

  int mm,nn,aa;
  mm = 8; nn = 4; 
  long long seed[500];  
  int n[500];

  for (i = 0; i < FUNCS; i++)
{
  seed[0] = rand(); 
  for (j=0; j < iterations-1; j++)
  { 
     seed[j+1] = seed[j]+13;

   }   

       *((volatile unsigned int *)0xf000f008) = (unsigned int)(seed);
       *((volatile unsigned int *)0xf000f00C) = 8*iterations; 
  int ic=0; co=0;

 {

    
   for (j=0 ; j < iterations; j++)
      { switch(i)

{     case 0: aa = bit_count(&seed[j], mm, &n[j], nn);/*pBitCntFunc[i]*/
              break;
      case 1: aa = bitcount(&seed[j], mm, &n[j], nn);/*pBitCntFunc[i]*/
              break;
      case 2: aa = ntbl_bitcount(&seed[j], mm, &n[j], nn);/*pBitCntFunc[i]*/
              break;
      case 3: aa = BW_btbl_bitcount(&seed[j], mm, &n[j], nn);/*pBitCntFunc[i]*/
              break;
      case 4: aa = AR_btbl_bitcount(&seed[j], mm, &n[j], nn);/*pBitCntFunc[i]*/
              break;
      case 5: aa = bit_shifter(&seed[j], mm, &n[j], nn);/*pBitCntFunc[i]*/
              break;

}
 
     }
    

     for (j=0 ; j < iterations; j++)
        co += n[j];  

 //  for (j=0; j < iterations; j++)
 // { 
 //    co = n[j]+co;

 //  }   

    printf("> Time: sec.; Bits: %lld\n", co);
  }

}

  return 0;
}

int CDECL bit_shifter(long long * in, int mm, int  * out, int nn)
{
  long long int x =*in;
  int i, n;
  
  for (i = n = 0; x && (i < (sizeof(long long) * CHAR_BIT)); ++i, x >>= 1)
    n += (int)(x & 1L);
  *out = n;
  return mm+nn;
}
