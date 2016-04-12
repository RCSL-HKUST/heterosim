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
/*************************************************************
Copyright (C) 1990, 1991, 1993 Andy C. Hung, all rights reserved.
PUBLIC DOMAIN LICENSE: Stanford University Portable Video Research
Group. If you use this software, you agree to the following: This
program package is purely experimental, and is licensed "as is".
Permission is granted to use, modify, and distribute this program
without charge for any purpose, provided this license/ disclaimer
notice appears in the copies.  No warranty or maintenance is given,
either expressed or implied.  In no event shall the author(s) be
liable to you or a third party for any special, incidental,
consequential, or other damages, arising out of the use or inability
to use the program for any purpose (or the loss of data), even if we
have been advised of such possibilities.  Any public reference or
advertisement of this source code should refer to it as the Portable
Video Research Group (PVRG) code, and not by any author(s) (or
Stanford University) name.
*************************************************************/

/*
************************************************************
decode.c (original: transform.c)

This file contains the reference DCT, the zig-zag and quantization
algorithms.

************************************************************
*/
/*
 *  Decoder
 *
 *  @(#) $Id: decode.c,v 1.2 2003/07/18 10:19:21 honda Exp $
 */

#include <stdio.h>
#include <stdlib.h>

#include "hw.h"
#include "chenidct.h"
#include "huffman.h"



int rgb_buf[4][RGB_NUM][DCTSIZE2];

const int zigzag_index[64] =	/* Is zig-zag map for matrix -> scan array */
{ 0, 1, 5, 6, 14, 15, 27, 28,
  2, 4, 7, 13, 16, 26, 29, 42,
  3, 8, 12, 17, 25, 30, 41, 43,
  9, 11, 18, 24, 31, 40, 44, 53,
  10, 19, 23, 32, 39, 45, 52, 54,
  20, 22, 33, 38, 46, 51, 55, 60,
  21, 34, 37, 47, 50, 56, 59, 61,
  35, 36, 48, 49, 57, 58, 62, 63
};


/*
 * IZigzagMatrix() performs an inverse zig-zag translation on the
 * input imatrix and places the output in omatrix.
 */
void
IZigzagMatrix (int *imatrix, int *omatrix)
{
  int i;

  IZigzagMatrix_label0:for (i = 0; i < DCTSIZE2; i++)
    
    {
      
*(omatrix++) = imatrix[zigzag_index[i]];
    
}
}


/*
 * IQuantize() takes an input matrix and does an inverse quantization
 * and puts the output int qmatrix.
 */
void
IQuantize (int *matrix, unsigned int *qmatrix)
{
  int *mptr;

  IQuantize_label1:for (mptr = matrix; mptr < matrix + DCTSIZE2; mptr++)
    {
      *mptr = *mptr * (*qmatrix);
      qmatrix++;
    }
}


/*
 * PostshiftIDctMatrix() adds 128 (2048) to all 64 elements of an 8x8 matrix.
 * This results in strictly positive values for all pixel coefficients.
 */
void
PostshiftIDctMatrix (int *matrix, int shift)
{
  int *mptr;
  PostshiftIDctMatrix_label2:for (mptr = matrix; mptr < matrix + DCTSIZE2; mptr++)
    {
      *mptr += shift;
    }
}


/*
 * BoundIDctMatrix bounds the inverse dct matrix so that no pixel has a
 * value greater than 255 (4095) or less than 0.
 */
void
BoundIDctMatrix (int *matrix, int Bound)
{
  int *mptr;

  BoundIDctMatrix_label3:for (mptr = matrix; mptr < matrix + DCTSIZE2; mptr++)
    {
      if (*mptr < 0)
	{
	  *mptr = 0;
	}
      else if (*mptr > Bound)
	{
	  *mptr = Bound;
	}
    }
}



