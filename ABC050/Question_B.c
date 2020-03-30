#include<stdio.h>

#define MAX 10001

int main(void){

    int N,M,i,j,T[MAX],P[101],X[MAX],ans,tmp;

    scanf("%d",&N);
    for(i = 1;i <= N;i++){
        scanf("%d",&T[i]);
    }
    scanf("%d",&M);
    for(i = 1;i <= M;i++){
        scanf("%d %d",&P[i],&X[i]);
    }

    for(i = 1;i <= M;i++){
        ans = 0;
        for(j = 1;j <= N;j++){
            if(P[i] == j){
                ans += X[i];
            }else{
                ans += T[j];
            }
        }
        printf("%d\n",ans);
    }

    return 0;
}
