#include "decode.h"
#include "global.h"
#include "hw.h"
#include "data.h"
//#include <stdio.h>
//#include <stdlib.h>


void data_in( int x[4000], int m)
{ 
  int i,j; 
 // printf("%d,%p\n",*x,x);
  main_result_= *x;
  x++;
  p_jinfo_image_height_ = (short)(*x);
  x++;
  p_jinfo_image_width_ = (short)(*x);
  x++;
  p_jinfo_smp_fact_ = *x;
  x++;
  for (i=0;i<NUM_COMPONENT;i++)
  {p_jinfo_comps_info_quant_tbl_no_[i]= (char)(*x) ;
   x++;}
  for (i=0;i<NUM_COMPONENT;i++) 
  {p_jinfo_comps_info_dc_tbl_no_[i]= (char)(*x) ;
   x++;}
  for(i=0;i<NUM_QUANT_TBLS;i++)
    for(j=0;j<DCTSIZE2;j++)
   { p_jinfo_quant_tbl_quantval_[i][j]=(unsigned int)(*x);
     x++; 
    }
  
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<257;j++)
   { p_jinfo_dc_xhuff_tbl_huffval_[i][j]= *x;
     x++; 
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<257;j++)
   { p_jinfo_ac_xhuff_tbl_huffval_[i][j]= *x;
     x++; 
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
   { p_jinfo_dc_dhuff_tbl_ml_[i]= *x;
     x++; 
    }
  
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { p_jinfo_dc_dhuff_tbl_maxcode_[i][j]= *x;
     x++; 
    }
  
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { p_jinfo_dc_dhuff_tbl_mincode_[i][j]= *x;
     x++; 
    }
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { p_jinfo_dc_dhuff_tbl_valptr_[i][j]= *x;
     x++; 
    }

   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { p_jinfo_ac_dhuff_tbl_maxcode_[i][j]= *x;
     x++; 
    }
  
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { p_jinfo_ac_dhuff_tbl_mincode_[i][j]= *x;
     x++; 
    }
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { p_jinfo_ac_dhuff_tbl_valptr_[i][j]= *x;
     x++; 
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
   { p_jinfo_ac_dhuff_tbl_ml_[i]= *x;
     x++; 
    }


   p_jinfo_MCUWidth_=*x;
   x++;
 //  printf("%d,%p\n",*x,x);

   p_jinfo_NumMCU_=*x;
   x++;

   unsigned char *y = (unsigned char*)x;
   
   for(i=0;i<JPEG_FILE_SIZE;i++)
   { p_jinfo_jpeg_data_[i]= *y;
     y++;
    }

} 



void data_out(int y[4000], int n)

{ int i,j;
  *y = OutData_image_width_;
  y++;
  *y = OutData_image_height_;
  y++;
    for(i=0;i<RGB_NUM;i++)
   { *y = OutData_comp_vpos_[i];
     y++; 
    }
      for(i=0;i<RGB_NUM;i++)
   { *y = OutData_comp_hpos_[i];
     y++; 
    }
  unsigned char *x = (unsigned char*)y;
   for(i=0;i<RGB_NUM;i++)
    for(j=0;j<BMP_OUT_SIZE;j++)
   { *x=OutData_comp_buf_[i][j];
     x++; 
    }    


}



