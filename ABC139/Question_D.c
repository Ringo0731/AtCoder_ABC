#include<stdio.h>

int main(void){

    long int N,i=1,M=0;

    scanf("%ld",&N);

    M = ((N-1)*N)/2;

    printf("%ld",M);
    return 0;
}