#include "sqrt.h"


int main()
{
 float numbers[] = {2.0,4.0,6.0,9.0,16.0,20.0,25.0,64.0,100.0,125.0};
 float square_root;
 int i;
 for(i= 0; i<10; i++)
 {
   square_root = sqrtfcn(numbers[i]);
   printf("The square root of %f is %f \n", numbers[i], square_root);
 }
 return 0;
}
