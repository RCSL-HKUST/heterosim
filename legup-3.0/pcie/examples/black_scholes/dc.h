/* dc.h */

/* Copyright (C) 2001-2007 Makoto Matsumoto and Takuji Nishimura.  */
/* This library is free software; you can redistribute it and/or   */
/* modify it under the terms of the GNU Library General Public     */
/* License as published by the Free Software Foundation; either    */
/* version 2 of the License, or (at your option) any later         */
/* version.                                                        */
/* This library is distributed in the hope that it will be useful, */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of  */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.            */
/* See the GNU Library General Public License for more details.    */
/* You should have received a copy of the GNU Library General      */
/* Public License along with this library; if not, write to the    */
/* Free Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA   */ 
/* 02111-1307  USA                                                 */

#ifndef DYNAMIC_CREATION
#define DYNAMIC_CREATION

#include <inttypes.h> /* C99 compiler */

typedef struct {
    uint32_t aaa;
    int mm,nn,rr,ww;
    uint32_t wmask,umask,lmask;
    int shift0, shift1, shiftB, shiftC;
    uint32_t maskB, maskC;
    int i;
    uint32_t *state;
}mt_struct;

void init_dc(uint32_t seed);
mt_struct *get_mt_parameter(int w, int p);
mt_struct *get_mt_parameter_id(int w, int p, int id);
mt_struct **get_mt_parameters(int w, int p, int max_id);
void free_mt_struct(mt_struct *mts);
void sgenrand_mt(uint32_t seed, mt_struct *mts);
uint32_t genrand_mt(mt_struct *mts);

/**
 * Generate a random double-precision floating-point number on [0,1)
 * with 53-bit resolution (so all the bits of the significand are
 * random).
 *
 * Added by Mark Hoemmen <mhoemmen AT cs DOT berkeley DOT edu>
 * on 03 Sept 2007.
 */
double 
genrand_double (mt_struct *mts);

/**
 * Return a 32-bit unsigned random seed, which can be supplied to
 * init_dc().  Prefers /dev/random if it exists and 4 bytes of it can
 * be read; if not, uses the system clock.  Neither case can be
 * guaranteed cryptographically secure, but using /dev/random should
 * be good enough for a MC simulation (?).
 *
 * Added by Mark Hoemmen <mhoemmen AT cs DOT berkeley DOT edu>
 * on 03 Sept 2007.
 */
uint32_t
get_random_seed ();

#endif
