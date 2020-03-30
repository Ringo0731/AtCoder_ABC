#include<stdio.h>

int main(void){
    
    int A,P,tip,result;

    scanf("%d %d",&A,&P);

    tip = 3 * A + P;

    result = tip / 2;

    printf("%d",result);
    return 0;
}