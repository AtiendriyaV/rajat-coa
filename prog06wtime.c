#include <omp.h>
#include <stdio.h>
#include <time.h>


int main()
{

double start;
double end,etime;
start=omp_get_wtime();
end=omp_get_wtime();
etime=end-start;
printf("work took %f seconds\n",etime);


}