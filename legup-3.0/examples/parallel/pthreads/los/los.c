#define DIM_X 60
#define DIM_Y 30
#define NUM_ACCEL 6
#define OPS_PER_ACCEL DIM_Y/NUM_ACCEL

#include <stdio.h>
#include <pthread.h>
#include "los.h"

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
int final_result = 0;

struct thread_data{
   int  startidx;
   int  maxidx;
};

//x0 and x0 are the coordinates of the pixel under consideration, which will move towards the person
//x1 and y1 are the coordinates of the location of the person
//int line(int y_start, int y_end,  ) {
void *line (void *threadarg) {
	int sx, sy, err, dx, dy, e2, x_pixel, y_pixel;
	int sight;
	int result=0;
	int x0, y0;
	struct thread_data* arg = (struct thread_data*) threadarg;
	int y_start = arg->startidx;
	int y_end = arg->maxidx;

	int x1=30;
	int y1=15;

//	int count=0;
	for (y_pixel=y_start; y_pixel<y_end; y_pixel++) {
		for (x_pixel=0; x_pixel<DIM_X; x_pixel++) {

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
				if (obstacles[y0][x0] == 1) {
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
		for (x_pixel=0; x_pixel<DIM_X; x_pixel++) {
			result += (expected[y_pixel][x_pixel] == output[y_pixel][x_pixel]);
		}
	}

	pthread_mutex_lock (&mutex);
	final_result += result;
	pthread_mutex_unlock (&mutex);	

	pthread_exit(NULL);
}

int result[NUM_ACCEL];

int main() {
	int i,j;
	int main_result=0;
	//create the thread variables
	pthread_t threads[NUM_ACCEL];
	struct thread_data data[NUM_ACCEL];

	for (i=0; i<NUM_ACCEL; i++) {
		//initialize structs to pass into accels
		data[i].startidx = i*OPS_PER_ACCEL;
		data[i].maxidx = (i+1)*OPS_PER_ACCEL;
		//result[i] = line(DIM_X, OPS_PER_ACCEL*i, OPS_PER_ACCEL*(i+1), input, output, obstacles, expected);
		pthread_create(&threads[i], NULL, line, (void *)&data[i]);
	}

	//join the threads
	for (i=0; i<NUM_ACCEL; i++) {
		pthread_join(threads[i], NULL);
	}

	//check final result
	printf ("Result: %d\n", final_result);
	if (final_result == 1800) {
		printf("RESULT: PASS\n");
	} else {
		printf("RESULT: FAIL\n");
	}

	return 0;
}
