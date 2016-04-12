#include "legup_mem.h"

#include <stdlib.h>
#include <string.h>

/* Dummy implementation that actually mallocs, frees and copies, so that memory problems can be debugged with a software memory profiler */

void *malloc_shared(size_t size, void *original_ptr)
{
  return malloc(size);
}

void free_shared(void *ptr)
{
  free(ptr);
}

void memcpy_from_shared(void *dst, void *src, size_t num)
{
  memcpy(dst, src, num);
}

void memcpy_to_shared(void *dst, void *src, size_t num)
{
  memcpy(dst, src, num);
}
