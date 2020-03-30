#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int s;
    int c;
}pair_t;

int compare_int(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(void){

    int N,M,i,ans[11] = {0},flag = 1;
    pair_t pair[11] = {0};

    scanf("%d %d",&N,&M);
    for(i = 0;i < M;i++){
        scanf("%d %d",&pair[i].s,&pair[i].c);
    }

    qsort(pair,M,sizeof(pair_t),compare_int);

    if(N > 1) ans[1] = 1;
    for(i = 0;i < M;i++){
        if(pair[i].s == pair[i+1].s && pair[i].c != pair[i+1].c){
            flag = 0;
        }
        ans[pair[i].s] = pair[i].c;
    }

    if(flag == 0 || ans[1] == 0){
        if(flag == 0 || N > 1) printf("-1\n");
        else printf("0\n");
    }else{
        for(i = 1;i <= N;i++){
            printf("%d",ans[i]);
        }
        printf("\n");
    }
    return 0;
}
