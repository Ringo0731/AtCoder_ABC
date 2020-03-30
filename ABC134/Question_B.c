#include<stdio.h>

int main(void){
    
    int N,D,look;

    scanf("%d %d",&N,&D);

    look = 2*D+1;

    if(N % look == 0){
        printf("%d",N/look);
    }else{
        printf("%d",(N/look)+1);
    }
    return 0;
}