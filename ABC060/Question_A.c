#include<stdio.h>
#include<string.h>

int main(void){

    char A[11],B[11],C[11];
    int A_len,B_len,C_len;

    scanf("%s %s %s",A,B,C);
    A_len = strlen(A);
    B_len = strlen(B);

    if(A[A_len - 1] == B[0] && B[B_len - 1] == C[0]){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}