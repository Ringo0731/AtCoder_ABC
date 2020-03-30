#include<stdio.h>

int main(void){

    int A,B;

    scanf("%d %d",&A,&B);

    if(A <= 5){
        printf("0");
    }else if(A > 5 && A < 13){
        printf("%d",B/2);
    }else{
        printf("%d",B);
    }

    return 0;
}