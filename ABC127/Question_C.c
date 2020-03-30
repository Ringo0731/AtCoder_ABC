#include<stdio.h>

#define ZUIDA 100000

int main(void){

    int N,M,L[ZUIDA],R[ZUIDA],i,j,tmp,L_max,R_min,result;

    scanf("%d %d",&N,&M);
    for(i = 0;i < M;i++){
        scanf("%d %d",&L[i],&R[i]);
    }

    L_max = L[0];
    R_min = R[0];

    for(i = 1;i < M;i++){
        if(L_max < L[i]){
            L_max = L[i];
        }
        if(R_min > R[i]){
            R_min = R[i];
        }
        /*for(j = i + 1;j < M;j++){
            if(R[i] > R[j]){
                tmp = R[i];
                R[i] = R[j];
                R[j] = tmp;
            }
            if(L[i] < L[j]){
                tmp = L[i];
                L[i] = L[j];
                L[j] = tmp;
            }
        }*/
    }

    result = R_min - L_max;

    if(result >= 0){
        printf("%d",result + 1);
    }else{
        printf("0");
    }

    return 0;
}