#include<stdio.h>

#define MAX 50

int main(void){

    int M,N,i,j;
    char pic_A[MAX][MAX],pic_B[MAX][MAX];

    scanf("%d %d",&N,&M);
    for(i = 0;i < N;i++){
        for(j = 0;j < N;j++){
            scanf("%s",pic_A[i][j]);
        }
    }
    for(i = 0;i < M;i++){
        for(j = 0;j < M;j++){
            scanf("%s",pic_B[i][j]);
        }
    }


