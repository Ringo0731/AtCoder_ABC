#include<stdio.h>

#define MAX_N 100001

int main(void){

    long int H,N,total_power = 0;
    int A[MAX_N],i;

    scanf("%ld %ld",&H,&N);
    for(i = 0;i < N;i++){
        scanf("%d",&A[i]);
        total_power += A[i];
    }

    if(H <= total_power){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}