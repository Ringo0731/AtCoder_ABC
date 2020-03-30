#include<stdio.h>
#include<string.h>

int main(void){

    char O[51],E[51];
    int i;

    scanf("%s",O);
    scanf("%s",E);

    for(i = 0;i < strlen(E);i++){
        printf("%c",O[i]);
        printf("%c",E[i]);
    }

    if(strlen(O) > strlen(E)){
        printf("%c",O[strlen(O)-1]);
    }

    return 0;
}
