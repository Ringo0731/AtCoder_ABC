#include<stdio.h>
#include<string.h>

int main(void){

    char S[100001];
    int i,N,ans=1;

    scanf("%d",&N);
    scanf("%s",S);

    for(i = 0;i < N-1;i++){
        if(S[i] != S[i + 1]){
            //strcpy(tmp[0],S[i]);
            ans++;
        }
    }

    printf("%d\n",ans);
    return 0;
}