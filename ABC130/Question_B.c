#include<stdio.h>

int main(void){

    int N,X,i,L[100],bound_c = 0,result=1;

    scanf("%d %d",&N,&X);
    for(i = 0;i < N;i++){
        scanf("%d",&L[i]);
    }

    for(i = 0;i < N;i++){
        bound_c += L[i];
        if(bound_c <= X){
            result++;
        }else{
            break;
        }
    }

    printf("%d",result);
    return 0;
}