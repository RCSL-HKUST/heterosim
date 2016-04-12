#include "bsort100.c"

int main()
{
   int number_array[20] = {1,2,200,10,34,65,23,78,79,11,23,55,123,1001,91,11221,1,7,203020,12};
   int i,r;
   int  size0 = 80; int size1 = 80; 
       *((volatile unsigned int *)0xf000f008) = (unsigned int)(number_array);
    *((volatile unsigned int *)0xf000f00C) = 100;  
   
   printf("------Original Array-------\n");
   for(i=0; i<20; i++)
   {
	 printf("%d \n", number_array[i]);
	}

   
	 

   
 
    r = bubblesort(number_array, size0, number_array, size1);

   printf("------Sorted Array-------\n");
   for(i=0; i<20; i++)
   {
    printf("%d \n", number_array[i]);
   }
  return 0;
}
