#include<stdio.h>
#include<stdlib.h>

int asc(const void *a, const void *b) {
  long *A = (long *)a;
  long *B = (long *)b;
  if (*A < *B) return 1;
  if (*A > *B) return -1;
  return 0;
}

long int

int main(void){

    int N,M,i,MaxValue_Element,*MaxValue_Element_Num;
    long int A[100001],ans = 0;

    scanf("%d %d",&N,&M);
    for(i = 0;i < N;i++){
        scanf("%ld",&A[i]);
    }

    while(M > 0){
        MaxValue_Element_Num = 0;

        A[0] /= 2;
        M--;
    }
  
    for(i = 0;i < N;i++){
        ans += A[i];
    }

    printf("%ld\n",ans);
    return 0;
}
