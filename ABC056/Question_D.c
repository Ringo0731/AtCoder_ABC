#include<stdio.h>
#include<stdlib.h>

#define MAX_LENTH 5000

long int compare_LongInt(const void *a,const void *b){
    return *(long int*)a - *(int*)b;
}

int main(void){

    int N,K,i,ans=0;
    long int a[MAX_LENTH],Total = 0;

    scanf("%d %d",&N,&K);
    for(i = 0;i < N;i++){
        scanf("%ld",&a[i]);
        Total += a[i];
    }

    qsort(a,N,sizeof(long int),compare_LongInt);

    if(Total < K){
        printf("%d",N);
    }else{
        i = -1;
        while(Total >= K){
            i++;
            Total -= a[i];
        }
    ans = i;
    printf("%d",ans);
    }
    return 0;
}
