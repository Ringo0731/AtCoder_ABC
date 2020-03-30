#include<stdio.h>

int main(void){

    int A,B,ans;

    scanf("%d %d",&A,&B);

    ans = A + B;
    if(ans >= 24){
        ans -= 24;
    }

    printf("%d",ans);
    return 0;
}
