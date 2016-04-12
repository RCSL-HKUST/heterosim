/*
+--------------------------------------------------------------------------+
| CHStone : a suite of benchmark programs for C-based High-Level Synthesis |
| ======================================================================== |
|                                                                          |
| * Collected and Modified : Y. Hara, H. Tomiyama, S. Honda,               |
|                            H. Takada and K. Ishii                        |
|                            Nagoya University, Japan                      |
|                                                                          |
| * Remark :                                                               |
|    1. This source code is modified to unify the formats of the benchmark |
|       programs in CHStone.                                               |
|    2. Test vectors are added for CHStone.                                |
|    3. If "main_result" is 0 at the end of the program, the program is    |
|       correctly executed.                                                |
|    4. Please follow the copyright of each benchmark program.             |
+--------------------------------------------------------------------------+
*/
/*************************************************************************/
/*                                                                       */
/*   SNU-RT Benchmark Suite for Worst Case Timing Analysis               */
/*   =====================================================               */
/*                              Collected and Modified by S.-S. Lim      */
/*                                           sslim@archi.snu.ac.kr       */
/*                                         Real-Time Research Group      */
/*                                        Seoul National University      */
/*                                                                       */
/*                                                                       */
/*        < Features > - restrictions for our experimental environment   */
/*                                                                       */
/*          1. Completely structured.                                    */
/*               - There are no unconditional jumps.                     */
/*               - There are no exit from loop bodies.                   */
/*                 (There are no 'break' or 'return' in loop bodies)     */
/*          2. No 'switch' statements.                                   */
/*          3. No 'do..while' statements.                                */
/*          4. Expressions are restricted.                               */
/*               - There are no multiple expressions joined by 'or',     */
/*                'and' operations.                                      */
/*          5. No library calls.                                         */
/*               - All the functions needed are implemented in the       */
/*                 source file.                                          */
/*                                                                       */
/*                                                                       */
/*************************************************************************/
/*                                                                       */
/*  FILE: adpcm.c                                                        */
/*  SOURCE : C Algorithms for Real-Time DSP by P. M. Embree              */
/*                                                                       */
/*  DESCRIPTION :                                                        */
/*                                                                       */
/*     CCITT G.722 ADPCM (Adaptive Differential Pulse Code Modulation)   */
/*     algorithm.                                                        */
/*     16khz sample rate data is stored in the array test_data[SIZE].    */
/*     Results are stored in the array compressed[SIZE] and result[SIZE].*/
/*     Execution time is determined by the constant SIZE (default value  */
/*     is 2000).                                                         */
/*                                                                       */
/*  REMARK :                                                             */
/*                                                                       */
/*  EXECUTION TIME :                                                     */
/*                                                                       */
/*                                                                       */
/*************************************************************************/
#include <stdio.h>
#include "encode.h"
#include "func.c"
#include "encode.c"



void decode (int);

void reset ();

/* G722 C code */

/* variables for transimit quadrature mirror filter here */
int tqmf[24];

/* QMF filter coefficients:
scaled by a factor of 4 compared to G722 CCITT recomendation */




/* variables for receive quadrature mirror filter here */
int accumc[11], accumd[11];

/* outputs of decode() */
int xout1, xout2;

int xs, xd;

/* variables for encoder (hi and lo) here */

int il;

int buff[67];


const int qq6_code6_table[64] = {
  -136, -136, -136, -136, -24808, -21904, -19008, -16704,
  -14984, -13512, -12280, -11192, -10232, -9360, -8576, -7856,
  -7192, -6576, -6000, -5456, -4944, -4464, -4008, -3576,
  -3168, -2776, -2400, -2032, -1688, -1360, -1040, -728,
  24808, 21904, 19008, 16704, 14984, 13512, 12280, 11192,
  10232, 9360, 8576, 7856, 7192, 6576, 6000, 5456,
  4944, 4464, 4008, 3576, 3168, 2776, 2400, 2032,
  1688, 1360, 1040, 728, 432, 136, -432, -136
};

