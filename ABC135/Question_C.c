#include<stdio.h>

#define MAX 100000

int main(void){

    int N,i;
    long int A[MAX],B[MAX],Yoryoku[MAX],ans=0;

    scanf("%d",&N);
    for(i = 0;i < N+1;i++){
        scanf("%ld",&A[i]);
    }
    for(i = 0;i < N;i++){
        scanf("%ld",&B[i]);
    }

    if(B[0] - A[0] < 0){
        ans += B[0];
        B[0] = 0;
        //printf("A[0]:%ld B[0]:%ld Killed[0]:%ld\n",A[0],B[0],ans);         
    }else{
        ans += A[0];
        B[0] -= A[0];
        //printf("A[0]:%ld B[0]:%ld Killed[0]:%ld\n",A[0],B[0],ans); 
    }

    for(i = 1;i < N;i++){
        if(A[i] - B[i - 1] < 0){
            ans += A[i];
            //printf("A[%d]:%ld B[%d]:%ld Killed[%d]:%ld\n",i,A[i],i,B[i],i,ans); 
            A[i] = 0;
        }else{
            //printf("A[%d]:%ld B[%d]:%ld ",i,A[i],i,B[i]);
            A[i] -= B[i - 1];
            ans += B[i - 1];
            if(B[i] > A[i]){
                ans += A[i];
                //printf("Killed[%d]:%ld\n",i,ans); 
                B[i] -= A[i];
            }else{
                ans += A[i] - B[i];
                //printf("Killed[%d]:%ld\n",i,ans); 
                B[i] = 0;
            }
        }
    }
    
    if(B[N - 1] - A[N] < 0){
        ans += B[N - 1];
        //printf("A[%d]:%ld B[%d]:%ld Killed[0]:%ld\n",N,A[N],N-1,B[N-1],ans);       
    }else{
        ans += A[N];
        //printf("A[%d]:%ld B[%d]:%ld Killed[0]:%ld\n",N,A[N],N-1,B[N-1],ans); 
    }

    printf("%ld",ans);
    return 0;
} 