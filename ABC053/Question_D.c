#include<stdio.h>
#include<stdlib.h>

#define LENTH_MAX 100000

int compare_int(const void *a,const void *b){
    return *(int*)a - *(int*)b;
}

int main(void){

    int N,A[LENTH_MAX],i,Card_type=0;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&A[i]);
    }

    qsort(A,N,sizeof(int),compare_int);
    for(i = 0;i < N;i++){
        if(A[i] > Card_type){
            Card_type++;
        }
    }

    printf("%d",Card_type - 1);
    return 0;
}
