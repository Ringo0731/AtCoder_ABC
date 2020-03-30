#include<stdio.h>
#include<stdlib.h>

int min(int num1,int num2,int num3){
    if(num1 <= num2 && num1 <= num3){
        return num1;
    }else if(num2 <= num1 && num2 <= num3){
        return num2;
    }else{
        return num3;
    }
}

int main(void){

    int N,X,Y,ans[2001],i,j,tmp;

    scanf("%d %d %d",&N,&X,&Y);
    for(i = 0;i < N;i++){
        ans[i] = 0;
    }

    for(i = 0;i < N;i++){
        for(j = i+1;j < N;j++){
           tmp = min(abs(j - i),abs((X-1) - i)+1+abs(j - (Y-1)),abs((Y-1) - i)+1+abs(j - (X-1)));
           ans[tmp]++;
        }
    }

    for(i = 1;i <= N-1;i++){
        printf("%d\n",ans[i]);
    }

    return 0;
}
