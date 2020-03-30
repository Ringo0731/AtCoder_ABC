#include<stdio.h>

#define li long int
#define MOD_N 1000000000+7

int main(void){

    int N,i,j;
    li ans = 0;

    scanf("%d",&N);

    for(i = 1;i <= N;i++){
        for(j = 1;j <= i;j++){
            if(i % j == 0){
                printf("約数\n");
                ans++;
                ans %= MOD_N;
            }
        }
    }

    printf("\n%ld\n",ans);
    return 0;
}
