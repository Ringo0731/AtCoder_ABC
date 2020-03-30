#include<stdio.h>
#include<string.h>

void Add_chara_prepend(char S[],char c){
    int i,S_len = strlen(S);
    for(i = S_len-1;i >= 0;i--){
        S[i] = S[i-1];
    }
    S[0] = c;
}

void Add_chara_append(char S[],char c){
    int S_len = strlen(S);
    S[S_len+1] = S[S_len];
    S[S_len] = c;
}

void Change_TopButtom_Array(char S[]){
    int i,S_len = strlen(S);
    char t;
    for(i = 0;i < S_len/2;i++){
        t = S[i];
        S[i] = S[S_len - i - 1];
        S[S_len - i - 1] = t;
    }
}

int main(void){
    
    char S[300001],C[200001];
    int Q,T[200001],F[200001],i;

    scanf("%s",S);
    scanf("%d",&Q);
    for(i = 0;i < Q;i++){
        scanf("%d",&T[i]);
        if(T[i] == 2){
            scanf("%d",&F[i]);
            scanf("%c",&C[i]);
        }
    }

    for(i = 0;i < Q;i++){
        if(T[i] == 1){
            Change_TopButtom_Array(S);
        }else{
            if(F[i] == 1){
                Add_chara_prepend(S,C[i]);
            }else{
                Add_chara_append(S,C[i]);
            }
        }
    }

    printf("%s\n",S);
    return 0;
}