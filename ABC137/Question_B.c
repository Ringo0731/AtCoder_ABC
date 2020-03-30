#include<stdio.h>

int main(void){
  
  int K,X,i;
  
  scanf("%d %d",&K,&X);
  
  for(i = X - (K - 1);i <= X + (K - 1);i++){
    printf("%d ",i);
  }
  
  return 0;
}