const int qq4_code4_table[16] = {
  0, -20456, -12896, -8968, -6288, -4240, -2584, -1200,
  20456, 12896, 8968, 6288, 4240, 2584, 1200, 0
};


const int h[24] = {
  12, -44, -44, 212, 48, -624, 128, 1448,
  -840, -3220, 3804, 15504, 15504, 3804, -3220, -840,
  1448, 128, -624, 48, 212, -44, -44, 12
};

const int qq2_code2_table[4] = {
  -7408, -1616, 7408, 1616
};

int delay_bpl[6];

int delay_dltx[6];



int nbl;			/* delay line */
int al1, al2;
int plt1, plt2;
int rlt1, rlt2;

/* decision levels - pre-multiplied by 8, 0 to indicate end */

int detl;

/* quantization table 31 long to make quantl look-up easier,
last entry is for mil=30 case when wd is max */


int deth;


int dh, ih;


int nbh;



int delay_dhx[6];

int delay_bph[6];

int ah1, ah2;
int ph1, ph2;
int rh1, rh2;

int rh;
/* variables for decoder here */
int ilr, rl;
int dec_deth, dec_detl, dec_dlt;

int dec_del_bpl[6];

int dec_del_dltx[6];

int dec_plt, dec_plt1, dec_plt2;
int dec_szl, dec_spl, dec_sl;
int dec_rlt1, dec_rlt2, dec_rlt;
int dec_al1, dec_al2;
int dl;
int dec_nbl, dec_dh, dec_nbh;

/* variables used in filtez */
int dec_del_bph[6];

int dec_del_dhx[6];

int dec_szh;
/* variables used in filtep */
int dec_rh1, dec_rh2;
int dec_ah1, dec_ah2;
int dec_ph, dec_sph;

int dec_sh;

int dec_ph1, dec_ph2;

/* G722 encode function two ints in, one 8 bit output */

/* put input samples in xin1 = first value, xin2 = second value */
/* returns il and ih stored together */



/* decode function, result in xout1 and xout2 */

