#define DIM_X 60
#define DIM_Y 30
#define NUM_ACCELS 6
#define OPS_PER_ACCEL DIM_Y/NUM_ACCELS

#include <stdio.h>
#include "los.h"


//x0 and x0 are the coordinates of the pixel under consideration, which will move towards the person
//x1 and y1 are the coordinates of the location of the person
//int line(int x0, int y0, int x1, int y1, int input[][DIM_X], int output[][DIM_X], int obstacles[][DIM_X]) {
int line(int x_end, int y_start, int y_end, int input[][DIM_X], int output[][DIM_X], int blocks[][DIM_X], int expected[][DIM_X]) {
	int sx, sy, err, dx, dy, e2, x_pixel, y_pixel;
	int sight;
	int result=0;
	int x0, y0;

	int x1=30;
	int y1=15;

//	int count=0;
	for (y_pixel=y_start; y_pixel<y_end; y_pixel++) {
		for (x_pixel=0; x_pixel<x_end; x_pixel++) {

			sight=1;
			x0 = x_pixel;
			y0 = y_pixel;
			if (x0 < x1) {
				sx=1;
				dx=x1-x0;
			}
			else {
				sx=-1;
				dx=x0-x1;
			}

			if (y0 < y1) {
				sy=1;
				dy=y1-y0;
			}
			else {
				sy=-1;
				dy=y0-y1;
			}
	
			err=dx-dy;

			while (1) {
//				printf("x0 = %d y0 = %d\n", x0, y0);
//				count++;
				if ((x0==x1) && (y0==y1)) {
//					printf("IN!!!\n");
					break;
				}
				//if there's an obstacle
//				printf("obstacles[y0][x0] = %d\n", obstacles[y0][x0]);
				if (blocks[y0][x0] == 1) {
					sight=0;
					break;
				}
				e2=2*err;
				if (e2 > -dy) {
					err = err - dy;
					x0 = x0+sx;
				}
		
				if (e2 < dx) {
					err = err + dx;
					y0 = y0 + sy;
				}
			}	
	
			//if an obstacle was found on the way
			if (sight == 1) {
				//copy over the input pixel to output
				output[y_pixel][x_pixel] = input[y_pixel][x_pixel];
			}
			//if there was no obstacle on the way
			else {
				//store zero as the output
				output[y_pixel][x_pixel] = 0;
			}
		}
	}

	//Checking the results
	for (y_pixel=y_start; y_pixel<y_end; y_pixel++) {
		for (x_pixel=0; x_pixel<x_end; x_pixel++) {
			result += (expected[y_pixel][x_pixel] == output[y_pixel][x_pixel]);
		}
	}

 	return result;
}

int result[NUM_ACCELS];

int main() {
	int i,j;
	int main_result=0;

	#pragma omp parallel for num_threads(NUM_ACCELS) private(i)
	for (i=0; i<NUM_ACCELS; i++) {
		result[i] = line(DIM_X, OPS_PER_ACCEL*i, OPS_PER_ACCEL*(i+1), input, output, obstacles, expected);
	}

	//combine results
	for (i=0; i<NUM_ACCELS; i++) {
		main_result += result[i];
	}

	//check final result
	printf ("Result: %d\n", main_result);
	if (main_result == 1800) {
		printf("RESULT: PASS\n");
	} else {
		printf("RESULT: FAIL\n");
	}

	return 0;
}
