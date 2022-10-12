#include <omp.h>
#include<stdio.h>

int main()
{
int a[4]={5,10,15,20};
int b[4]={5,10,15,20};
int sum[4];
int i=0;

# pragma omp paralle for
for(i=0;i<4;i++)
{
sum[i]=a[i]+b[i];
printf("Thread is %d sum is %d",omp_get_num_threads,sum[i]);
}
return(0);

}