void
WriteOneBlock (int *store, unsigned char *out_buf, int width, int height,
	       int voffs, int hoffs)
{
  int i, e;


  /* Find vertical buffer offs. */
  WriteOneBlock_label5:for (i = voffs; i < voffs + DCTSIZE; i++)
    {
      if (i < height)
	{
	  int diff;
	  diff = width * i;
	  WriteOneBlock_label4:for (e = hoffs; e < hoffs + DCTSIZE; e++)
	    {
	      if (e < width)
		{
		  out_buf[diff + e] = (unsigned char) (*(store++));
		}
	      else
		{
		  break;
		}
	    }
	}
      else
	{
	  break;
	}
    }


}

/*
 * WriteBlock() writes an array of data in the integer array pointed to
 * by store out to the driver specified by the IOB.  The integer array is
 * stored in row-major form, that is, the first row of (8) elements, the
 * second row of (8) elements....
 * ONLY for MCU 1:1:1
 */
void
WriteBlock (int *store, int *p_out_vpos, int *p_out_hpos,
	    unsigned char *p_out_buf,short p_jinfo_image_height_,
     short p_jinfo_image_width_,int p_jinfo_MCUWidth_)
{
  int voffs, hoffs;

  /*
   * Get vertical offsets
   */
  voffs = *p_out_vpos * DCTSIZE;
  hoffs = *p_out_hpos * DCTSIZE;

  /*
   * Write block
   */
  WriteOneBlock (store,
		 p_out_buf,
		 p_jinfo_image_width_, p_jinfo_image_height_, voffs, hoffs);

  /*
   *  Add positions
   */
	(*p_out_hpos)++;
	(*p_out_vpos)++;

  if (*p_out_hpos < p_jinfo_MCUWidth_)
    {
    (*p_out_vpos)--;
    }
  else
    {
      *p_out_hpos = 0;		/* If at end of image (width) */
    }
}

/*
 *  4:1:1
 */
void
Write4Blocks (int *store1, int *store2, int *store3, int *store4,
	      int *p_out_vpos, int *p_out_hpos, unsigned char *p_out_buf,short p_jinfo_image_height_,
		     short p_jinfo_image_width_,int p_jinfo_MCUWidth_)
{
  int voffs, hoffs;

  /*
   * OX
   * XX
   */
  voffs = *p_out_vpos * DCTSIZE;
  hoffs = *p_out_hpos * DCTSIZE;
  WriteOneBlock (store1, p_out_buf,
		 p_jinfo_image_width_, p_jinfo_image_height_, voffs, hoffs);

  /*
   * XO
   * XX
   */
  hoffs += DCTSIZE;
  WriteOneBlock (store2, p_out_buf,
		 p_jinfo_image_width_, p_jinfo_image_height_, voffs, hoffs);

  /*
   * XX
   * OX
   */
  voffs += DCTSIZE;
  hoffs -= DCTSIZE;
  WriteOneBlock (store3, p_out_buf,
		 p_jinfo_image_width_, p_jinfo_image_height_, voffs, hoffs);


  /*
   * XX
   * XO
   */
  hoffs += DCTSIZE;
  WriteOneBlock (store4,
		 p_out_buf, p_jinfo_image_width_, p_jinfo_image_height_,
		 voffs, hoffs);

  /*
   * Add positions
   */
  *p_out_hpos = *p_out_hpos + 2;
  *p_out_vpos = *p_out_vpos + 2;


  if (*p_out_hpos < p_jinfo_MCUWidth_)
    {
      *p_out_vpos = *p_out_vpos - 2;
    }
  else
    {
      *p_out_hpos = 0;		/* If at end of image (width) */
    }
}


/*
 * Transform from Yuv into RGB
 */
void
YuvToRgb (int p, int *y_buf, int *u_buf, int *v_buf)
{
  int r, g, b;
  int y, u, v;
  int i;

  YuvToRgb_label6:for (i = 0; i < DCTSIZE2; i++)
    {
      y = y_buf[i];
      u = u_buf[i] - 128;
      v = v_buf[i] - 128;

      r = (y * 256 + v * 359 + 128) >> 8;
      g = (y * 256 - u * 88 - v * 182 + 128) >> 8;
      b = (y * 256 + u * 454 + 128) >> 8;

      if (r < 0)
	r = 0;
      else if (r > 255)
	r = 255;

      if (g < 0)
	g = 0;
      else if (g > 255)
	g = 255;

      if (b < 0)
	b = 0;
      else if (b > 255)
	b = 255;

      rgb_buf[p][0][i] = r;
      rgb_buf[p][1][i] = g;
      rgb_buf[p][2][i] = b;

    }
}

