#include<omp.h>
#include<stdio.h>
int main()
{



int n=1;
float a[n],b[n],c[n],d[n],e[n];

for(int i=0;i<n;i++)
{
a[i]=i*2.0;
b[i]=i+10.0;
}


# pragma omp parallel
{



for(int i=0;i<n;i++)
{
c[i]=a[i]+b[i];
printf("Thread is %d ADD %f\n",omp_get_thread_num(),c[i]);
}




for(int i=0;i<n;i++)
{
d[i]=a[i]-b[i];
printf("Thread is %d SUB %f\n",omp_get_thread_num(),c[i]);
}



for(int i=0;i<n;i++)
{
e[i]=a[i]*b[i];
printf("Thread is %d MUL %f\n",omp_get_thread_num(),c[i]);
}


}

return (0);
}