#include "util.h"
#include <stdlib.h>


static int 
compare_double (const void *d1, const void *d2)
{
  double v_d1 = *((double *)d1);
  double v_d2 = *((double *)d2);

  if (v_d1 < v_d2) 
    return -1;
  else if (v_d1 > v_d2) 
    return 1;
  else
    return 0;
}

void 
get_median_min_max (double array[],
		    const int nelts,
		    double *pmedian,
		    double *pmin,
		    double *pmax)
{
  qsort (array, nelts, sizeof(double), compare_double);
  *pmin = array[0];
  *pmax = array[nelts - 1];
  *pmedian = (nelts % 2) ? array[nelts/2] : (array[nelts/2 - 1] + array[nelts/2]) / (double) 2.0;
}

int 
max_int (int a, int b)
{
  return (a>b)?a:b;
}

int 
min_int (int a, int b)
{
  return (a<b)?a:b;
}

double 
max_double (double a, double b)
{
  return (a>b)?a:b;
}

double 
min_double (double a, double b)
{
  return (a<b)?a:b;
}



