#include "qsort-exam-integer.c"
#include "qsort-exam-integer.h"


int main()
{

  int arr[20] = {
  5, 4, 103, 11, 57, 100, 231, 111, 495, 99,
  10, 150, 22222, 101, 77, 44, 35, 2054, 9999, 8888
  };
  int i;
  int size = 84;
  int s = 80;
  int array[21];
  for(i=0;i<20;i++)
     array[i+1]=arr[i]; 
  array[0] = 20;
  int finish;
  finish = sort( array, size, &array[1], s);
 
 for(i=0;i<20;i++)
  {
    printf("%d		\n", array[i+1]);
  }
  return 0;
}
