#include<stdio.h>

int main(void){

    char a,b;

    scanf("%c %c",&a,&b);

    if(a == 'H'){
        (b == 'H') ? printf("H"):printf("D");
    }else{
        (b == 'H') ? printf("D"):printf("H");
    }

    return 0;
}