void
decode (int input)
{
  int i;
  long int xa1, xa2;		/* qmf accumulators */
  const int *h_ptr;
  int *ac_ptr, *ac_ptr1, *ad_ptr, *ad_ptr1;

/* split transmitted word from input into ilr and ih */
  ilr = input & 0x3f;
  ih = input >> 6;

/* LOWER SUB_BAND DECODER */

/* filtez: compute predictor output for zero section */
  dec_szl = filtez (dec_del_bpl, dec_del_dltx);

/* filtep: compute predictor output signal for pole section */
  dec_spl = filtep (dec_rlt1, dec_al1, dec_rlt2, dec_al2);

  dec_sl = dec_spl + dec_szl;

/* compute quantized difference signal for adaptive predic */
  dec_dlt = ((long) dec_detl * qq4_code4_table[ilr >> 2]) >> 15;

/* compute quantized difference signal for decoder output */
  dl = ((long) dec_detl * qq6_code6_table[il]) >> 15;

  rl = dl + dec_sl;

/* logscl: quantizer scale factor adaptation in the lower sub-band */
  dec_nbl = logscl (ilr, dec_nbl);

/* scalel: computes quantizer scale factor in the lower sub band */
  dec_detl = scalel (dec_nbl, 8);

/* parrec - add pole predictor output to quantized diff. signal */
/* for partially reconstructed signal */
  dec_plt = dec_dlt + dec_szl;

/* upzero: update zero section predictor coefficients */
  upzero (dec_dlt, dec_del_dltx, dec_del_bpl);

/* uppol2: update second predictor coefficient apl2 and delay it as al2 */
  dec_al2 = uppol2 (dec_al1, dec_al2, dec_plt, dec_plt1, dec_plt2);

/* uppol1: update first predictor coef. (pole setion) */
  dec_al1 = uppol1 (dec_al1, dec_al2, dec_plt, dec_plt1);

/* recons : compute recontructed signal for adaptive predictor */
  dec_rlt = dec_sl + dec_dlt;

/* done with lower sub band decoder, implement delays for next time */
  dec_rlt2 = dec_rlt1;
  dec_rlt1 = dec_rlt;
  dec_plt2 = dec_plt1;
  dec_plt1 = dec_plt;

/* HIGH SUB-BAND DECODER */

/* filtez: compute predictor output for zero section */
  dec_szh = filtez (dec_del_bph, dec_del_dhx);

/* filtep: compute predictor output signal for pole section */
  dec_sph = filtep (dec_rh1, dec_ah1, dec_rh2, dec_ah2);

/* predic:compute the predictor output value in the higher sub_band decoder */
  dec_sh = dec_sph + dec_szh;

/* in-place compute the quantized difference signal */
  dec_dh = ((long) dec_deth * qq2_code2_table[ih]) >> 15L;

/* logsch: update logarithmic quantizer scale factor in hi sub band */
  dec_nbh = logsch (ih, dec_nbh);

/* scalel: compute the quantizer scale factor in the higher sub band */
  dec_deth = scalel (dec_nbh, 10);

/* parrec: compute partially recontructed signal */
  dec_ph = dec_dh + dec_szh;

/* upzero: update zero section predictor coefficients */
  upzero (dec_dh, dec_del_dhx, dec_del_bph);

/* uppol2: update second predictor coefficient aph2 and delay it as ah2 */
  dec_ah2 = uppol2 (dec_ah1, dec_ah2, dec_ph, dec_ph1, dec_ph2);

/* uppol1: update first predictor coef. (pole setion) */
  dec_ah1 = uppol1 (dec_ah1, dec_ah2, dec_ph, dec_ph1);

/* recons : compute recontructed signal for adaptive predictor */
  rh = dec_sh + dec_dh;

/* done with high band decode, implementing delays for next time here */
  dec_rh2 = dec_rh1;
  dec_rh1 = rh;
  dec_ph2 = dec_ph1;
  dec_ph1 = dec_ph;

/* end of higher sub_band decoder */

/* end with receive quadrature mirror filters */
  xd = rl - rh;
  xs = rl + rh;

/* receive quadrature mirror filters implemented here */
  h_ptr = h;
  ac_ptr = accumc;
  ad_ptr = accumd;
  xa1 = (long) xd *(*h_ptr++);
  xa2 = (long) xs *(*h_ptr++);
/* main multiply accumulate loop for samples and coefficients */
  for (i = 0; i < 10; i++)
    {
      xa1 += (long) (*ac_ptr++) * (*h_ptr++);
      xa2 += (long) (*ad_ptr++) * (*h_ptr++);
    }
/* final mult/accumulate */
  xa1 += (long) (*ac_ptr) * (*h_ptr++);
  xa2 += (long) (*ad_ptr) * (*h_ptr++);

/* scale by 2^14 */
  xout1 = xa1 >> 14;
  xout2 = xa2 >> 14;

/* update delay lines */
  ac_ptr1 = ac_ptr - 1;
  ad_ptr1 = ad_ptr - 1;
  for (i = 0; i < 10; i++)
    {
      *ac_ptr-- = *ac_ptr1--;
      *ad_ptr-- = *ad_ptr1--;
    }
  *ac_ptr = xd;
  *ad_ptr = xs;
}

/* clear all storage locations */

