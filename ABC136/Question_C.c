#include<stdio.h>

#define MAX 100000

int main(void){

    int N,i;
    long int H[MAX],highest;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%ld",&H[i]);
    }

    highest = H[0];
    for(i = 0;i < N;i++){
        if(H[i] > highest){
            highest = H[i];
        }else if(highest > H[i]){
            if(highest - H[i] >= 2){
                printf("No");
                return 0;
            }
        }
    }
    printf("Yes");
    return 0;
}