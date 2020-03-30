#include<stdio.h>

#define MAX 100

int main(void){
  
    int N,i,x = 0,max=0;
    char S[MAX];
  
    scanf("%d",&N);
    scanf("%s",S);

    for(i = 0;i < N;i++){
        if(S[i] == 'I'){
            x++;
            if(x > max){
                max = x;
            }
        }else{
            x--;
        }
    }

    printf("%d",max);
    return 0;
}
