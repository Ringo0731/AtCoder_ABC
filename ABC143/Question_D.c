#include<stdio.h>
#include<stdlib.h>

int compare_int(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(void){

    int N,i,j,k,L[2001],s,ans=0;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&L[i]);
    }

    qsort(L,N,sizeof(int),compare_int);

    for(i = 0;i < N;i++){
        for(j = i + 1;j < N;j++){
            for(k = j + 1;k < N;k++){
                if(L[i] + L[j] > L[k]){
                    ans++;
                }else{
                    break;
                }
            }
        }
    }

    printf("%d\n",ans);
    return 0;
}