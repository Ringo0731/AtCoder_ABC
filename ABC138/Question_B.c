#include<stdio.h>

int main(void){

    int N,i;
    double ans,bunbo=0,A[100];

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%lf",&A[i]);
    }

    for(i = 0;i < N;i++){
        bunbo += (1/A[i]);
    }

    ans = (1/bunbo);

    printf("%f",ans);
    return 0;
}
