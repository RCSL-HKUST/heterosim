#include "random.h"
#include "dc.h"

#include <assert.h>
#include <inttypes.h>
#include <pthread.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 * Mutex for protecting the (bad, to be fixed) PRNG below.  If you
 * initialize it this way (with PTHREAD_MUTEX_INITIALIZER), you don't
 * have to call pthread_mutex_init() on it before using it.
 */
static pthread_mutex_t prng_mutex = PTHREAD_MUTEX_INITIALIZER;

/**
 * This ensures that init_prng_impl() is only called once.  We don't
 * really need to do this, but I figured it would take away a possible
 * bug that might puzzle students for a while, in case they try to call
 * init_prng() in every worker thread, rather than once in the master
 * thread before the worker threads are created.
 */
static pthread_once_t prng_once = PTHREAD_ONCE_INIT;

/**
 * We use this to pass the PRNG's global seed from init_prng() into
 * the implementation of setting the initial state.  This is because 
 * pthread_once() requires that the function protected by a "once"
 * construct (that only allows the function to be called once) take
 * no arguments (and return no values).  Look up "pthread_once" in the
 * POSIX standard for more info.
 *
 * After init_prng_impl() finishes, the value of this variable is
 * undefined, so don't try to use it!
 */
static uint32_t prng_seed = (uint32_t) 0;

uint32_t
random_seed ()
{
  return get_random_seed ();  
}

/**
 * "Back end" of init_prng() that works with the pthread_once() construct.
 */
static void
init_prng_impl ()
{
#ifdef USE_MERSENNE_TWISTER
  /* 
   * No need to protect prng_seed with a mutex, since init_prng_impl() 
   * can only be called once by one thread.
   */
  init_dc (prng_seed);
#else
  srand ((unsigned int) prng_seed);
#endif /* USE_MERSENNE_TWISTER */
}

void 
init_prng (uint32_t seed)
{
  /* 
   * This is ugly, but we do it as a debugging courtesy to students
   * and not out of necessity.  Really, you should only call init_prng()
   * once in the master thread, before all the other threads are created.
   */

  /* Set the global seed variable */
  assert (0 == pthread_mutex_lock (&prng_mutex));
  prng_seed = seed;
  assert (0 == pthread_mutex_unlock (&prng_mutex));

  /* Initialize the global PRNG */
  pthread_once (&prng_once, &init_prng_impl);
}

void*
spawn_prng_stream (const int thread_id)
{
#ifdef USE_MERSENNE_TWISTER
  mt_struct* mt = get_mt_parameter_id (32, 521, thread_id);
  assert (mt != NULL);

  /* FIXME: this isn't so random, though it makes for reproducible
     results as long as the global seed is the same */
  sgenrand_mt ((uint32_t) thread_id, mt);
  return (void*) mt;
#else
  return NULL;
#endif /* USE_MERSENNE_TWISTER */
}

void
free_prng_stream (void* prng_stream)
{
#ifdef USE_MERSENNE_TWISTER
  free_mt_struct ((mt_struct*) prng_stream);
#else
  return;
#endif /* USE_MERSENNE_TWISTER */
}


double
uniform_random_double (void* prng_stream)
{
#ifdef USE_MERSENNE_TWISTER
  return genrand_double ((mt_struct*) prng_stream);
#else
  double d;
  assert (0 == pthread_mutex_lock (&prng_mutex));
  d = (double) rand () / (double) RAND_MAX;
  assert (0 == pthread_mutex_unlock (&prng_mutex));
  return d;
#endif /* USE_MERSENNE_TWISTER */
}

