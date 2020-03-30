#include<stdio.h>

int main(void){
    
    int N;

    scanf("%d",&N);

    if(N < 10){
        printf("%d",N);
    }else if(N >= 10 && N < 100){
        printf("9");
    }else if(N >= 100 && N < 1000){
        printf("%d",N - 90);
    }else if(N >= 1000 && N < 10000){
        printf("909");
    }else if(N >= 10000 && N < 100000){
        printf("%d",N - 9999 + 9 + 900);
    }else{
        printf("90909");
    }
    return 0;
}