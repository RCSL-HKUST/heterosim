
#include "sw.h"
#include "data_.h"
#include <stdio.h>
#include <stdlib.h>



void data_to1( int* x, int m, /*int comp_no,*/
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
		int p_jinfo_ac_dhuff_tbl_valptr_[NUM_HUFF_TBLS][36]//,
		//unsigned char CurHuffReadBuf[57]
                 )
{ 
  int i,j; 
  //*x = comp_no;
  x++;
  unsigned int *y1 = (unsigned int *)x;
  for(i=0;i<NUM_QUANT_TBLS;i++)
  for(j=0;j<DCTSIZE2;j++)
   { *y1 = p_jinfo_quant_tbl_quantval[i][j];
     y1++; 
    }
  int *y0 = (int *)y1;   
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<257;j++)
   { *y0 = p_jinfo_dc_xhuff_tbl_huffval[i][j];
     y0++; 
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<257;j++)
   { *y0 = p_jinfo_ac_xhuff_tbl_huffval[i][j];
     y0++; 
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
   { *y0 = p_jinfo_dc_dhuff_tbl_ml[i];
     y0++; 
    }
  
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *y0 = p_jinfo_dc_dhuff_tbl_maxcode[i][j];
     y0++; 
    }
  
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *y0 = p_jinfo_dc_dhuff_tbl_mincode[i][j];
     y0++; 
    }
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *y0 = p_jinfo_dc_dhuff_tbl_valptr[i][j];
     y0++; 
    }

     for(i=0;i<NUM_HUFF_TBLS;i++)
   { *y0 = p_jinfo_ac_dhuff_tbl_ml[i];
     y0++; 
    }

   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *y0=p_jinfo_ac_dhuff_tbl_maxcode[i][j];
     y0++; 
    }
  
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *y0 = p_jinfo_ac_dhuff_tbl_mincode[i][j];
     y0++; 
    }
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *y0 = p_jinfo_ac_dhuff_tbl_valptr[i][j];
     y0++; 
    }

  
   char *y2;
   y2 = (char*) y0;
  
  for (i=0;i<NUM_COMPONENT;i++) 
    {*y2 = p_jinfo_comps_info_quant_tbl_no[i];
     y2++;}
  for (i=0;i<NUM_COMPONENT;i++) 
    {*y2 = p_jinfo_comps_info_dc_tbl_no[i] ;
     y2++;}
   
  // unsigned char *y3 = (unsigned char*)y2;
  // for(i=0;i<57;i++)
  // { *y3 = CurHuffReadBuf[i];
  //   y3++;
  //  }

} 


void data_to2( int* x, int m, int comp_no,
		unsigned char CurHuffReadBuf[57])
{ 
  int i,j; 
  unsigned char *y3 = (unsigned char*)(&x[1722]);
  *x = comp_no;
  x++;
/*  unsigned int *y1 = (unsigned int *)x;
  for(i=0;i<NUM_QUANT_TBLS;i++)
  for(j=0;j<DCTSIZE2;j++)
   { //*y1 = p_jinfo_quant_tbl_quantval[i][j];
     y1++; 
    }
  int *y0 = (int *)y1;   
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<257;j++)
   { //*y0 = p_jinfo_dc_xhuff_tbl_huffval[i][j];
     y0++; 
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<257;j++)
   { //*y0 = p_jinfo_ac_xhuff_tbl_huffval[i][j];
     y0++; 
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
   { //*y0 = p_jinfo_dc_dhuff_tbl_ml[i];
     y0++; 
    }
  
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { //*y0 = p_jinfo_dc_dhuff_tbl_maxcode[i][j];
     y0++; 
    }
  
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { //*y0 = p_jinfo_dc_dhuff_tbl_mincode[i][j];
     y0++; 
    }
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { //*y0 = p_jinfo_dc_dhuff_tbl_valptr[i][j];
     y0++; 
    }

     for(i=0;i<NUM_HUFF_TBLS;i++)
   { //*y0 = p_jinfo_ac_dhuff_tbl_ml[i];
     y0++; 
    }

   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { //*y0=p_jinfo_ac_dhuff_tbl_maxcode[i][j];
     y0++; 
    }
  
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { //*y0 = p_jinfo_ac_dhuff_tbl_mincode[i][j];
     y0++; 
    }
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { //*y0 = p_jinfo_ac_dhuff_tbl_valptr[i][j];
     y0++; 
    }

  
   char *y2;
   y2 = (char*) y0;
  
  for (i=0;i<NUM_COMPONENT;i++) 
    {//*y2 = p_jinfo_comps_info_quant_tbl_no[i];
     y2++;}
  for (i=0;i<NUM_COMPONENT;i++) 
    {//*y2 = p_jinfo_comps_info_dc_tbl_no[i] ;
     y2++;}
  */ 
  
   y3++;
   y3++;
   for(i=0;i<57;i++)
   { *y3 = CurHuffReadBuf[i];
     y3++;
    }

} 








void data_to( int* x, int m, int comp_no,
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
		unsigned char CurHuffReadBuf[57])
{ 
  int i,j; 
  *x = comp_no;
  x++;
  unsigned int *y1 = (unsigned int *)x;
  for(i=0;i<NUM_QUANT_TBLS;i++)
  for(j=0;j<DCTSIZE2;j++)
   { *y1 = p_jinfo_quant_tbl_quantval[i][j];
     y1++; 
    }
  int *y0 = (int *)y1;   
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<257;j++)
   { *y0 = p_jinfo_dc_xhuff_tbl_huffval[i][j];
     y0++; 
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<257;j++)
   { *y0 = p_jinfo_ac_xhuff_tbl_huffval[i][j];
     y0++; 
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
   { *y0 = p_jinfo_dc_dhuff_tbl_ml[i];
     y0++; 
    }
  
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *y0 = p_jinfo_dc_dhuff_tbl_maxcode[i][j];
     y0++; 
    }
  
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *y0 = p_jinfo_dc_dhuff_tbl_mincode[i][j];
     y0++; 
    }
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *y0 = p_jinfo_dc_dhuff_tbl_valptr[i][j];
     y0++; 
    }

     for(i=0;i<NUM_HUFF_TBLS;i++)
   { *y0 = p_jinfo_ac_dhuff_tbl_ml[i];
     y0++; 
    }

   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *y0=p_jinfo_ac_dhuff_tbl_maxcode[i][j];
     y0++; 
    }
  
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *y0 = p_jinfo_ac_dhuff_tbl_mincode[i][j];
     y0++; 
    }
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *y0 = p_jinfo_ac_dhuff_tbl_valptr[i][j];
     y0++; 
    }

  
   char *y2;
   y2 = (char*) y0;
  
  for (i=0;i<NUM_COMPONENT;i++) 
    {*y2 = p_jinfo_comps_info_quant_tbl_no[i];
     y2++;}
  for (i=0;i<NUM_COMPONENT;i++) 
    {*y2 = p_jinfo_comps_info_dc_tbl_no[i] ;
     y2++;}
   
   unsigned char *y3 = (unsigned char*)y2;
   for(i=0;i<57;i++)
   { *y3 = CurHuffReadBuf[i];
     y3++;
    }

} 



void data_from(int *y, int n,int out_buf[DCTSIZE2],
 int HuffBuff[DCTSIZE2],
 int *offset)

{ int i,j;
  *offset = *y;
  y++;
    for(i=0;i<DCTSIZE2;i++)
   { out_buf[i] = *y;
     y++; 
    }
      for(i=0;i<DCTSIZE2;i++)
   { HuffBuff[i] = *y;
     y++; 
    }


}
