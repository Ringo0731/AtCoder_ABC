#include<stdio.h>
#include<stdlib.h>

int main(void){

    int W,a,b,distance;

    scanf("%d %d %d",&W,&a,&b);

    if((a <= b && b <= (a+W)) || (b <= a && a <= (b+W))){
        distance = 0;
    }else{
        if(abs(b-(a+W)) < abs(a-(b+W))){
            distance = abs(b-(a+W));
        }else{
            distance = abs(a-(b+W));
        }
    }

    printf("%d",distance);
    return 0;
}
