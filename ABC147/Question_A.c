#include<stdio.h>

int main(void){

    int A,B,C;

    scanf("%d %d %d",&A,&B,&C);

    if(A+B+C >= 22){
        printf("bust\n");
    }else{
        printf("win\n");
    }
    return 0;
}
