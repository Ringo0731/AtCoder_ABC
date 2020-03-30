#include<stdio.h>
#include<stdlib.h>

#define MAX_N 200001

int main(void){

    int N,K,p[MAX_N],i,j;
    double CumlativeSum[MAX_N+1],val,ans = 0,ExpectValue[MAX_N];

    scanf("%d %d",&N,&K);
    for(i = 0;i < N;i++){
        scanf("%d",&p[i]);
    }

   CumlativeSum[0] = 0;
    for(i = 1;i <= N;i++){
        ExpectValue[i] = ((double)(p[i-1]+1))/2;
        CumlativeSum[i] = CumlativeSum[i-1] + ExpectValue[i];
        //printf("元の値:%d 期待値:%lf 累積和:%lf\n",p[i-1],ExpectValue[i],CumlativeSum[i]);
    }
    for(i = 0;i <= N-K;i++){
        val = CumlativeSum[i+K]-CumlativeSum[i];
        if(ans < val) ans = val;
        //printf("val:%lf ans:%lf\n",val,ans);
    }

    printf("%lf\n",ans);
    return 0;
}
