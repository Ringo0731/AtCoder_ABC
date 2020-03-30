#include<stdio.h>
#include<string.h>

int main(void){

    char S[101];
    int i,ans=0;

    scanf("%s",S);

    for(i = 0;i < strlen(S);i++){
        if(i % 2 != 0){
            if(S[i] == 'R'){
                printf("No\n");
                return 0;
            }
        }else{
            if(S[i] == 'L'){
                printf("No\n");
                return 0;
            }
        }
    }

    printf("Yes\n");
    return 0;
}