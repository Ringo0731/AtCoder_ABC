#include<stdio.h>

int main(void){
    
    int N,i,Odd_val = 0;
    double ans;

    scanf("%d",&N);
    for(i = 1;i <= N;i++){
        if(i % 2 == 1){
            Odd_val++;
        }
    }

    ans = (double)(Odd_val)/N;

    printf("%lf\n",ans);
    return 0;
}