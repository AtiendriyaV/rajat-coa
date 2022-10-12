#include <omp.h>
#include <stdio.h>
#include <time.h>

int main()
{
int tid;
time_t t;

#pragma omp parallel


tid=omp_get_thread_num();
printf("thread %d\n",tid);
time(&t);
printf("current day and time %s\n",ctime(&t));

}