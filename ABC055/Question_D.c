#include<stdio.h>

#define MAX_LENTH 100000

int main(void){

    int N,i;
    char s[MAX_LENTH],ans[MAX_LENTH];

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%c",s[i]);
    }

    if(s[0] == 'o'){
        ans[0] = 'S';
        ans[1] = 'S';
    }else{
        if(s[1] == 'o'){
            ans[0] = 'W'
            ans[]
