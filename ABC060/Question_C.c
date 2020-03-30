#include<stdio.h>

int main(void){

    int N,i;
    long int T,t[200000],ans;

    scanf("%d %ld",&N,&T);
    for(i = 0;i < N;i++){
        scanf("%ld",&t[i]);
    }

    ans = T;
    for(i = 1;i < N;i++){
        if(t[i] > ans){
            ans += T;
        }
    }

    printf("%ld\n",ans);
    return 0;
}