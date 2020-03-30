#include<stdio.h>

int main(void){

    long int A,B,ans;
    char op;

    scanf("%ld %c %ld",&A,&op,&B);

    if(op == '+'){
        ans = A + B;
    }else{
        ans = A - B;
    }

    printf("%ld\n",ans);
    return 0;
}
