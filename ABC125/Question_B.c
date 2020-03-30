#include<stdio.h>

int main(void){

    int N,i,result = 0,V[20],C[20];

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&V[i]);
    }
    for(i = 0;i < N;i++){
        scanf("%d",&C[i]);
    }

    for(i = 0;i < N;i++){
        if(V[i] > C[i]){
            result += V[i] - C[i];
        }
    }

    printf("%d",result);
    return 0;
}