void
reset ()
{
  int i;

  detl = dec_detl = 32;		/* reset to min scale factor */
  deth = dec_deth = 8;
  nbl = al1 = al2 = plt1 = plt2 = rlt1 = rlt2 = 0;
  nbh = ah1 = ah2 = ph1 = ph2 = rh1 = rh2 = 0;
  dec_nbl = dec_al1 = dec_al2 = dec_plt1 = dec_plt2 = dec_rlt1 = dec_rlt2 = 0;
  dec_nbh = dec_ah1 = dec_ah2 = dec_ph1 = dec_ph2 = dec_rh1 = dec_rh2 = 0;

  for (i = 0; i < 6; i++)
    {
      delay_dltx[i] = 0;
      delay_dhx[i] = 0;
      dec_del_dltx[i] = 0;
      dec_del_dhx[i] = 0;
    }

  for (i = 0; i < 6; i++)
    {
      delay_bpl[i] = 0;
      delay_bph[i] = 0;
      dec_del_bpl[i] = 0;
      dec_del_bph[i] = 0;
    }

  for (i = 0; i < 24; i++)
    tqmf[i] = 0;		// i<23

  for (i = 0; i < 11; i++)
    {
      accumc[i] = 0;
      accumd[i] = 0;
    }
}

/* filtez - compute predictor output signal (zero section) */
/* input: bpl1-6 and dlt1-6, output: szl */



/*
+--------------------------------------------------------------------------+
| * Test Vectors (added for CHStone)                                       |
|     test_data : input data                                               |
|     test_compressed : expected output data for "encode"                  |
|     test_result : expected output data for "decode"                      |
+--------------------------------------------------------------------------+
*/

#define SIZE 100
#define IN_END 100

const int test_data[SIZE] = {
  0x44, 0x44, 0x44, 0x44, 0x44,
  0x44, 0x44, 0x44, 0x44, 0x44,
  0x44, 0x44, 0x44, 0x44, 0x44,
  0x44, 0x44, 0x43, 0x43, 0x43,
  0x43, 0x43, 0x43, 0x43, 0x42,
  0x42, 0x42, 0x42, 0x42, 0x42,
  0x41, 0x41, 0x41, 0x41, 0x41,
  0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x3f, 0x3f,
  0x3f, 0x3f, 0x3f, 0x3e, 0x3e,
  0x3e, 0x3e, 0x3e, 0x3e, 0x3d,
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
  0x3c, 0x3c, 0x3c, 0x3c, 0x3c,
  0x3c, 0x3c, 0x3c, 0x3c, 0x3b,
  0x3b, 0x3b, 0x3b, 0x3b, 0x3b,
  0x3b, 0x3b, 0x3b, 0x3b, 0x3b,
  0x3b, 0x3b, 0x3b, 0x3b, 0x3b,
  0x3b, 0x3b, 0x3b, 0x3b, 0x3b,
  0x3b, 0x3b, 0x3c, 0x3c, 0x3c,
  0x3c, 0x3c, 0x3c, 0x3c, 0x3c
};
int compressed[SIZE], result[SIZE];
const int test_compressed[SIZE] = {
  0xfd, 0xde, 0x77, 0xba, 0xf2, 
  0x90, 0x20, 0xa0, 0xec, 0xed, 
  0xef, 0xf1, 0xf3, 0xf4, 0xf5, 
  0xf5, 0xf5, 0xf5, 0xf6, 0xf6, 
  0xf6, 0xf7, 0xf8, 0xf7, 0xf8, 
  0xf7, 0xf9, 0xf8, 0xf7, 0xf9, 
  0xf8, 0xf8, 0xf6, 0xf8, 0xf8, 
  0xf7, 0xf9, 0xf9, 0xf9, 0xf8, 
  0xf7, 0xfa, 0xf8, 0xf8, 0xf7, 
  0xfb, 0xfa, 0xf9, 0xf8, 0xf8
};
const int test_result[SIZE] = {
  0, 0xffffffff, 0xffffffff, 0, 0, 
  0xffffffff, 0, 0, 0xffffffff, 0xffffffff, 
  0, 0, 0x1, 0x1, 0, 
  0xfffffffe, 0xffffffff, 0xfffffffe, 0, 0xfffffffc, 
  0x1, 0x1, 0x1, 0xfffffffb, 0x2, 
  0x2, 0x3, 0xb, 0x14, 0x14, 
  0x16, 0x18, 0x20, 0x21, 0x26, 
  0x27, 0x2e, 0x2f, 0x33, 0x32, 
  0x35, 0x33, 0x36, 0x34, 0x37, 
  0x34, 0x37, 0x35, 0x38, 0x36, 
  0x39, 0x38, 0x3b, 0x3a, 0x3f, 
  0x3f, 0x40, 0x3a, 0x3d, 0x3e, 
  0x41, 0x3c, 0x3e, 0x3f, 0x42, 
  0x3e, 0x3b, 0x37, 0x3b, 0x3e, 
  0x41, 0x3b, 0x3b, 0x3a, 0x3b, 
  0x36, 0x39, 0x3b, 0x3f, 0x3c, 
  0x3b, 0x37, 0x3b, 0x3d, 0x41, 
  0x3d, 0x3e, 0x3c, 0x3e, 0x3b, 
  0x3a, 0x37, 0x3b, 0x3e, 0x41, 
  0x3c, 0x3b, 0x39, 0x3a, 0x36
};

