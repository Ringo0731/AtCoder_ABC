#include<stdio.h>

int main(void){

    int a;
    char s[10];

    scanf("%d",&a);
    scanf("%s",s);

    if(a >= 3200){
        printf("%s",s);
    }else{
        printf("red");
    }

    return 0;
}