int rec;
int max;
/*
 * Decode one block
 */
int
decode_block ( int *x, int m, int *y, int n)
{

 int offset;
 int comp_no;
 int out_buf[DCTSIZE2];
 int HuffBuff[DCTSIZE2];
 char p_jinfo_comps_info_quant_tbl_no_[NUM_COMPONENT];
 unsigned int p_jinfo_quant_tbl_quantval_[NUM_QUANT_TBLS][DCTSIZE2];
 int p_jinfo_dc_dhuff_tbl_ml_[NUM_HUFF_TBLS];
 int p_jinfo_dc_dhuff_tbl_maxcode_[NUM_HUFF_TBLS][36];
 int p_jinfo_dc_dhuff_tbl_mincode_[NUM_HUFF_TBLS][36];
 int p_jinfo_dc_dhuff_tbl_valptr_[NUM_HUFF_TBLS][36];
 int p_jinfo_ac_dhuff_tbl_ml_[NUM_HUFF_TBLS];
 int p_jinfo_ac_dhuff_tbl_maxcode_[NUM_HUFF_TBLS][36];
 int p_jinfo_ac_dhuff_tbl_mincode_[NUM_HUFF_TBLS][36];
 int p_jinfo_ac_dhuff_tbl_valptr_[NUM_HUFF_TBLS][36];
 int p_jinfo_dc_xhuff_tbl_huffval_[NUM_HUFF_TBLS][257];
 int p_jinfo_ac_xhuff_tbl_huffval_[NUM_HUFF_TBLS][257];
 char p_jinfo_comps_info_dc_tbl_no_[NUM_COMPONENT];
 unsigned char CurHuffReadBuf[57];
  
 data_in( x, m, &comp_no, p_jinfo_comps_info_quant_tbl_no_,
          p_jinfo_comps_info_dc_tbl_no_, p_jinfo_quant_tbl_quantval_, p_jinfo_dc_xhuff_tbl_huffval_,
	  p_jinfo_ac_xhuff_tbl_huffval_, p_jinfo_dc_dhuff_tbl_ml_, p_jinfo_dc_dhuff_tbl_maxcode_,
	  p_jinfo_dc_dhuff_tbl_mincode_, p_jinfo_dc_dhuff_tbl_valptr_, p_jinfo_ac_dhuff_tbl_ml_,
          p_jinfo_ac_dhuff_tbl_maxcode_, p_jinfo_ac_dhuff_tbl_mincode_,
          p_jinfo_ac_dhuff_tbl_valptr_, CurHuffReadBuf); 

  
 



  int QuantBuff[DCTSIZE2];
  unsigned int *p_quant_tbl;


  DecodeHuffMCU (HuffBuff, comp_no,p_jinfo_dc_dhuff_tbl_ml_,
		  p_jinfo_dc_dhuff_tbl_maxcode_,
		  p_jinfo_dc_dhuff_tbl_mincode_,
		  p_jinfo_dc_dhuff_tbl_valptr_,
		  p_jinfo_ac_dhuff_tbl_ml_,
		  p_jinfo_ac_dhuff_tbl_maxcode_,
		  p_jinfo_ac_dhuff_tbl_mincode_,
		  p_jinfo_ac_dhuff_tbl_valptr_,
		  p_jinfo_dc_xhuff_tbl_huffval_,
		  p_jinfo_ac_xhuff_tbl_huffval_,
		  p_jinfo_comps_info_dc_tbl_no_,
		  CurHuffReadBuf,
		  &offset
		  );

  IZigzagMatrix (HuffBuff, QuantBuff);

  p_quant_tbl =
    &p_jinfo_quant_tbl_quantval_[(int)p_jinfo_comps_info_quant_tbl_no_[comp_no]][DCTSIZE2];
  IQuantize (QuantBuff, p_quant_tbl);

  ChenIDct (QuantBuff, out_buf);

  PostshiftIDctMatrix (out_buf, IDCT_SHIFT);

  BoundIDctMatrix (out_buf, IDCT_BOUNT);

  //printf("%d\n",offset);

  data_out(y, n, out_buf, HuffBuff,
  &offset);

  return m+n;
}


