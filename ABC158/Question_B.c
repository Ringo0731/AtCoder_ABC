#include<stdio.h>

#define llu unsigned long long int

int main(void){

    llu N,A,B,ans = 0,mod;

    scanf("%llu %llu %llu",&N,&A,&B);

    if(A == 0){
        ans = 0;
    }else if(A >= N){
        ans = N;
    }else if(A+B >= N){
        ans = A;
    }else{
        ans += A*(N / (A+B));
        mod = N % (A+B);
        if(mod >= A){
            ans += A;
        }else{
            ans += mod;
        }
    }

    printf("%llu\n",ans);
    return 0;
}