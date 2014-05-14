#include <omp.h>
#include <stdio.h>

int main()
{
	int tid, nthreads;

#pragma omp parallel private(tid)
	{
		tid=omp_get_thread_num();
#pragma omp single
		nthreads=omp_get_num_threads();
		printf("%d/%d: hello world.\n", tid, nthreads);
	}

	return 0;
}
