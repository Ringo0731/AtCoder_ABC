#include<stdio.h>

int main(void){

    int N,i,j,d[101],ans = 0;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&d[i]);
    }

    for(i = 0;i < N;i++){
        for(j = i + 1;j < N;j++){
            ans += d[i] * d[j];
        }
    }

    printf("%d\n",ans);
    return 0;
}