#include<stdio.h>

#define MAX_N 100001

int main(void){

    int N,i,A[MAX_N],mem[MAX_N];
    long int ans = 1;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&A[i]);
        mem[i] = 0;
    }

    for(i = 0;i < N;i++){
        mem[A[i]]++;
    }

    if(N % 2 == 1){
        //for(i = 0;i < N;i += 2) printf("mem[%d]:%d\n",i,mem[i]);
    
        for(i = 0;i < N;i += 2){
            if((i != 0 && mem[i] != 2)){
                printf("0\n");
                return 0;
            }
        }
    }else{
        //printf("mem[0]:%d\n",mem[0]);
        //for(i = 1;i < N;i += 2) printf("mem[%d]:%d\n",i,mem[i]);

        for(i = 1;i < N;i += 2){
            if((i != 0 && mem[i] != 2) || mem[0] == 2){
                printf("0\n");
                return 0;
            }
        }
    }

    for(i = 1;i <= N/2;i++){
        ans *= 2;
        ans %= 1000000000+7;
    }

    printf("%ld\n",ans);
    return 0;
}
