#include<stdio.h>

int main(void){
    
    int a[3],i,j,tmp,result;

    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(a[i]>a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }

    result=a[0]+a[1];

    printf("%d",result);
    return 0;
}