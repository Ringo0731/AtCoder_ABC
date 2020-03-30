#include<stdio.h>

int main(void){
    
    int A,B,i,hole = 1,ans=0;

    scanf("%d %d",&A,&B);

    while(hole < B){
        ans++;
        hole--;
        hole += A;
    }

    printf("%d",ans);
    return 0;
}