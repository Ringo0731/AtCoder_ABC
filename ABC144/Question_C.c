#include<stdio.h>

long long int N,i,min;

int main(void){

    scanf("%lld",&N);

    for(i = 1;i*i <= N;i++){
        if(N % i == 0) min = i;
    }
     

    printf("%lld\n",min+(N/min)-2);
    return 0;
}

