#define OMP_NUM_THREADS	(volatile int*)  0xC5000004
#define OMP_THREAD_ID	(volatile int*)  0xC5000000

#define lock	(volatile int*)  0xC5000020
#define unlock	(volatile int*)  0xC5000024

#define BARRIER_INIT	(volatile int*)  0xC5000040
#define BARRIER_WAIT	(volatile int*)  0xC5000044

void legup_set_num_threads (int n) {
	*OMP_NUM_THREADS = n;
}

int legup_get_num_threads() {
	return *OMP_NUM_THREADS;
}

int legup_get_thread_num() {
	return *OMP_THREAD_ID;
}

void legup_lock(int threadID) {
	do {
		*lock = threadID;
    } while (*lock != threadID);
}

void legup_unlock(int threadID) {
	*unlock = threadID;
}

void legup_barrier_init(int n) {
	*BARRIER_INIT = n;
}

void legup_barrier_wait() {
	*BARRIER_WAIT = 1;
	while (*BARRIER_WAIT != 0) {
	}
}
