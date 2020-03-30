#include<stdio.h>
#include<stdlib.h>

#define MAX 100000

int compare_int(const void *a,const void *b){
    return *(int*)a - *(int*)b;
}

int main(void){

    int N,d[MAX],i,j,tmp,result;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&d[i]);
    }

    qsort(d,N,sizeof(int),compare_int);

    result = d[N/2] - d[(N/2) - 1];

    printf("%d",result);
    return 0;
}