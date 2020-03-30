#include<stdio.h>

int main(void){

    char S[4];
    int ans = 0;

    scanf("%s",S);

    if(S[0] == 'S' && S[1] == 'U'){
        ans += 7;
    }else if(S[0] == 'M'){
        ans += 6;
    }else if(S[0] == 'T' && S[1] == 'U'){
        ans += 5;
    }else if(S[0] == 'W'){
        ans += 4;
    }else if(S[0] == 'T' && S[1] == 'H'){
        ans += 3;
    }else if(S[0] == 'F'){
        ans += 2;
    }else if(S[0] == 'S' && S[1] == 'A'){
        ans += 1;
    }

    printf("%d\n",ans);
    return 0;
}
