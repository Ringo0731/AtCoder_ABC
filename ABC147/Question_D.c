#include<stdio.h>

#define QUO 1000000000+7

int main(void){

    int N,i,j;
    unsigned long long int A[300001],B[300001],ans=0;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%llu",&A[i]);
    }

    B[0] = 0;
    for(i = 1;i < N;i++){
        B[i] = B[i - 1]^A[i];
    }

    //ans = ;
    /*for(i = 0;i < N;i++){
        for(j = i+1;j < N;j++){
            ans += A[i]^A[j];
        }
    }*/

    ans = B[N-1]%QUO;
    printf("%llu\n",ans);
    return 0;
}
