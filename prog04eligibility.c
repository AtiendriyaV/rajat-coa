#include<omp.h>
#include<stdio.h>
int main()
{


int n=4;
int i,tid;
int a[n];

for(i=0;i<n;i++)
{
printf("Enter the age :  ");
scanf("%d" ,&a[i]);
}



# pragma omp parallel
{


int tid=1;


omp_set_num_threads(tid);

for(i=0;i<n;i++)
{

if(tid==1)
{
if (a[i]>=16 && a[i]<18)
printf("\n eligible  %d : %d ",tid,a[i]);
}


else if(tid1==0)
{
if(a[i]<16 && a[i]>18)
printf("\n not eligible %d :  %d ",tid,a[i]);
}

}
}
}