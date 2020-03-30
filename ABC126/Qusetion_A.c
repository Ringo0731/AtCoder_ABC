#include<stdio.h>
#include<ctype.h>

int main(void){

    int N,K;
    char str[50];

    scanf("%d %d",&N,&K);
    scanf("%s",str);

    str[K - 1] = tolower(str[K - 1]);
    printf("%s",str);
    return 0;
}