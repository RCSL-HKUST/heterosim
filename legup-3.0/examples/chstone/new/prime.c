#include "prime.h"



bool1 divides (uint n, uint m) {
  return (m % n == 0);
}

bool1 even (uint n) {
  return (divides (2, n));
}

bool1 prime (uint* a, int b, bool1* c, int d) {
  uint n = *a;
  uint i;
  if (even (n))
      {*c = (n==2);
       return b+d;}
  for (i = 3; i * i <= n; i += 2) { 
      if (divides (i, n)) /* ai: loop here min 0 max 357 end; */
         { *c = 0;
           return b+d;} 
  }
  {*c = (n>1);
   return b+d;}
}


