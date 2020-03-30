#include<stdio.h>
#include<stdlib.h>

#define string(num,c) \
    for(i = 0;i < num;i++){ \
        printf("%s",c); \
    } \

int main(void){

    int sx,sy,tx,ty,i,dx,dy;

    scanf("%d %d %d %d",&sx,&sy,&tx,&ty);

    dx = tx - sx;
    dy = ty - sy;

    string(dy,"U");
    string(dx,"R");
    string(dy,"D");
    string(dx,"L");
    printf("L");
    string(dy+1,"U");
    string(dx+1,"R");
    printf("D");
    printf("R");
    string(dy+1,"D");
    string(dx+1,"L");
    printf("U\n");
    
    return 0;
}
