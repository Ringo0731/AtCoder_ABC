#include<stdio.h>

int main(void){

    char s[20],i;

    scanf("%s",s);

    for(i = 0;i < 20;i++){
        if(s[i] == ','){
            s[i] = ' ';
        }
    }

    printf("%s",s);
    return 0;
}