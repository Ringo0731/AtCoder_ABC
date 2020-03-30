#include<stdio.h>

void show_ans(int x,int y){
    for(int i = 0;i < y;i++){
        printf("%d",x);
    }
    printf("\n");
}

int main(void){

    int a,b;
    scanf("%d %d",&a,&b);
    if(a < b){
        show_ans(a,b);
    }else{
        show_ans(b,a);
    }
    return 0;
}