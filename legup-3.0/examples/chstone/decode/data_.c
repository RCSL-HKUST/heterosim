
#include "sw.h"
#include "data_.h"
#include <stdio.h>
#include <stdlib.h>



void data_to( int* x, int m)
{ 
  int i,j; 
  //printf("%d,%p\n",*x,x);
  *x = main_result;
  x++;
  *x = (int) p_jinfo_image_height;
  x++;
  *x = (int) p_jinfo_image_width;
  x++;
  *x = p_jinfo_smp_fact;
  x++;
  for (i=0;i<NUM_COMPONENT;i++) 
  {*x = (int) p_jinfo_comps_info_quant_tbl_no[i];
   x++;}
  for (i=0;i<NUM_COMPONENT;i++) 
  {*x = (int)p_jinfo_comps_info_dc_tbl_no[i] ;
   x++;}
  for(i=0;i<NUM_QUANT_TBLS;i++)
    for(j=0;j<DCTSIZE2;j++)
   { *x = p_jinfo_quant_tbl_quantval[i][j];
     x++; 
    }
  
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<257;j++)
   { *x = p_jinfo_dc_xhuff_tbl_huffval[i][j];
     x++; 
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<257;j++)
   { *x = p_jinfo_ac_xhuff_tbl_huffval[i][j];
     x++; 
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
   { *x = p_jinfo_dc_dhuff_tbl_ml[i];
     x++; 
    }
  
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *x = p_jinfo_dc_dhuff_tbl_maxcode[i][j];
     x++; 
    }
  
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *x = p_jinfo_dc_dhuff_tbl_mincode[i][j];
     x++; 
    }
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *x = p_jinfo_dc_dhuff_tbl_valptr[i][j];
     x++; 
    }

   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *x=p_jinfo_ac_dhuff_tbl_maxcode[i][j];
     x++; 
    }
  
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *x = p_jinfo_ac_dhuff_tbl_mincode[i][j];
     x++; 
    }
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { *x = p_jinfo_ac_dhuff_tbl_valptr[i][j];
     x++; 
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
   { *x = p_jinfo_ac_dhuff_tbl_ml[i];
     x++; 
    }


   *x = p_jinfo_MCUWidth;
   x++;

   *x = p_jinfo_NumMCU;
   //printf("%d,%p\n",*x,x);
   x++;
   
   unsigned char *y = (unsigned char*)x;
   
   for(i=0;i<JPEG_FILE_SIZE;i++)
   { y[i] = p_jinfo_jpeg_data[i];
    }

} 



void data_from(int *y, int n)

{ int i,j;
  main_result = *y;
  y++;
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
