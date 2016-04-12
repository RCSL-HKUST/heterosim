#include "milieu.h"
#include "softfloat.h"

/*----------------------------------------------------------------------------
| Floating-point rounding mode, extended double-precision rounding precision,
| and exception flags.
*----------------------------------------------------------------------------*/
int8 float_rounding_mode = float_round_nearest_even;
int8 float_exception_flags = 0;

/*----------------------------------------------------------------------------
| Primitive arithmetic functions, including multi-word arithmetic, and
| division and square root approximations.  (Can be specialized to target if
| desired.)
*----------------------------------------------------------------------------*/
#include "softfloat-macros"

/*----------------------------------------------------------------------------
| Functions and definitions to determine:  (1) whether tininess for underflow
| is detected before or after rounding by default, (2) what (if anything)
| happens when exceptions are raised, (3) how signaling NaNs are distinguished
| from quiet NaNs, (4) the default generated quiet NaNs, and (5) how NaNs
| are propagated from function inputs to output.  These details are target-
| specific.
*----------------------------------------------------------------------------*/
#include "softfloat-specialize"
const float64 sub (const float64 *a,const float64 *b)

{ return float64_add (a, b);  }

