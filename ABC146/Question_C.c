#include<stdio.h>

#define MAX_VALUE 1000000000

long long int digits(long long int i){
    long long int ret = 0;
    while(i > 0){
        i /= 10;
        ret++;
    }
    return ret;
}

int main(void){

    long int A,B;
    long long int X,ans = 0,mid,min,max;

    scanf("%ld %ld %lld",&A,&B,&X);

    if(A*MAX_VALUE + B*digits(MAX_VALUE) <= X){
        ans = MAX_VALUE;
    }else{
        min = 0;
        max = MAX_VALUE + 1;
        while(max - min > 1){
            mid = (min + max)/2;
            if(A*mid + B*digits(mid) > X){
                max = mid;
            }else{
                min = mid;
            }
        }
        ans = min;
    }
    
    printf("%lld\n",ans);
    return 0;
}
