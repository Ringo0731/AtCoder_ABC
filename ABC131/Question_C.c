#include<stdio.h>

int main(void){

    unsigned long long A,B,C,D,i,result=0;

    scanf("%lld %lld %lld %lld",&A,&B,&C,&D);

    for(i = A;i <= B;i++){
        if(i % C != 0 && i % D != 0){
            result++;
        }
    }

    printf("%lld",result);
    return 0;
}