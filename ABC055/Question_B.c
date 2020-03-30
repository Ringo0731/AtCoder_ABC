#include<stdio.h>

int main(void){

    int N,i;
    unsigned long ans = 1;

    scanf("%d",&N);
    for(i = 1;i <= N;i++){
        ans = (i * ans) % (1000000000+7);
    }

    printf("%lu",ans);
    return 0;
}
