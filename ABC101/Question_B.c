#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

    char N[11];
    int S_n = 0,i,Oridinal_N;

    scanf("%s",N);

    Oridinal_N = atoi(N);
    for(i = 0;i < strlen(N);i++){
        S_n += (int)(N[i] - '0');
    }

    if(Oridinal_N%S_n == 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
