#include<stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main(void){

    int N,p[50],Original_p[50],i,dif=0;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&p[i]);
        Original_p[i] = p[i];
    }

    qsort(p,N,sizeof(int), compare_int);

    for(i = 0;i < N;i++){
        if(p[i] != Original_p[i]){
            dif++;
        }
    }

    if(dif == 0 || dif == 2){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}