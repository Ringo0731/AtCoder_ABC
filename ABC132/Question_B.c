#include<stdio.h>

int main(void){

    int N,P[20],i,result=0;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&P[i]);
    }

    for(i = 1;i < N - 1;i++){
        if(P[i] > P[i - 1] && P[i] < P[i + 1]){
            result++;
        }else if(P[i] < P[i - 1] && P[i] > P[i + 1]){
            result++;
        }
    }

    printf("%d",result);
    return 0;
}