#include<stdio.h>

#define ZUIDA 100000

int main(void){

    int N,M,A[ZUIDA],B[ZUIDA],C[ZUIDA],i,j,tmp;
    long int result = 0;

    scanf("%d %d",&N,&M);
    for(i = 0;i < N;i++){
        scanf("%d",&A[i]);
    }
    for(i = 0;i < M;i++){
        scanf("%d %d",&B[i],&C[i]);
    }

    shoujun(N,A);

    /*for(i = 0;i < N;i++){
        printf("%d ",A[i]);
    }

    puts("\n");*/

    for(i = 0;i < M;i++){
        for(j = 0;j < N;j++){
            if(A[j] < C[i] && B[i] > 0){
                A[j] = C[i];
                B[i]--;
            }
            //printf("%d ",A[j]);
        }
        shoujun(N,A);
        //puts("\n");
    }

    for(i = 0;i < N;i++){
        result += A[i];
    }

    printf("%ld",result);
    return 0;
}

void shoujun(int N,int s[]){

    int i,j,tmp;
    for(i = 0;i < N;i++){
        for(j = i + 1;j < N;j++){
            if(s[i] > s[j]){
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }

}