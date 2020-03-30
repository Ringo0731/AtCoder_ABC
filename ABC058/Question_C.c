#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Compare_Char(const void *a,const void *b){
    return *(int*)a - *(int*)b;
}

int main(void){

    char A[100];

    scanf("%s",A);

    printf("%s\n",A);

    qsort(A,strlen(A),sizeof(char),Compare_Char);

    printf("%s\n",A);
    return 0;
}