void
adpcm_main ()
{
  int i, j;
  int m,n;
  m = 268;
  n = 264;
  int a;
/* reset, initialize required memory */
  reset ();

  j = 10;
  for (i=0;i<24;i++)
	buff[i] = tqmf[i];
  for(i=0;i<6;i++)
    buff[24+i] = delay_dhx[i];
  for(i=0;i<6;i++)
    buff[30+i] = delay_bph[i];
  for(i=0;i<6;i++)
	buff[36+i] = delay_bpl[i];
  for (i=0;i<6;i++)
	buff[42+i] = delay_dltx[i];
	buff[48] = il;
	buff[49] = nbl;
	buff[50] = al1;buff[51]= al2;
	buff[52]= plt1;buff[53]= plt2;
	buff[54]= rlt1;buff[55]= rlt2;
	buff[56]= detl;
	buff[57]= nbh;
	buff[58]= deth;
	buff[59]= ah1;buff[60]= ah2;
	buff[61]= ph1;buff[62]= ph2;
	buff[63]= rh1;buff[64]= rh2;
    //  *((volatile unsigned int *)0xf000f008) = (unsigned int)(buff);
    //  *((volatile unsigned int *)0xf000f00C) = 260;
  for (i = 0; i < IN_END; i += 2)
    { buff[65] = test_data[i];
      buff[66] = test_data[i + 1];
    //  *((volatile unsigned int *)0xf000f008) = (unsigned int)(&buff[65]);
    //  *((volatile unsigned int *)0xf000f00C) = 8;
      a = encode (buff,m,buff,n);
      compressed[i / 2] = buff[65];
    }

  for (i=0;i<24;i++)
    tqmf[i]=buff[i] ;
  for(i=0;i<6;i++)
    delay_dhx[i]=buff[24+i];
  for(i=0;i<6;i++)
    delay_bph[i] = buff[30+i];
  for(i=0;i<6;i++)
    delay_bpl[i] = buff[36+i];
  for (i=0;i<6;i++)
	delay_dltx[i] = buff[42+i];
    il = buff[48];
    nbl = buff[49];
	al1=buff[50]; al2=buff[51];
	plt1=buff[52]; plt2=buff[53];
	rlt1=buff[54]; rlt2=buff[55];
	detl=buff[56];
	nbh=buff[57];
    deth = buff[58];
    ah1 = buff[59]; ah2=buff[60];
    ph1 = buff[61]; ph2=buff[62];
    rh1 = buff[63]; rh2=buff[64];

  for (i = 0; i < IN_END; i += 2)
    {
      decode (compressed[i / 2]);
      result[i] = xout1;
      result[i + 1] = xout2;
    }
}

int
main ()
{
  int i;
  int main_result;

      main_result = 0;
      adpcm_main ();
      for (i = 0; i < IN_END / 2; i++)
	{
	  if (compressed[i] != test_compressed[i])
	    {
	      main_result += 1;
	    }
	}
      for (i = 0; i < IN_END; i++)
	{
	  if (result[i] != test_result[i])
	    {
	      main_result += 1;
	    }
	}
      printf ("%d\n", main_result);
      return main_result;
    }
