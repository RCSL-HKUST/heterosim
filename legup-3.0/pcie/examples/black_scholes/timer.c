#include "timer.h"
#include <sys/time.h>
#include <time.h>
#include <assert.h>


double
get_seconds ()
{
  struct timeval tv;
  double s;

  assert (0 == gettimeofday (&tv, NULL));
  return (double) tv.tv_sec + 1.0e-6 * ((double) tv.tv_usec);
}

void
init_timer ()
{
  /* 
   * "Prime" gettimeofday().  This is helpful on some systems, 
   * as the first call in a program may be inaccurate.
   */
  double t = get_seconds ();
  return;
}


