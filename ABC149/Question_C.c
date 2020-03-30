#include<stdio.h>

int main(void){

    int X,j,divisor,ans_found = 0;
    long int i;

    scanf("%d",&X);

    i = X;
    while(ans_found == 0){
        divisor = 0;
        for(j = 1;j <= i;j++){
            if(i%j == 0){
                divisor++;
            }
        }
        if(divisor == 2){
            printf("%ld\n",i);
            ans_found = 1;
        }
        i++;
    }

    return 0;
}
