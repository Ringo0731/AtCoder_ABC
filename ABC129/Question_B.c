#include<stdio.h>

int main(void){
    
    int N,W[100],i,j,tmp,total=0,total1,total2,result;

    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&W[i]);
    }

    for(i=0;i<N;i++){
        total += W[i];
    }

    total1 = total;
    total2 = total;

    for(i = N-1;i >= 0;i--){
        if(total1 - W[i] * 2 >= 0){
            total1 -= W[i] * 2;
        }else{
            break;
        }
    }

    for(i = 0;i < N;i++){
        if(total2 - W[i] * 2 >= 0){
            total2 -= W[i] * 2;
        }else{
            break;
        }
    }

    if(total1 < total2){
        result = total1;
    }else{
        result = total2;
    }

    printf("%d",result);
    return 0;
}