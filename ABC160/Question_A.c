#include<stdio.h>

int main(void){

    char S[7];
    int i;

    scanf("%s",S);
    if(S[2] == S[3] && S[4] == S[5]){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}