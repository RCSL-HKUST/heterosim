
#include "encode.h"
//#include "hw.h"
#include "com.h"

int xl, xh;

int szl, spl, sl, el;


int sh;				/* this comes from adaptive predictor */
int eh;

int dh, ih;
int plt;
int dlt;
int rlt;
int sph, ph, yh;
int szh;



int
encode (/*int xin1, int xin2,*/ int buff[67], int m, int buf[65],int n)
{
/*	int tqmf[24];
	int delay_dhx[6];
	int delay_bph[6];
	int delay_bpl[6];
	int delay_dltx[6];
	int il;
	int nbl;
	int al1, al2;
	int plt1, plt2;
	int rlt1, rlt2;
	int detl;
	int nbh;
	int deth;
	int ah1, ah2;
	int ph1, ph2;
	int rh1, rh2;*/



  int i;
  const int *h_ptr;
  int *tqmf_ptr, *tqmf_ptr1;
  long int xa, xb;
  int decis;

/* transmit quadrature mirror filters implemented here */
  h_ptr = h_;
  tqmf_ptr = buff;
  xa = (long) (*tqmf_ptr++) * (*h_ptr++);
  xb = (long) (*tqmf_ptr++) * (*h_ptr++);
/* main multiply accumulate loop for samples and coefficients */
  encode_label4:for (i = 0; i < 10; i++)
    {
      xa += (long) (*tqmf_ptr++) * (*h_ptr++);
      xb += (long) (*tqmf_ptr++) * (*h_ptr++);
    }
/* final mult/accumulate */
  xa += (long) (*tqmf_ptr++) * (*h_ptr++);
  xb += (long) (*tqmf_ptr) * (*h_ptr++);

/* update delay line tqmf */
  tqmf_ptr1 = tqmf_ptr - 2;
  encode_label5:for (i = 0; i < 22; i++)
    *tqmf_ptr-- = *tqmf_ptr1--;
  *tqmf_ptr-- = buff[65]/*xin1*/;
  *tqmf_ptr = buff[66]/*xin2*/;

/* scale outputs */
  xl = (xa + xb) >> 15;
  xh = (xa - xb) >> 15;

/* end of quadrature mirror filter code */

/* starting with lower sub band encoder */

/* filtez - compute predictor output section - zero section */
  szl = filtez (&buff[36]/*delay_bpl*/, &buff[42]/*delay_dltx*/);

/* filtep - compute predictor output signal (pole section) */
  spl = filtep (buff[54]/*rlt1*/, buff[50]/*al1*/,buff[55] /*rlt2*/,buff[51]/* al2*/);

/* compute the predictor output value in the lower sub_band encoder */
  sl = szl + spl;
  el = xl - sl;

/* quantl: quantize the difference signal */
  buff[48]/*il*/ = quantl (el, buff[56]);

/* computes quantized difference signal */
/* for invqbl, truncate by 2 lsbs, so mode = 3 */
  dlt = ((long) buff[56] * qq4_code4_table_[buff[48]/*il*/ >> 2]) >> 15;

/* logscl: updates logarithmic quant. scale factor in low sub band */
  buff[49]/*nbl*/ = logscl (buff[48]/*il*/, buff[49]/*nbl*/);

/* scalel: compute the quantizer scale factor in the lower sub band */
/* calling parameters nbl and 8 (constant such that scalel can be scaleh) */
  buff[56]/*detl*/ = scalel (buff[49]/*nbl*/, 8);

/* parrec - simple addition to compute recontructed signal for adaptive pred */
  plt = dlt + szl;

/* upzero: update zero section predictor coefficients (sixth order)*/
/* calling parameters: dlt, dlt1, dlt2, ..., dlt6 from dlt */
/*  bpli (linear_buffer in which all six values are delayed */
/* return params:      updated bpli, delayed dltx */
  upzero (dlt, &buff[42]/*delay_dltx*/, &buff[36]/*delay_bpl*/);

/* uppol2- update second predictor coefficient apl2 and delay it as al2 */
/* calling parameters: al1, al2, plt, plt1, plt2 */
  buff[51]/*al2*/ = uppol2 (buff[50]/*al1*/,buff[51]/* al2*/, plt, buff[52]/*plt1*/,buff[53] /*plt2*/);

/* uppol1 :update first predictor coefficient apl1 and delay it as al1 */
/* calling parameters: al1, apl2, plt, plt1 */
  buff[50]/*al1*/ = uppol1 (buff[50]/*al1*/, buff[51]/*al2*/, plt, buff[52]/*plt1*/);

/* recons : compute recontructed signal for adaptive predictor */
  rlt = sl + dlt;

/* done with lower sub_band encoder; now implement delays for next time*/
  buff[55]/*rlt2*/ = buff[54]/*rlt1*/;
  buff[54]/*rlt1*/ = rlt;
  buff[53]/*plt2*/ = buff[52] /*plt1*/;
  buff[52]/*plt1*/ = plt;

/* high band encode */

  szh = filtez (&buff[30]/*delay_bph*/, &buff[24]/*delay_dhx*/);

  sph = filtep (buff[63]/*rh1*/, buff[59]/*ah1*/, buff[64]/*rh2*/, buff[60]/*ah2*/);

/* predic: sh = sph + szh */
  sh = sph + szh;
/* subtra: eh = xh - sh */
  eh = xh - sh;

/* quanth - quantization of difference signal for higher sub-band */
/* quanth: in-place for speed params: eh, deth (has init. value) */
  if (eh >= 0)
    {
      ih = 3;			/* 2,3 are pos codes */
    }
  else
    {
      ih = 1;			/* 0,1 are neg codes */
    }
  decis = (564L * (long) buff[58]/*deth*/) >> 12L;
  if (abs (eh) > decis)
    ih--;			/* mih = 2 case */

/* compute the quantized difference signal, higher sub-band*/
  dh = ((long) buff[58]/*deth*/ * qq2_code2_table_[ih]) >> 15L;

/* logsch: update logarithmic quantizer scale factor in hi sub-band*/
  buff[57]/*nbh*/ = logsch (ih, buff[57]/*nbh*/);

/* note : scalel and scaleh use same code, different parameters */
  buff[58]/*deth*/ = scalel (buff[57]/*nbh*/, 10);

/* parrec - add pole predictor output to quantized diff. signal */
  ph = dh + szh;

/* upzero: update zero section predictor coefficients (sixth order) */
/* calling parameters: dh, dhi, bphi */
/* return params: updated bphi, delayed dhx */
  upzero (dh, &buff[24]/*delay_dhx*/,&buff[30]/* delay_bph*/);

/* uppol2: update second predictor coef aph2 and delay as ah2 */
/* calling params: ah1, ah2, ph, ph1, ph2 */
  buff[60]/*ah2*/ = uppol2 (buff[59]/*ah1*/,buff[60]/* ah2*/, ph, buff[61]/*ph1*/, buff[62]/*ph2*/);

/* uppol1:  update first predictor coef. aph2 and delay it as ah1 */
  buff[59]/*ah1*/ = uppol1 (buff[59]/*ah1*/, buff[60]/*ah2*/, ph, buff[61]/*ph1*/);

/* recons for higher sub-band */
  yh = sh + dh;

/* done with higher sub-band encoder, now Delay for next time */
  buff[64]/*rh2*/ = buff[63]/*rh1*/;
  buff[63]/*rh1*/ = yh;
  buff[62]/*ph2*/ = buff[61]/*ph1*/;
  buff[61]/*ph1*/ = ph;

/* multiplex ih and il to get signals together */
  buff[65]= (buff[48]/*il*/ | (ih << 6));
  return m+n+*buf; 
}
