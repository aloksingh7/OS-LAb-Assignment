#include<stdio.h>
#include<pthread.h>
int global[2];

void *sum_thread(void *arg)
{
    int *args_array;
    args_array = arg;

    int n1,n2,sum;
    n1=args_array[0];
    n2=args_array[1];
    sum = n1+n2;
printf("Hello!!! Welcome to LPU\n");
    printf("Sum = %d\n",sum);


    return NULL;
}

int main() 
{
    printf("First number: ");
    scanf("%d",&global[0]);

    printf("Second number: ");
    scanf("%d",&global[1]);

    pthread_t tid_sum, tid1;
    pthread_create(&tid_sum,NULL,sum_thread,global);
    pthread_join(tid_sum,NULL);
pthread_create(&tid1, NULL, sum_thread,NULL);

    return 0;
}
