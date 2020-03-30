#include<stdio.h>

int main(void){

    long int N,M,ans;

    scanf("%ld %ld",&N,&M);

    if(N > M || M < N*2){
        ans = M/2;
    }else{
        ans = N;
        M -= N*2;
        ans += M/4;
    }

    printf("%ld",ans);
    return 0;
}
