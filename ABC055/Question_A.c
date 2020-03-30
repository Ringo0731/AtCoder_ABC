#include<stdio.h>

int main(void){

    int x,y,N;

    scanf("%d",&N);

    x = N * 800;
    y = (N/15) * 200;

    printf("%d",x-y);
    return 0;
}
