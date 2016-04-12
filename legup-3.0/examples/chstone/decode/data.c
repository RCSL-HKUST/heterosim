
#include "hw.h"
#include "data.h"
#include <stdio.h>
#include <stdlib.h>



/*void data1()
{

	  int i,j;
	  //printf("%d,%p\n",*x,x);
	  main_result_=main_result;
	  p_jinfo_image_height_=p_jinfo_image_height;
	  p_jinfo_image_width_= p_jinfo_image_width;
	  p_jinfo_smp_fact_=p_jinfo_smp_fact;
	  for (i=0;i<NUM_COMPONENT;i++)
	  {p_jinfo_comps_info_quant_tbl_no_[i]= p_jinfo_comps_info_quant_tbl_no[i];
	  }
	  for (i=0;i<NUM_COMPONENT;i++)
	  {p_jinfo_comps_info_dc_tbl_no_[i] = p_jinfo_comps_info_dc_tbl_no[i];
	   }
	  for(i=0;i<NUM_QUANT_TBLS;i++)
	    for(j=0;j<DCTSIZE2;j++)
	   { p_jinfo_quant_tbl_quantval_[i][j]= p_jinfo_quant_tbl_quantval[i][j];
	    }

	  for(i=0;i<NUM_HUFF_TBLS;i++)
	    for(j=0;j<257;j++)
	   { p_jinfo_dc_xhuff_tbl_huffval_[i][j] = p_jinfo_dc_xhuff_tbl_huffval[i][j];
	    }

	  for(i=0;i<NUM_HUFF_TBLS;i++)
	    for(j=0;j<257;j++)
	   { p_jinfo_ac_xhuff_tbl_huffval_[i][j] = p_jinfo_ac_xhuff_tbl_huffval[i][j];
	    }

	  for(i=0;i<NUM_HUFF_TBLS;i++)
	   { p_jinfo_dc_dhuff_tbl_ml_[i]=p_jinfo_dc_dhuff_tbl_ml[i];

	    }

	   for(i=0;i<NUM_HUFF_TBLS;i++)
	    for(j=0;j<36;j++)
	   { p_jinfo_dc_dhuff_tbl_maxcode_[i][j]= p_jinfo_dc_dhuff_tbl_maxcode[i][j];
	    }

	  for(i=0;i<NUM_HUFF_TBLS;i++)
	    for(j=0;j<36;j++)
	   { p_jinfo_dc_dhuff_tbl_mincode_[i][j] = p_jinfo_dc_dhuff_tbl_mincode[i][j];
	    }
	   for(i=0;i<NUM_HUFF_TBLS;i++)
	    for(j=0;j<36;j++)
	   { p_jinfo_dc_dhuff_tbl_valptr_[i][j] =  p_jinfo_dc_dhuff_tbl_valptr[i][j];
	    }

	   for(i=0;i<NUM_HUFF_TBLS;i++)
	    for(j=0;j<36;j++)
	   { p_jinfo_ac_dhuff_tbl_maxcode_[i][j] = p_jinfo_ac_dhuff_tbl_maxcode[i][j];
        }

	  for(i=0;i<NUM_HUFF_TBLS;i++)
	    for(j=0;j<36;j++)
	   { p_jinfo_ac_dhuff_tbl_mincode_[i][j] = p_jinfo_ac_dhuff_tbl_mincode[i][j] ;
	    }
	   for(i=0;i<NUM_HUFF_TBLS;i++)
	    for(j=0;j<36;j++)
	   { p_jinfo_ac_dhuff_tbl_valptr_[i][j] = p_jinfo_ac_dhuff_tbl_valptr[i][j];
	    }

	  for(i=0;i<NUM_HUFF_TBLS;i++)
	   { p_jinfo_ac_dhuff_tbl_ml_[i] = p_jinfo_ac_dhuff_tbl_ml[i];
	    }


	   p_jinfo_MCUWidth_= p_jinfo_MCUWidth;

	   p_jinfo_NumMCU_=  p_jinfo_NumMCU;
	   //printf("%d,%p\n",*x,x);


	   for(i=0;i<JPEG_FILE_SIZE;i++)
	   { p_jinfo_jpeg_data_[i] = p_jinfo_jpeg_data[i];
	    }

}


void data2()
{

	int i,j;
	OutData_image_width=OutData_image_width_;

	  OutData_image_height=OutData_image_height_;

	    for(i=0;i<RGB_NUM;i++)
	   { OutData_comp_vpos[i]=OutData_comp_vpos_[i];

	    }
	      for(i=0;i<RGB_NUM;i++)
	   { OutData_comp_hpos[i] =OutData_comp_hpos_[i] ;

	    }
	   for(i=0;i<RGB_NUM;i++)
	    for(j=0;j<BMP_OUT_SIZE;j++)
	   { OutData_comp_buf[i][j] =OutData_comp_buf_[i][j] ;
	    }

    main_result = main_result_;

}*/

