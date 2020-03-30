#include<stdio.h>

int main(void){

    char W[10];

    scanf("%s",W);

    if(W[0] == 'S'){
        printf("Cloudy\n");
    }else if(W[0] == 'C'){
        printf("Rainy\n");
    }else{
        printf("Sunny\n");
    }

    return 0;
}