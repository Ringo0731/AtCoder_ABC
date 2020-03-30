#include<stdio.h>

#define A 2

int main(void){

    int S,i,qian,hou;

    scanf("%d",&S);

    qian = (S / 1000) * 10 + (S / 100) % 10;
    hou = S % 100;

    if(qian <= 12 && qian != 0 && hou > 12){
        printf("MMYY");
    }else if(qian > 12  && hou <= 12 && hou != 0){
        printf("YYMM");
    }else if(qian <= 12 && qian != 0 && hou <= 12 && hou != 0){
        printf("AMBIGUOUS");
    }else{
        printf("NA");
    }

    return 0;
}