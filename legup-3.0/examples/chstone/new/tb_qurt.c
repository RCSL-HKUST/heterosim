#include "qurt.h"

int main()
{

   double a[3];
   double x1_1,  x1_2,  x2_1,  x2_2;
	a[0] =  3.0;
	a[1] =  8.0;
	a[2] =  4.0;

	qurt(a, &x1_1, &x1_2, &x2_1, &x2_2);
    printf("The quadratic equation is : %fx^2 + %fx + %f\n", a[0], a[1], a[2]);
	printf("Its roots are: %f, %f, %f, %f \n", x1_1, x1_2, x2_1, x2_2);

  return 0;
}
