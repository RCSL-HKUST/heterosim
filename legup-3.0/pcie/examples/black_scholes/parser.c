#include "parser.h"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>


double 
to_double (const char* s)
{
  double val;

  errno = 0;
  val = strtod (s, NULL);
  if (errno != 0)
    {
      fprintf (stderr, "*** Can\'t read string \'%s\' as a double; errno = %d ***\n", s, errno);
      errno = 0;
      exit (EXIT_FAILURE);
    }
  return val;  
}

int
to_int (const char* s)
{
  int val;

  errno = 0;
  val = (int) strtol (s, NULL, 10);
  if (errno != 0)
    {
      fprintf (stderr, "*** Can\'t read string \'%s\' as an int; errno = %d ***\n", s, errno);
      errno = 0;
      exit (EXIT_FAILURE);
    }
  return val;  
}

void
parse_parameters (double* S, 
		  double* E, 
		  double* r, 
		  double* sigma, 
		  double* T, 
		  int* M, 
		  const char* filename)
{
  char line[400];
  FILE* stream = NULL;

  stream = fopen (filename, "r");
  if (stream == NULL)
    {
      fprintf (stderr, "*** Failed to open parameters file \'%s\' ***\n", filename);
      exit (EXIT_FAILURE);
    }

  if (NULL == fgets (line, 400, stream))
    {
      fprintf (stderr, "*** Failed to read parameter S from parameters file \'%s\' ***\n", filename);
      exit (EXIT_FAILURE);
    }
  *S = to_double (line);

  if (NULL == fgets (line, 400, stream))
    {
      fprintf (stderr, "*** Failed to read parameter E from parameters file \'%s\' ***\n", filename);
      exit (EXIT_FAILURE);
    }
  *E = to_double (line);

  if (NULL == fgets (line, 400, stream))
    {
      fprintf (stderr, "*** Failed to read parameter r from parameters file \'%s\' ***\n", filename);
      exit (EXIT_FAILURE);
    }
  *r = to_double (line);

  if (NULL == fgets (line, 400, stream))
    {
      fprintf (stderr, "*** Failed to read parameter sigma from parameters file \'%s\' ***\n", filename);
      exit (EXIT_FAILURE);
    }
  *sigma = to_double (line);

  if (NULL == fgets (line, 400, stream))
    {
      fprintf (stderr, "*** Failed to read parameter T from parameters file \'%s\' ***\n", filename);
      exit (EXIT_FAILURE);
    }
  *T = to_double (line);

  if (NULL == fgets (line, 400, stream))
    {
      fprintf (stderr, "*** Failed to read parameter M from parameters file \'%s\' ***\n", filename);
      exit (EXIT_FAILURE);
    }
  *M = to_double (line);
}
