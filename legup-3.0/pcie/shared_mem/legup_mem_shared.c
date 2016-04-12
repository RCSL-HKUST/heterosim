#include "legup_mem.h"
#include "legup_mem_shared.h"
#include "alt_up_pci_lib_helper.h"

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <search.h>

// Initialize the initial free block. Its free list pointers create a circular linked list to itself
static S_NODE free_blk = {BASE_ADDR, (FREE_HDR << 31) | HEAP_SIZE, &free_blk, &free_blk, NULL, NULL};

/* Binary tree stuff to lookup used block from address */
void *root = NULL;

int compare(const void *pa, const void *pb)
{
   if (((S_NODE *)pa)->addr < ((S_NODE *)pb)->addr)
     return -1;
   if (((S_NODE *)pa)->addr > ((S_NODE *)pb)->addr)
     return 1;
   return 0;
}

// print address of each node (debugging)
void action(const void *nodep, const VISIT which, const int depth)
{
  int *datap;

  switch (which) {
    case preorder:
    case endorder:
      break;
    case postorder:
    case leaf:
      datap = *(int **) nodep;
      printf("%x\n", *datap);
      break;
  }
}
/* End binary tree stuff */

void *malloc_shared(size_t size, void *original_ptr)
{
  // Round size up to nearest ALIGN bytes
  size = (size + ALIGN-1) &~(ALIGN-1);

  S_NODE *finger = &free_blk;
  do {
    finger = finger->next;
    if (SIZE(finger) >= size) {
      break;
    }
  } while (finger != &free_blk);

  // Check heap space
  if (SIZE(finger) < size) {
    return NULL;
  }

  // Transform free block into a used block
  if (SIZE(finger) == size && finger != &free_blk) {
    finger->hdr |= (USED_HDR << 31);
    if (finger->prev) {
      finger->prev->next = finger->next;
    }
    if (finger->next) {
      finger->next->prev = finger->prev;
    }

    // add address->used block to tree and cleanup
    void *val = tsearch(finger, &root, compare);
    if (val == NULL) {
      return NULL;
    }

    return (void *)(finger->addr);
  }

  // Split free block
  S_NODE *node = (S_NODE *)malloc(sizeof(S_NODE));
  if (!node) {
    return NULL;
  }
  node->addr = finger->addr;
  node->hdr = (USED_HDR << 31) | size;
  node->prev = node->next = NULL;
  node->up = finger;
  node->down = finger->down;
  if (node->down) {
    node->down->up = node;
  }

  // Update finger
  finger->addr += size;
  finger->hdr = (FREE_HDR << 31) | (SIZE(finger) - size);
  finger->down = node;

  // add address->used block to tree and cleanup
  void *val = tsearch(node, &root, compare);
  if (val == NULL) {
    return NULL;
  }

  return (void *)(node->addr);
}

void free_shared(void *ptr)
{
  // No-op
  if (!ptr) {
    return;
  }

  // Used to find the used block, given an address
  S_NODE temp_node;

  int addr = (int)ptr;
  temp_node.addr = addr;

  // Error check
  S_NODE **finger_ptr = tfind(&temp_node, &root, compare);
  if (!finger_ptr || (*finger_ptr)->addr != addr) {
    fprintf(stdout, "Couldn't free pointer %x\n", addr);
    exit(1);
  }

  // coalesce finger to free it
  S_NODE *finger = *finger_ptr;

  // can't free finger until the tree node is free (at the end)
  S_NODE *free_finger = (finger != &free_blk) ? finger : NULL;
  bool coalesced = false;
  // coalesce with up
  if (finger->up && (finger->up->hdr >> 31) == FREE_HDR) {
    finger = finger->up;
    finger->addr = finger->down->addr;
    finger->hdr = SIZE(finger) + SIZE(finger->down);
    finger->down = finger->down->down;
    if (finger->down) {
      finger->down->up = finger;
    }
    coalesced = true;
  }
  // coalesce with bottom
  if (finger->down && (finger->down->hdr >> 31) == FREE_HDR) {
    if (coalesced) {
      // let the upper block take over the lower block
      S_NODE *to_del = finger->down;
      if (to_del->prev) {
        to_del->prev->next = to_del->next;
      }
      if (to_del->next) {
        to_del->next->prev = to_del->prev;
      }
      finger->addr = to_del->addr;
      finger->hdr = SIZE(finger) + SIZE(to_del);
      finger->down = to_del->down;
      if (finger->down) {
        finger->down->up = finger;
      }
      free(to_del);
    } else {
      finger = finger->down;
      finger->hdr = SIZE(finger) + SIZE(finger->up);
      finger->up = finger->up->up;
      if (finger->up) {
        finger->up->down = finger;
      }
      coalesced = true;
    }
  }
  if (!coalesced) {
    // set block as free
    finger->hdr &= ~(USED_HDR << 31);
    // insert freed block to front
    finger->next = free_blk.next;
    finger->prev = &free_blk;
    free_blk.next = finger;
    if (finger->next) {
      finger->next->prev = finger;
    }

    // don't free finger since it is a free block
    free_finger = NULL;
  }

  // remove newly freed ptr from used tree
  tdelete(&temp_node, &root, compare);
  free(free_finger);
}

void memcpy_from_shared(void *dst, void *src, size_t num)
{
  pci_read_data(dst, num, (int)src);
  pci_dma_go();
}

void memcpy_to_shared(void *dst, void *src, size_t num)
{
  pci_write_data(src, num, (int)dst);
  pci_dma_go();
}
