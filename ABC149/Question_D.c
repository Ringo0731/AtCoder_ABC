#include<stdio.h>

int main(void){

    int N,K,R,S,P,i,lock_correcthand = 0,add;
    char T[100001];
    long int ans=0;

    scanf("%d %d",&N,&K);
    scanf("%d %d %d",&R,&S,&P);
    scanf("%s",T);

    for(i = 0;i < N;i++){
        add = 0;
        if(T[i] == T[i+K]){
            if(lock_correcthand == 0){
                //if(T[i] == 'r'){add -= P;}
                //else if(T[i] == 's'){add -= R;}
                //else if(T[i] == 'p'){add -= S;}
                lock_correcthand = 1;
            }
            goto end;
        }
        lock_correcthand = 0;
end:
        if(T[i] == 'r'){add += P;}
        else if(T[i] == 's'){add += R;}
        else if(T[i] == 'p'){add += S;}
        printf("add[%d]:%d\n",i,add);
        ans += add;
    }

    printf("%ld\n",ans);
    return 0;
}
