#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define LENTH_MAX 200000

int main(void){

    char s[LENTH_MAX];
    int leftest_a,leftest_z,i;
    bool first_A = true;

    scanf("%s",s);

    for(i = 0;i < strlen(s);i++){
        if(s[i] == 'A' && first_A){
            leftest_a = i;
            first_A = false;
        }else if(s[i] == 'Z'){
            leftest_z = i;
        }
    }

    printf("%d",leftest_z - leftest_a + 1);
    return 0;
}