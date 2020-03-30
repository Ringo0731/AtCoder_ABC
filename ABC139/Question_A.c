#include<stdio.h>

int main(void){

    char S[4],T[4];
    int i,ans=0;

    scanf("%s",S);
    scanf("%s",T);

    for(i = 0;i < 3;i++){
        if(S[i] == T[i]){
            ans++;
        }
    }

    printf("%d",ans);
    return 0;
}