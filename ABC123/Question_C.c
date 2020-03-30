#include<stdio.h>

int main(void){

    long int N,min_carriable,Total_Time,Transpotation[5];
    int i;

    scanf("%ld",&N);
    for(i = 0;i < 5;i++){
        scanf("%ld",&Transpotation[i]);
    }

    min_carriable = Transpotation[0];
    for(i = 1;i < 5;i++){
        if(Transpotation[i] < min_carriable){
            min_carriable = Transpotation[i];
        }
    }

    if(N % min_carriable == 0){
        Total_Time = (N / min_carriable) + 4;
    }else{
        Total_Time = (N / min_carriable) + 5;
    }

    printf("%ld",Total_Time);
    return 0;
}