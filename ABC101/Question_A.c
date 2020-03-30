#include<stdio.h>

int main(void){

    char S[5];
    int i,ans=0;

    scanf("%s",S);

    for(i = 0;i < 4;i++){
        if(S[i] == '+'){
            ans++;
        }else{
            ans--;
        }
    }

    printf("%d\n",ans);
    return 0;
}
