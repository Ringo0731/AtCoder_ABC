#include<stdio.h>
#include<stdlib.h>

#define MAX_APPLE 200

int main(void){
    
    int N,L,i,apple[MAX_APPLE],min_taste,result = 0;

    scanf("%d %d",&N,&L);

    for(i = 0;i < N;i++){
        apple[i] = L + i;
    }

    min_taste = abs(apple[0]);

    //printf("first_min_taste:%d\n",min_taste);

    for(i = 0;i < N;i++){
        //printf("taste:%d taste_abs:%d\n",apple[i],abs(apple[i]));
        if(min_taste > abs(apple[i])){
            min_taste = abs(apple[i]);
        }
    }

    //printf("min_taste:%d\n",min_taste);

    for(i = 0;i < N;i++){
        if(abs(apple[i]) != min_taste){
            result += apple[i];
        }
    }

    printf("%d",result);
    return 0;
}