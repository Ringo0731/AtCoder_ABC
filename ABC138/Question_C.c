#include<stdio.h>

int main(void){

    int N,i,j;
    double v[50],tmp;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%lf",&v[i]);
    }

    for(i = 0;i < N;i++){
        for(j = i + 1;j < N;j++){
            if(v[i] > v[j]){
                tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }

    for(i = 0;i < (N - 1);i++){
        v[i + 1] = (v[i] + v[i + 1])/2;
    }

    printf("%f",v[N-1]);
    return 0;
}
