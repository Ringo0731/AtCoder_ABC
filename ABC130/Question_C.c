#include<stdio.h>

int main(void){

    int W,H,x,y,width,height;
    double S;

    scanf("%d %d %d %d",&W,&H,&x,&y);

    //(x <= W - x) ? (width = x) : (width = W - x);
    //(y <= H - y) ? (height = y) : (height = H - y);

    //(width*H > W*height) ? (S = width * H) : (S = W * height);

    S = (W * H) / 2;

    printf("%f ",S);

    if(x + x == W && y + y == H){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}