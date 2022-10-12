#include <omp.h>
#include <stdio.h>
int main()
{



int weight,height,bmi,tid;


printf("enter the value for weight and height ");

scanf("%d %d",&weight,&height);



# pragma omp parallel

id =omp_get_thread_num();
bmi=(weight*703)/(height*height);

printf("\n My Thread is  %d :", tid);

if(tid==0)
{printf("\nNumber of thread %d : ",tid);}

printf("\nThread is %d and BMi is %d",omp_get_num_threads(),bmi);

printf("\nnumber of processors avilable = %d",omp_get_num_procs());


}