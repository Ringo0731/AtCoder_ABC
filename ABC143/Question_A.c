#include<stdio.h>

int main(void){

    int A,B;

    scanf("%d %d",&A,&B);

    if(A <= B*2){
        printf("0\n");
    }else{
        printf("%d\n",A - (B*2));
    }
    return 0;
}