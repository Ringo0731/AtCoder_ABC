#include<stdio.h>

int main(void){

    int N,K,A[100001],i,min_ele,min_num = 10,ans;

    scanf("%d %d",&N,&K);
    for(i = 0;i < N;i++){
        scanf("%d",&A[i]);
        if(A[i] < min_num){
            min_num = A[i];
            min_ele = i;
        }
    }

    ans = (N-1)/(K-1);
    if(N == K){
        ans += 0;
    }else if(min_ele-K <= 0 && min_ele+K >= N-1){
        ans += 1;
    }else{
        ans += 2;
    }

    printf("%d\n",ans);
    return 0;
}
