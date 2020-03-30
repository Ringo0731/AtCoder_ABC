#include<stdio.h>
#include<string.h>

int main(void){

    char S[101];
    int i,j,ans=0;

    scanf("%s",S);
    i = 0;
    j = strlen(S)-1;

    while(j-i > 0){
        if(S[i] != S[j]) ans++;
        i++;
        j--;
    }

    printf("%d\n",ans);
    return 0;
}
