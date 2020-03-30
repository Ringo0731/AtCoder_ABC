#include<stdio.h>

int main(void){

    long int X,i=0;

    scanf("%ld",&X);
    while(X > 0){
        i++;
        X -= i;
    }

    printf("%ld",i);
    return 0;
}
