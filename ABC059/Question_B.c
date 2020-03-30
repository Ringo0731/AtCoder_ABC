#include<stdio.h>

int main(void){

    double A,B;
    scanf("%lf %lf",&A,&B);

    if(A > B) printf("GREATER\n");
    else if(A < B) printf("LESS\n");
    else printf("EQUAL\n");

    return 0;
}
