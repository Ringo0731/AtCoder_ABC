#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_N 200001

int compare_char(const void* left, const void* right) {
    char *left_char = (char *)left;
    char *right_char = (char *)right;

    return strcmp(left_char,right_char);
}

typedef struct{
    char lenth[11];
    int time;
} word;

int main(void){

    int N,i,j = 0,k = 0,max_time = 0,word_time[MAX_N];
    char S[MAX_N][11];
    word Str[MAX_N];

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%s",S[i]);
        Str[i].time = 0;
    }

    qsort(S,N,sizeof(S[0]),compare_char);

    strcpy(Str[0].lenth,S[0]);
    for(i = 1;i < N;i++){
       if(strcmp(Str[j].lenth,S[i]) != 0){
           //printf("c\n");
           if(max_time < Str[j].time){
               max_time = Str[j].time;
           }
           j++;
           strcpy(Str[j].str,S[i]);
       }else{
           Str[j].time++;
           if(max_time < Str[j].time){
               max_time = Str[j].time;
           }
       }
    }

    //printf("\n");
    for(i = 0;i < N;i++){
        if(Str[i].time == max_time){
            printf("%s\n",Str[i].lenthjj:wq);
        }
    }
    return 0;
}
