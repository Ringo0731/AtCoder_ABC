#include<stdio.h>
#include<stdlib.h>

typedef struct{
    long taste;
    char color;
}apple;

int asc(const void *a,const void *b){
    long int *A = (long int *)a;
    long int *B = (long int *)b;
    if(*A < *B) return 1;
    if(*A > *B) return -1;
    return 0;
}

int main(void){

    int X,Y,A,B,C,i;
    apple Apple[30001];

    scanf("%d %d %d %d %d",&X,&Y,&A,&B,&C);
    for(i = 0;i < A;i++){
        scanf("%ld",Apple[i].taste);
        Apple[i].color = 'R';
    }
    for(i = A;i < A+B;i++){
        scanf("%ld",Apple[i].taste);
        Apple[i].color = 'G';
    }
    for(i = A+B;i < A+B+C;i++){
        scanf("%ld",Apple[i].taste);
        Apple[i].color = 'W';
    }

    qsort(taste,A+B+C,sizeof(long),asc);

    return 0;
}