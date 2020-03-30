#include<stdio.h>

int main(void){

    int A,B,ans = -1,i;

    scanf("%d %d",&A,&B);

    for(i = 0;i <= 10000;i++){
        if((int)(i*0.08) == A && (int)(i*0.1) == B){
            ans = i;
            break;
        }
    }

    printf("%d\n",ans);
    return 0;
}