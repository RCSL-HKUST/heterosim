#include "legup_mem.h"

int main()
{
  int a;
  int *ptr = &a;

  int *shared_ptr = malloc_shared(sizeof(a), ptr);
  return shared_ptr != ptr;
}
