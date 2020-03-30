#include<stdio.h> 

int main(void){

    long long int H,i,ans = 0,based_num = 1;

    scanf("%lld",&H);

    while(based_num*2 <= H){
        based_num *= 2;
    }

    H = based_num;

    while(H/2 != 0){
        ans += H;
        H /= 2;
    }

    printf("%lld\n",ans+1);
    return 0;
}