#ifndef _util_h
#define _util_h

/**
 * Compute the median, min, and max of the given array of doubles.
 * 
 * @param array [IN/OUT]  Array of nelts doubles, for which to find
 *                        the median, min, and max elements.  Array
 *                        is sorted in-place as a side effect.
 * @param nelts [IN]      Number of elements in array[].
 * @param pmedian [OUT]   Receives the median of the array.
 * @param pmin [OUT]      Receives the min of the array.
 * @param pmax [OUT]      Receives the max of the array.
 */
void 
get_median_min_max (double array[],
		    const int nelts,
		    double *pmedian,
		    double *pmin,
		    double *pmax);

int 
max_int (int a, int b);

int 
min_int (int a, int b);

double 
max_double (double a, double b);

double 
min_double (double a, double b);


/*
 * C function pointers are ugly, ugly things.  If you want
 * to pass around typed functions, why not use Haskell or ML?
 */

/**
 * The type of a function that takes no inputs and returns a double.
 */
typedef double (*double_generator_no_input_t) ();

/**
 * The type of a function that takes a single input, which is a void
 * pointer, and returns a double.
 */
typedef double (*double_generator_one_input_t) (void*);




#endif /* _util_h */