int
decode_start (
		int *OutData_image_width_,
		int *OutData_image_height_,
		int OutData_comp_vpos_[RGB_NUM],
		int OutData_comp_hpos_[RGB_NUM],
		unsigned char OutData_comp_buf_[RGB_NUM][BMP_OUT_SIZE],
		short p_jinfo_image_height_,
		short p_jinfo_image_width_,
		int p_jinfo_smp_fact_,
		char p_jinfo_comps_info_quant_tbl_no_[NUM_COMPONENT],
		char p_jinfo_comps_info_dc_tbl_no_[NUM_COMPONENT],
		unsigned int p_jinfo_quant_tbl_quantval_[NUM_QUANT_TBLS][DCTSIZE2],
		int p_jinfo_dc_xhuff_tbl_huffval_[NUM_HUFF_TBLS][257],
		int p_jinfo_ac_xhuff_tbl_huffval_[NUM_HUFF_TBLS][257],
		int p_jinfo_dc_dhuff_tbl_ml_[NUM_HUFF_TBLS],
		int p_jinfo_dc_dhuff_tbl_maxcode_[NUM_HUFF_TBLS][36],
		int p_jinfo_dc_dhuff_tbl_mincode_[NUM_HUFF_TBLS][36],
		int p_jinfo_dc_dhuff_tbl_valptr_[NUM_HUFF_TBLS][36],
		int p_jinfo_ac_dhuff_tbl_ml_[NUM_HUFF_TBLS],
		int p_jinfo_ac_dhuff_tbl_maxcode_[NUM_HUFF_TBLS][36],
		int p_jinfo_ac_dhuff_tbl_mincode_[NUM_HUFF_TBLS][36],
		int p_jinfo_ac_dhuff_tbl_valptr_[NUM_HUFF_TBLS][36],
		int p_jinfo_MCUWidth_,
		int p_jinfo_NumMCU_,
		unsigned char p_jinfo_jpeg_data_[BMP_OUT_SIZE])

