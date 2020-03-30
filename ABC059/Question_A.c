#include<stdio.h>
#include<ctype.h>

int main(void){

    char s[3][10];
    int i;

    for(i = 0;i < 3;i++){
        scanf("%s",s[i]);
    }

    for(i = 0;i < 3;i++){
        printf("%c",toupper(s[i][0]));
    }
    printf("\n");

    return 0;
}
