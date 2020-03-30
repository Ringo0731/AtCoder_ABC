#include<stdio.h>

int main(void){

    int N,A[17],x[17][17],y[17][17],correct[17] = {0};
    int i,j,ans = 0;

    scanf("%d",&N);
    for(i = 1;i <= N;i++){
        scanf("%d",&A[i]);
        for(j = 1;j <= A[i];j++){
            scanf("%d %d",&x[i][j],&y[i][j]);
        }
    }

    
