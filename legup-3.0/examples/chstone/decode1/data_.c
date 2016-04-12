
#include "sw.h"
#include "data_.h"
#include <stdio.h>
#include <stdlib.h>



void data_to( int* x, int m)
{ 
  int i,j; 
  //printf("%d,%p\n",*x,x);
  short *y;
  y = (short *)x;  
  *y = p_jinfo_image_height;
  y++;
  *y = p_jinfo_image_width;
  y++;
  int *y0;
  y0 = (int*)y;
  *y0 = p_jinfo_smp_fact;
  y0++;
  unsigned int *y1 = (unsigned int *)y0;
  for(i=0;i<NUM_QUANT_TBLS;i++)
  for(j=0;j<DCTSIZE2;j++)
   { *y1 = p_jinfo_quant_tbl_quantval[i][j];
     y1++; 
    }
  y0 = (int *)y1;   
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

   *y0 = p_jinfo_MCUWidth;
   y0++;

   *y0 = p_jinfo_NumMCU;
   //printf("%d,%p\n",*x,x);
   y0++;
  
   char *y2;
   y2 = (char*) y0;
  
  for (i=0;i<NUM_COMPONENT;i++) 
    {*y2 = p_jinfo_comps_info_quant_tbl_no[i];
     y2++;}
  for (i=0;i<NUM_COMPONENT;i++) 
    {*y2 = p_jinfo_comps_info_dc_tbl_no[i] ;
     y2++;}
   
   unsigned char *y3 = (unsigned char*)y2;
   for(i=0;i<JPEG_FILE_SIZE;i++)
   { *y3 = p_jinfo_jpeg_data[i];
     y3++;
    }

} 



void data_from(int *y, int n)

{ int i,j;
  OutData_image_width = *y;
  y++;
  OutData_image_height = *y;
  y++;
    for(i=0;i<RGB_NUM;i++)
   { OutData_comp_vpos[i] = *y;
     y++; 
    }
      for(i=0;i<RGB_NUM;i++)
   { OutData_comp_hpos[i] = *y;
     y++; 
    }
  unsigned char *x = (unsigned char*)y;
   for(i=0;i<RGB_NUM;i++)
    for(j=0;j<BMP_OUT_SIZE;j++)
   { OutData_comp_buf[i][j] = *x;
     x++; 
    }    


}
