#include<stdio.h>
#include<stdlib.h>

#define MAX 200000

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main(void){

    int N,A[MAX],original_A[MAX],i,j,biggest,second_biggest;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&A[i]);
        original_A[i] = A[i];
    }

    qsort(A,N,sizeof(int),compare_int);
    biggest = A[N-1];
    second_biggest = A[N - 2];

    for(i = 0;i < N;i++){
        if(original_A[i] == biggest){
            printf("%d\n",second_biggest);
        }else{
            printf("%d\n",biggest);
        }
    }
    return 0;
}