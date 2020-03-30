#include<stdio.h>

int combi(int n,int r){
    if(r < 0){
        return 0;
    }else if (r == 0){
        return 1;
    }
    return (n - r + 1) * combi(n,r - 1)/r;
}

int main(void){

    int N,M,ans = 0,N_pair,M_pair;

    scanf("%d %d",&N,&M);

    N_pair = combi(N,2);
    M_pair = combi(M,2);
    
    ans = N_pair + M_pair;
    printf("%d\n",ans);
    return 0;
}
