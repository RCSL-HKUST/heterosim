#ifndef _random_h
#define _random_h

#include <inttypes.h>

/**
 * Initialize the pseudorandom number generator once for all the threads.
 * This should be called once by only one thread (which is the master
 * thread in the case of this assignment), before any random numbers
 * are requested.
 * 
 * @note If you use the same seed each time you run your program, you'll
 * generate the same random streams each time.  This can be useful for 
 * testing.
 *
 * @param seed [IN]  32-bit unsigned random seed.
 */
void
init_prng (uint32_t seed);

/**
 * Generate a random seed to supply to init_prng(), in case you don't
 * want the same seed each time.  We get 32 bits from /dev/random if 
 * that (device) file exists, else we use the current time as a 
 * fallback.
 *
 * @note This is NOT a cryptographically secure seed, but should be 
 * good enough for a Monte Carlo application.
 */
uint32_t
random_seed ();

/**
 * Spawn a new PRNG stream.
 * 
 * @param thread_id [IN]  Thread ID number.  Valid values are 
 *                        0, 1, 2, ..., 65535.
 * @return Pointer to a "thread-local PRNG stream" object
 */
void*
spawn_prng_stream (const int thread_id);

/**
 * Free a PRNG stream.
 *
 * @param prng_stream [IN/OUT] Pointer to a "thread-local PRNG stream" object
 */
void
free_prng_stream (void* prng_stream);

/**
 * @param prng_stream [IN/OUT] Pointer to a "thread-local PRNG stream"
 *        object which was created by spawn_prng_stream().  
 *
 * @return Random double, uniformly distributed in the range [0,1).
 *
 * @note No mutual exclusion is done to protect the stream,
 *       so it should only used be called by one thread.  
 */
double
uniform_random_double (void* prng_stream);

#endif /* _random_h */
