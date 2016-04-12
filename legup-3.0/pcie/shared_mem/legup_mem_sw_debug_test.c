#include "legup_mem.h"

#include <string.h>

int main()
{
  char str[5] = "asdf";

  char *shared_ptr = malloc_shared(strlen(str)+1, str);
  if (!shared_ptr) {
    return 1;
  }

  memcpy_to_shared(shared_ptr, str, strlen(str)+1);
  if(strcmp(str, shared_ptr)) {
    free_shared(shared_ptr);
    return 1;
  }

  shared_ptr[0] = 'q';
  if(!strcmp(str, shared_ptr)) {
    free_shared(shared_ptr);
    return 1;
  }

  memcpy_from_shared(str, shared_ptr, 1);

  if (strcmp(str, "qsdf")) {
    free_shared(shared_ptr);
    return 1;
  }

  free_shared(shared_ptr);
  
  return 0;
}