void data_in( int* x, int m)
{ 
  int i,j; 
  //printf("%d,%p\n",*x,x);
  main_result_=*x;
  x++;
  p_jinfo_image_height_=*x;
  x++;
  p_jinfo_image_width_=*x;
  x++;
  p_jinfo_smp_fact_=*x;
  x++;
  for (i=0;i<NUM_COMPONENT;i++)
  {p_jinfo_comps_info_quant_tbl_no_[i]=*x;
   x++;}
  for (i=0;i<NUM_COMPONENT;i++)
  {p_jinfo_comps_info_dc_tbl_no_[i] = *x;
   x++;}
  for(i=0;i<NUM_QUANT_TBLS;i++)
    for(j=0;j<DCTSIZE2;j++)
   { p_jinfo_quant_tbl_quantval_[i][j]=*x;
     x++;
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<257;j++)
   { p_jinfo_dc_xhuff_tbl_huffval_[i][j] = *x;
     x++;
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<257;j++)
   { p_jinfo_ac_xhuff_tbl_huffval_[i][j] = *x;
     x++;
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
   { p_jinfo_dc_dhuff_tbl_ml_[i]=*x;
     x++;
    }

   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { p_jinfo_dc_dhuff_tbl_maxcode_[i][j]= *x;
     x++;
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { p_jinfo_dc_dhuff_tbl_mincode_[i][j] = *x;
     x++;
    }
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { p_jinfo_dc_dhuff_tbl_valptr_[i][j] = *x;
     x++;
    }

   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { p_jinfo_ac_dhuff_tbl_maxcode_[i][j] = *x;
     x++;
    }
  
  for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { p_jinfo_ac_dhuff_tbl_mincode_[i][j] = *x;
     x++;
    }
   for(i=0;i<NUM_HUFF_TBLS;i++)
    for(j=0;j<36;j++)
   { p_jinfo_ac_dhuff_tbl_valptr_[i][j] = *x;
     x++;
    }

  for(i=0;i<NUM_HUFF_TBLS;i++)
   { p_jinfo_ac_dhuff_tbl_ml_[i] = *x;
     x++;
    }


   p_jinfo_MCUWidth_=*x;
   x++;

   p_jinfo_NumMCU_=*x;
   //printf("%d,%p\n",*x,x);
   x++;

   unsigned char *y = (unsigned char*)x;
   
   for(i=0;i<JPEG_FILE_SIZE;i++)
   { p_jinfo_jpeg_data_[i] = y[i];
    }

} 



void data_out(int *y, int n)

{ int i,j;
  *y = main_result_;
  y++;
  *y=OutData_image_width_;
  y++;
  *y=OutData_image_height_;
  y++;
    for(i=0;i<RGB_NUM;i++)
   { *y=OutData_comp_vpos_[i];
     y++;
    }
      for(i=0;i<RGB_NUM;i++)
   { *y=OutData_comp_hpos_[i] ;
     y++;
    }
  unsigned char *x = (unsigned char*)y;
   for(i=0;i<RGB_NUM;i++)
    for(j=0;j<BMP_OUT_SIZE;j++)
   { *x=OutData_comp_buf_[i][j] ;
     x++;
    }


}


