#include<stdio.h>

int main(void){

    int A,B,C,Val,i;
    
    scanf("%d %d %d",&A,&B,&C);

    Val = A;
    for(Val = A;Val <= A * B;Val += A){
        if(Val % B == C){
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}