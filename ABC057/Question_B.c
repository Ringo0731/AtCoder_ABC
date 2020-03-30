#include<stdio.h>
#include<stdlib.h>

#define MAX_LENTH 50

int main(void){

    int N,M,i,j,ans;
    long int a[MAX_LENTH],b[MAX_LENTH],c[MAX_LENTH],d[MAX_LENTH],min_dis;

    scanf("%d %d",&N,&M);
    for(i = 0;i < N;i++){
        scanf("%ld %ld",&a[i],&b[i]);
    }
    for(i = 0;i < M;i++){
        scanf("%ld %ld",&c[i],&d[i]);
    }

    for(i = 0;i < N;i++){
        min_dis = labs(a[i]-c[0]) + labs(b[i]-d[0]);
        printf("labs(a[%d]-b[0]):%ld labs(c[%d]-d[0]):%ld\n",i,labs(a[i]-b[0]),i,labs(c[i]-d[0]));
        for(j = 1;j < M;j++){
            printf("labs(a[%d]-b[%d]):%ld labs(c[%d]-d[%d]):%ld\n",i,j,labs(a[i]-b[j]),i,j,labs(c[i]-d[j]));
            if(min_dis > (labs(a[i]-b[j]) + labs(c[i]-d[j]))){
                min_dis = labs(a[i]-b[j]) + labs(c[i]-d[j]);
                ans = j+1;
            }
        }
        printf("min_dis:%ld ans:%d\n",min_dis,ans);
    }

    return 0;
}
