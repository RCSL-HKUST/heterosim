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
#include "bitcnt.c"
#include "bitcnt_1.c"
#include "bitcnt_2.c"
#include "bitcnt_3.c"
#include "bitcnt_4.c"

#define FUNCS  7


int main()
{
  int i;
  long long j;
  long long n[6] = {0,0,0,0,0,0};
  int iterations;
  long long seed[500]; 



  iterations=50;//atoi(argv[1]);

  int mm,nn,aa;
  int co[50][6];
  mm = 8; nn = 24;
  seed[0] = rand();  

   for(i=0; i<iterations-1; i++ ) 
       seed[i+1] = seed[i]+13;
        *((volatile unsigned int *)0xf000f008) = (unsigned int)(seed);
        *((volatile unsigned int *)0xf000f00C) = 400; 
    
    for (j = 0; j < iterations; j++)
	 {

          aa = bitcnt( &seed[j], mm, co[j], nn);         
         }

   for (j = 0; j < iterations; j++)
     { for(i=0;i<6;i++)
	{ n[i] = n[i]+ co[j][i];}
     } 	

   for(i=0;i<6;i++)
    printf("> Time: sec.; Bits: %lld\n", n[i]);

  return 0;
}


