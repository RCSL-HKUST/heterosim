#ifndef _LEGUP_MEM_SHARED_H
#define _LEGUP_MEM_SHARED_H

// Starting address in the shared memory space
#define BASE_ADDR 0x40000000
// Size of shared memory space in bytes
#define HEAP_SIZE 750000
// Alignment in bytes
#define ALIGN 8

#define SIZE(x) ((x)->hdr & 0x7fffffff)

enum FREE_OR_USED_HDR {
  FREE_HDR = 0,
  USED_HDR = 1
};

struct s_node{
  int addr;
  int hdr; /* (free or used) << 31 | size) */
  struct s_node *prev, *next; /* next and prev free blocks, if applicable */
  struct s_node *up, *down; /* physically adjacent blocks for coalescing */
};

typedef struct s_node S_NODE;

#endif
