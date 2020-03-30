#include<stdio.h>

int main(void){
  
  int time[5],time_quo[5],time_TT[5]; //TT is Total Time
  int i,digit_one,min,TT_sum = 0;
  
  for(i = 0;i < 5;i++){
    scanf("%d",&time[i]);
    time_quo[i] = time[i] % 10;
    if(time[i] % 10 == 0){
      time_TT[i] = time[i];
    }else{
      time_TT[i] = ((time[i] / 10) + 1) * 10;
    }
  }
  
  for(i = 0;i < 5;i++){
    TT_sum += time_TT[i];
  }
  
  min = time_quo[0];
  for(i = 1;i < 5;i++){
    if(min > time_quo[i] && time_quo[i] != 0){
      min = time_quo[i];
    }
  }

  if(min == 0){
    digit_one = 0;
  }else{
    digit_one = 10 - min;
  }
  
  printf("%d",TT_sum - digit_one);
  return 0;
}