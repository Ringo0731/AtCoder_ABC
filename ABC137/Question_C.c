#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define LENTH_MAX 100000

int compare_int(const void *a,const void *b){
    return *(int*)a - *(int*)b;
}

int main(void){

    int N,i;
    char* s[LENTH_MAX];

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%s",s[i]);
        qsort(s[i],strlen(s[i]),sizeof(int),compare_int);
    }

    for(i = 0;i < N;i++){
        scanf("%s",s[i]);
    }

    return 0;
}
