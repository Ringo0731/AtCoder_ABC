#include<stdio.h>

int max(int a,int b){
    return ((a > b) ? a : b);
}

int main(void){

    int N,i,B[99],A[100],ans = 0;

    scanf("%d",&N);
    for(i = 0;i < N-1;i++){
        scanf("%d",&B[i]);
    }

    A[0] = B[0];

    for(i = 0;i < N - 1;i++){
        A[i + 1] = B[i];
        if(max(A[i],A[i + 1]) != B[i]){
            A[i] = B[i];
        }
    }

    for(i = 0;i < N;i++){
        //printf("A[%d] : %d\n",i,A[i]);
        ans += A[i];
    }

    printf("%d",ans);
    return 0;
}