#include<stdio.h>

#define LARGEST 10000000001

int main(void){

    long int X,Y,Z,K,A[LARGEST],B[LARGEST],C[LARGEST],result[3000],tmp;
    int i,j,a = 0,b = 0,c = 0;

    scanf("%ld %ld %ld %ld",&X,&Y,&Z,&K);
    for(i = 0;i < X;i++){
        scanf("%ld",&A[i]);
    }
    for(i = 0;i < Y;i++){
        scanf("%ld",&B[i]);
    }
    for(i = 0;i < Z;i++){
        scanf("%ld",&C[i]);
    }

    for(i = 0;i < X;i++){
        for(j = i + 1;j < X;j++){
            if(A[i] < A[j]){
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }

    for(i = 0;i < Y;i++){
        for(j = i + 1;j < Y;j++){
            if(B[i] < B[j]){
                tmp = B[i];
                B[i] = B[j];
                B[j] = tmp;
            }
        }
    }

    for(i = 0;i < Z;i++){
        for(j = i + 1;j < Z;j++){
            if(C[i] < C[j]){
                tmp = C[i];
                C[i] = C[j];
                C[j] = tmp;
            }
        }
    }

    result[0] = A[a] + B[b] + C[c];
    for(i = 1;i < K;K++){
        if(A[a + 1] + B[b] + C[c] > A[a] + B[b + 1] + C[c] && A[a + 1] + B[b] + C[c] > A[a] + B[b] + C[c + 1]){
            result[i] = A[a + 1] + B[b] + C[c];
            if(a <= X){
                a++;
            }
        }else if(A[a] + B[b + 1] + C[c] > A[a + 1] + B[b] + C[c] && A[a] + B[b + 1] + C[c] > A[a] + B[b] + C[c + 1]){
            result[i] = A[a] + B[b + 1] + C[c];
            if(b <= Y){
                b++;
            }
        }else if(A[a] + B[b] + C[c + 1] > A[a + 1] + B[b] + C[c] && A[a] + B[b] + C[c + 1] > A[a] + B[b + 1] + C[c]){
            result[i] = A[a] + B[b] + C[c + 1];
            if(c <= Z){
                c++;
            }
        }
    }

    for(i = 0;i < K;i++){
        printf("%ld\n",result[i]);
    }
    return 0;
}