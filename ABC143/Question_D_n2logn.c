#include<stdio.h>
#include<stdlib.h>

int compare_int(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(void){

    int N,i,j,k,L[2001],s,ans=0,top,under;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&L[i]);
    }

    qsort(L,N,sizeof(int),compare_int);

    for(i = 0;i < N - 2;i++){
        for(j = i + 1;j < N - 1;j++){
            top = N;
            under = j + 1;
            while(under != top){
                int mid = (top + under)/2;
                if(L[mid] < L[i] + L[j]){
                    under = mid + 1;
                }else{
                    top = mid;
                }
            }
            ans += top - j - 1;
        }
    }

    printf("%d\n",ans);
    return 0;
}