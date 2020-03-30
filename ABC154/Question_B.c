#include<stdio.h>
#include<string.h>

int main(void){

    char S[11],T[11],U[11];
    int A,B,i;

    scanf("%s %s",S,T);
    scanf("%d %d",&A,&B);
    scanf("%s",U);

    if(strcmp(S,U) == 0){
        A--;
    }else{
        B--;
    }


    printf("%d %d\n",A,B);
    return 0;
}
