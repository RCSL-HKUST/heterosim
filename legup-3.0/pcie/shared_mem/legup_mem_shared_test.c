#include "legup_mem.h"
#include "legup_mem_shared.h"

int main()
{
  int a;
  int *ptr = &a;

  // First pointer should be allocated at the BASE_ADDR
  int *shared_ptr = malloc_shared(sizeof(a), ptr);
  if (!shared_ptr || (int)shared_ptr != BASE_ADDR) {
    free_shared(shared_ptr);
    return 1;
  }

  // Ensure the second pointer is aligned
  int *shared_ptr_2 = malloc_shared(sizeof(a), ptr);
  if (!shared_ptr_2 || (int)shared_ptr_2 != (BASE_ADDR+ALIGN)) {
    free_shared(shared_ptr);
    free_shared(shared_ptr_2);
    return 1;
  }

  // Go over the shared memory heap size, should fail and return NULL
  int *shared_ptr_3 = malloc_shared(HEAP_SIZE, NULL);
  if (shared_ptr_3) {
    free_shared(shared_ptr);
    free_shared(shared_ptr_2);
    free_shared(shared_ptr_3);
    return 1;
  }

  // Allocate some more memory
  shared_ptr_3 = malloc_shared(100*ALIGN, ptr);
  if (!shared_ptr_3 || (int)shared_ptr_3 != (BASE_ADDR+2*ALIGN)) {
    free_shared(shared_ptr);
    free_shared(shared_ptr_2);
    free_shared(shared_ptr_3);
    return 1;
  }

  free_shared(shared_ptr_2);
  shared_ptr_2 = NULL;

  // Can't fit into free block
  int *shared_ptr_4 = malloc_shared(2*ALIGN, ptr);
  if (!shared_ptr_4 || (int)shared_ptr_4 != (BASE_ADDR+102*ALIGN)) {
    free_shared(shared_ptr);
    free_shared(shared_ptr_2);
    free_shared(shared_ptr_3);
    free_shared(shared_ptr_4);
    return 1;
  }

  // Can fit into free block
  shared_ptr_2 = malloc_shared(ALIGN, ptr);
  if (!shared_ptr_2 || (int)shared_ptr_2 != (BASE_ADDR+ALIGN)) {
    free_shared(shared_ptr);
    free_shared(shared_ptr_2);
    free_shared(shared_ptr_3);
    free_shared(shared_ptr_4);
    return 1;
  }

  free_shared(NULL);
  // coalesce none
  free_shared(shared_ptr);
  // coalesce none
  free_shared(shared_ptr_3);
  // coalesce both
  free_shared(shared_ptr_4);
  // coalesce both
  free_shared(shared_ptr_2);

  // Re-allocate and free in a different order
  shared_ptr = malloc_shared(ALIGN, ptr);
  if (!shared_ptr || (int)shared_ptr != BASE_ADDR) {
    free_shared(shared_ptr);
    return 1;
  }

  shared_ptr_2 = malloc_shared(ALIGN, ptr);
  if (!shared_ptr_2 || (int)shared_ptr_2 != BASE_ADDR+ALIGN) {
    free_shared(shared_ptr);
    free_shared(shared_ptr_2);
    return 1;
  }
  shared_ptr_3 = malloc_shared(ALIGN, ptr);
  if (!shared_ptr_3 || (int)shared_ptr_3 != BASE_ADDR+2*ALIGN) {
    free_shared(shared_ptr);
    free_shared(shared_ptr_2);
    free_shared(shared_ptr_3);
    return 1;
  }
  shared_ptr_4 = malloc_shared(ALIGN, ptr);
  if (!shared_ptr_4 || (int)shared_ptr_4 != BASE_ADDR+3*ALIGN) {
    free_shared(shared_ptr);
    free_shared(shared_ptr_2);
    free_shared(shared_ptr_3);
    free_shared(shared_ptr_4);
    return 1;
  }

  // coalesce none
  free_shared(shared_ptr_3);
  // coalesce up
  free_shared(shared_ptr_2);
  // coalesce both
  free_shared(shared_ptr);
  // coalesce both
  free_shared(shared_ptr_4);

  // Re-allocate and free in a different order
  shared_ptr = malloc_shared(ALIGN, ptr);
  if (!shared_ptr || (int)shared_ptr != BASE_ADDR) {
    free_shared(shared_ptr);
    return 1;
  }

  shared_ptr_2 = malloc_shared(ALIGN, ptr);
  if (!shared_ptr_2 || (int)shared_ptr_2 != BASE_ADDR+ALIGN) {
    free_shared(shared_ptr);
    free_shared(shared_ptr_2);
    return 1;
  }

  // coalesce down
  free_shared(shared_ptr);
  // coalesce both
  free_shared(shared_ptr_2);

  // Ensure lowest block is free
  shared_ptr = malloc_shared(ALIGN, ptr);
  if (!shared_ptr || (int)shared_ptr != BASE_ADDR) {
    free_shared(shared_ptr);
    return 1;
  }

  free_shared(shared_ptr);

  return 0;
}
