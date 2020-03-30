#include<stdio.h>

int main(void){

    int r,D,x_2000,i;

    scanf("%d %d %d",&r,&D,&x_2000);

    for(i = 0;i < 10;i++){
        x_2000 = r * x_2000 -D;
        printf("%d\n",x_2000);
    }

    return 0;
}