#include <assert.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

uint32_t
get_random_seed ()
{
  const int nread = 4;
  FILE* r = NULL;
  uint32_t seed = (uint32_t) 0;
  char buffer[4];

  assert ((size_t) nread == sizeof (uint32_t));
  r = fopen ("/dev/random", "r");
  if (r == NULL)
    {
      time_t current_time;
      fprintf (stderr, "*** Warning: Failed to open /dev/random, "
	       "falling back on system clock for random seed ***\n");
      current_time = time (NULL);
      return (uint32_t) current_time;
    }
  assert ((size_t) nread == fread (buffer, sizeof(char), (size_t) nread, r));
  seed = *((uint32_t*) buffer);
  fclose (r);
  return seed;
}
