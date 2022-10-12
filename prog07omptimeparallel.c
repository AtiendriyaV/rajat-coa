#include <omp.h>
#include <stdio.h>
#include <time.h>
int main()
{



int n=10,i;
float a[n],b[n],c[n],d[n],e[n];
double ttime,ftime,exec_time;

for(i=0;i<n;i++)
{
a[i]=i*2;
b[i]=i+10;
}
ttime=omp_get_wtime();
printf("\ninitial time taken is is %f",ttime);

# pragma omp parallel
{
for(int i=0;i<n;i++)
{
c[i]=a[i]+b[i];
printf("Thread is %d ADD %d\n",omp_get_thread_num(),c[i]);
}

/*for(int i=0;i<n;i++)
{
d[i]=a[i]*b[i];
printf("Thread is %d MUL %d\n",omp_get_thread_num(),c[i]);
}

for(int i=0;i<n;i++)
{
e[i]=a[i]-b[i];
printf("Thread is %d SUB %d\n",omp_get_thread_num(),c[i]);
}*/
}
ftime=omp_get_wtime();
printf("\nfinal time taken is is %f",ftime);
exec_time=ftime-ttime;
printf("\n\ntime taken is is %f",exec_time);
return (0);
}