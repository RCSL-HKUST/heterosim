  #include <stdio.h> 


#include "prime.c"
#include "qsort-exam-integer.c"
#include "bsort100.c"
#include "bs.c"
#include "qurt.c"
#include "sqrt.c"



int main()
{
   int space [500];
   int i; 
   *((volatile int *)0xf0000f00) = (int)&space[0];
   *((volatile int *)0xf0000f04) = (int)&space[500]; 
   int arr0[21] = {7, 1, 16, 19, 6 ,11, 17, 3, 8, 14, 10, 13, 5, 12, 9, 0, 15, 2, 4,  18, 20};
  struct DATA data_[16] = { {1, 100},
	     {5,200},
	     {6, 300},
	     {7, 700},
	     {8, 900},
	     {9, 250},
	     {10, 400},
	     {11, 600},
	     {12, 800},
	     {13, 1500},
	     {14, 1200},
	     {15, 110},
	     {16, 140},
	     {17, 133},
	     {18, 10},
             {8, 0} };
   float numbers_[] = {2.0,4.0,6.0,9.0,16.0,20.0,25.0,64.0,100.0,125.0};
 
  int * arr1;
  arr1 = &space[0];  
  for (i=0;i<20;i++)
   arr1[i]=arr0[i];  

  int * arr2;
  arr2 = &space[50]; 
  for (i=0;i<21;i++)
   arr2[i]=arr0[i];   
  
  struct DATA * data;
  data = (struct DATA *)&space[100];
  for (i=0;i<16;i++) 
   data[i] = data_[i];  

  int  * re;
   re = &space[150];
  uint * x;
   x = (uint *)&space[200];  
   *x = 21649; 
  bool1 * r;
  r = (bool1*)&space[250];
  double * a;
  a = (double *)&space[300];
     a[0] =  3.0;
     a[1] =  8.0;
     a[2] =  4.0;  
  double * xroot;
   xroot = (double *)&space[350];
  float * numbers;
   numbers = (float *)&space[400];
  for (i=0;i<10;i++) 
   numbers[i] = numbers_[i];  


  float * square_root;
  square_root = (float *)&space[450];      

  int size0,size1; 
  int r0;

  size0 = 80; size1 = 80;

  r0 = bubblesort(arr1, size0, arr1, size1);

  size0 = 84; size1= 80;

  r0 = sort(arr2, size0, arr2, size1 );
  
  size0 = 124; size1 =4;
  r0 = binary_search((int*)data,size0,re,size1);
  
  size0 = 4; size1 = 4;
  r0 =  prime(x,size0, r,size1); 

 // size0 = 24; size1 = 32;
 // r0 = qurt(a, size0, xroot, size1); 


  //size0 = 4; size1 = 4; 
  // for(i= 0; i<10; i++)
 //{ 
 //  r0 = sqrtfcn(&numbers[i], size0, &square_root[i], size1);
// }
  

   
   
  printf("bubblesort\n"); 
  for(i=0;i<20;i++)
  {printf("%d\n", arr1[i]);}
  printf("quicksort\n");
  for(i=0;i<20;i++)
  {printf("%d\n", arr2[i]);} 
  printf("search result %d\n",*re);
  printf("prime %d\n",*r);

  //  printf("The quadratic equation is : %fx^2 + %fx + %f\n", a[0], a[1], a[2]);
 //   printf("Its roots are: %f, %f, %f, %f \n", xroot[0], xroot[1], xroot[2], xroot[3]);
 
   for(i= 0; i<10; i++);
   //  printf("The square root of %f is %f \n", numbers[i], square_root[i]);   
}





