{
  max = 0;
  //data_in(x,m);
  //data1();
  int i;
  int CurrentMCU = 0;
  int HuffBuff[NUM_COMPONENT][DCTSIZE2];
  int IDCTBuff[6][DCTSIZE2];
  int offset;
  int of;
  int a;
  int m; int n;
  m = 6948; n = 516;  
  //unsigned char *CurHuffReadBuf;

  /* Read buffer */
  //CurHuffReadBuf = p_jinfo_jpeg_data_;
  offset = 0;
  of = 0;
  /*
   * Initial value of DC element is 0
   */
  decode_start_label7:for (i = 0; i < NUM_COMPONENT; i++)
    {
      HuffBuff[i][0] = 0;
    }

  /*
   * Set the size of image to output buffer
   */
  *OutData_image_width_ = p_jinfo_image_width_;
  *OutData_image_height_ = p_jinfo_image_height_;

  /*
   * Initialize output buffer
   */
  decode_start_label8:for (i = 0; i < RGB_NUM; i++)
    {
	  OutData_comp_vpos_[i] = 0;
	  OutData_comp_hpos_[i] = 0;
    }
  
 /*  data_to1( buff, m, 
		p_jinfo_comps_info_quant_tbl_no_,
		p_jinfo_comps_info_dc_tbl_no_,
		p_jinfo_quant_tbl_quantval_,
		p_jinfo_dc_xhuff_tbl_huffval_,
		p_jinfo_ac_xhuff_tbl_huffval_,
		p_jinfo_dc_dhuff_tbl_ml_,
		p_jinfo_dc_dhuff_tbl_maxcode_,
		p_jinfo_dc_dhuff_tbl_mincode_,
		p_jinfo_dc_dhuff_tbl_valptr_,
		p_jinfo_ac_dhuff_tbl_ml_,
		p_jinfo_ac_dhuff_tbl_maxcode_,
		p_jinfo_ac_dhuff_tbl_mincode_,
		p_jinfo_ac_dhuff_tbl_valptr_);*/

    //   *((volatile unsigned int *)0xf000f008) = (unsigned int)(buff);
    //   *((volatile unsigned int *)0xf000f00C) = m;   

  if (p_jinfo_smp_fact_ == SF1_1_1)
    {
      printf ("Decode 1:1:1 NumMCU = %d\n", p_jinfo_NumMCU_);

      /*
       * 1_1_1
       */
      decode_start_label9:while (CurrentMCU < p_jinfo_NumMCU_)
	{

	  decode_start_label10:for (i = 0; i < NUM_COMPONENT; i++)
	    {
               data_to( buff, m, i,
		p_jinfo_comps_info_quant_tbl_no_,
		p_jinfo_comps_info_dc_tbl_no_,
		p_jinfo_quant_tbl_quantval_,
		p_jinfo_dc_xhuff_tbl_huffval_,
		p_jinfo_ac_xhuff_tbl_huffval_,
		p_jinfo_dc_dhuff_tbl_ml_,
		p_jinfo_dc_dhuff_tbl_maxcode_,
		p_jinfo_dc_dhuff_tbl_mincode_,
		p_jinfo_dc_dhuff_tbl_valptr_,
		p_jinfo_ac_dhuff_tbl_ml_,
		p_jinfo_ac_dhuff_tbl_maxcode_,
		p_jinfo_ac_dhuff_tbl_mincode_,
		p_jinfo_ac_dhuff_tbl_valptr_,
		&p_jinfo_jpeg_data_[of]);
          *((volatile unsigned int *)0xf000f008) = (unsigned int)(buff);
         *((volatile unsigned int *)0xf000f00C) = m;   

	      a = decode_block (buff,m,buf,n);

              data_from( buf,  n, IDCTBuff[i],
                HuffBuff[i], &offset);
  
	      of = of+offset;
	    }


	  YuvToRgb (0, IDCTBuff[0], IDCTBuff[1], IDCTBuff[2]);
	  /*
	   * Write
	   */
	  decode_start_label11:for (i = 0; i < RGB_NUM; i++)
	    {
	      WriteBlock (&rgb_buf[0][i][0],
			  &OutData_comp_vpos_[i],
			  &OutData_comp_hpos_[i], &OutData_comp_buf_[i][0],p_jinfo_image_height_,
			    p_jinfo_image_width_,p_jinfo_MCUWidth_);
	    }
	  CurrentMCU++;
	}

    }
  else
    {
      printf ("Decode 4:1:1 NumMCU = %d\n", p_jinfo_NumMCU_);
      /*
       * 4_1_1
       */
      decode_start_label12:while (CurrentMCU < p_jinfo_NumMCU_)
	{
	  /*
	   * Decode Y element
	   * Decoding Y, U and V elements should be sequentially conducted for the use of Huffman table
	   */

	  decode_start_label13:for (i = 0; i < 4; i++)
	    {

               data_to( buff, m, 1,
		p_jinfo_comps_info_quant_tbl_no_,
		p_jinfo_comps_info_dc_tbl_no_,
		p_jinfo_quant_tbl_quantval_,
		p_jinfo_dc_xhuff_tbl_huffval_,
		p_jinfo_ac_xhuff_tbl_huffval_,
		p_jinfo_dc_dhuff_tbl_ml_,
		p_jinfo_dc_dhuff_tbl_maxcode_,
		p_jinfo_dc_dhuff_tbl_mincode_,
		p_jinfo_dc_dhuff_tbl_valptr_,
		p_jinfo_ac_dhuff_tbl_ml_,
		p_jinfo_ac_dhuff_tbl_maxcode_,
		p_jinfo_ac_dhuff_tbl_mincode_,
		p_jinfo_ac_dhuff_tbl_valptr_,
		&p_jinfo_jpeg_data_[of]);
                 *((volatile unsigned int *)0xf000f008) = (unsigned int)(buff);
       *((volatile unsigned int *)0xf000f00C) = m;   

	      a = decode_block (buff,m,buf,n);

            data_from( buf,  n, IDCTBuff[i],
             HuffBuff[0], &offset);
	          of =of +offset;
	    }

	  /* Decode U */

           data_to( buff, m, 1,
		p_jinfo_comps_info_quant_tbl_no_,
		p_jinfo_comps_info_dc_tbl_no_,
		p_jinfo_quant_tbl_quantval_,
		p_jinfo_dc_xhuff_tbl_huffval_,
		p_jinfo_ac_xhuff_tbl_huffval_,
		p_jinfo_dc_dhuff_tbl_ml_,
		p_jinfo_dc_dhuff_tbl_maxcode_,
		p_jinfo_dc_dhuff_tbl_mincode_,
		p_jinfo_dc_dhuff_tbl_valptr_,
		p_jinfo_ac_dhuff_tbl_ml_,
		p_jinfo_ac_dhuff_tbl_maxcode_,
		p_jinfo_ac_dhuff_tbl_mincode_,
		p_jinfo_ac_dhuff_tbl_valptr_,
		&p_jinfo_jpeg_data_[of]);
             *((volatile unsigned int *)0xf000f008) = (unsigned int)(buff);
       *((volatile unsigned int *)0xf000f00C) = m;   

	      a = decode_block (buff,m,buf,n);

            data_from( buf,  n, IDCTBuff[4],
                HuffBuff[1], &offset);
	         of =of +offset;

	  /* Decode V */

          data_to( buff, m, 2,
		p_jinfo_comps_info_quant_tbl_no_,
		p_jinfo_comps_info_dc_tbl_no_,
		p_jinfo_quant_tbl_quantval_,
		p_jinfo_dc_xhuff_tbl_huffval_,
		p_jinfo_ac_xhuff_tbl_huffval_,
		p_jinfo_dc_dhuff_tbl_ml_,
		p_jinfo_dc_dhuff_tbl_maxcode_,
		p_jinfo_dc_dhuff_tbl_mincode_,
		p_jinfo_dc_dhuff_tbl_valptr_,
		p_jinfo_ac_dhuff_tbl_ml_,
		p_jinfo_ac_dhuff_tbl_maxcode_,
		p_jinfo_ac_dhuff_tbl_mincode_,
		p_jinfo_ac_dhuff_tbl_valptr_,
		&p_jinfo_jpeg_data_[of]);

       *((volatile unsigned int *)0xf000f008) = (unsigned int)(buff);
       *((volatile unsigned int *)0xf000f00C) = m;   

	      a = decode_block (buff,m,buf,n);

            data_from( buf,  n, IDCTBuff[5],
             HuffBuff[2], &offset); 


	      of = of +offset;


	  /* Transform from Yuv into RGB */

	  decode_start_label0:for (i = 0; i < 4; i++)
	    {
	      YuvToRgb (i, IDCTBuff[i], IDCTBuff[4], IDCTBuff[5]);
	    }


	  decode_start_label15:for (i = 0; i < RGB_NUM; i++)
	    {
	      Write4Blocks (&rgb_buf[0][i][0],
			    &rgb_buf[1][i][0],
			    &rgb_buf[2][i][0],
			    &rgb_buf[3][i][0],
			    &OutData_comp_vpos_[i],
			    &OutData_comp_hpos_[i], &OutData_comp_buf_[i][0],p_jinfo_image_height_,
			    p_jinfo_image_width_,p_jinfo_MCUWidth_);
	    }


	  CurrentMCU += 4;
	}
    }
    //printf("max: %d",max);
    //data2();
    //data_out(x,n);
    return 0;
}