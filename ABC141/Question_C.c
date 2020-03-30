#include<stdio.h>

int main(void){

    long int N,K,Q,A[100001],point[100001],i,result;

    scanf("%ld %ld %ld",&N,&K,&Q);
    for(i = 0;i < Q;i++){
        scanf("%ld",&A[i]);
    }

    for(i = 0;i < N;i++){
        point[i] = K;
    }

    for(i = 0;i < Q;i++){
        point[A[i]-1] += 1;
    }

    for(i = 0;i < N;i++){
        result = point[i] - Q;
        if(result > 0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }

    return 0;
}