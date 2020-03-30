#include<stdio.h>

#define MAX_NUM 200001

int main(void){

    int N,P[MAX_NUM],i,lowest,ans = 0;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&P[i]);
    }

    lowest = P[0];
    for(i = 0;i < N;i++){
        if(P[i] <= lowest){
            ans++;
            lowest = P[i];
        }
    }

    printf("%d\n",ans);
    return 0;
}