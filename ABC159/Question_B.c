#include<stdio.h>
#include<string.h>

int main(void){

    char S[100];
    int i,j,ans = 0,lenth,check_kaibun;

    scanf("%s",S);
    lenth = strlen(S);

    check_kaibun = 1;
    for(i = 0;i < lenth;i++){
        //printf("左から%d番目：%c 右から%d番目；%c\n",i,S[i],i,S[lenth - 1 - i]);
        if(S[i] != S[lenth - 1 - i]) check_kaibun = 0;
    }
    if(check_kaibun == 1){
        ans++;
        //printf("Condition1 Successed!\n");
    }else{
        //printf("Condition1 Failed!");
    }
    //printf("\n");

    check_kaibun = 1;
    int Condition2 = (lenth - 1)/2;
    for(i = 0;i < Condition2;i++){
        //printf("左から%d番目：%c 右から%d番目；%c\n",i,S[i],i,S[Condition2 - 1 - i]);
        if(S[i] != S[Condition2 - 1 - i])  check_kaibun = 0;
    }
    if(check_kaibun == 1){
        ans++;
        //printf("Condition2 Successed!\n");
    }else{
        //printf("Condition2 Failed!\n");
    }
    //printf("\n");

    check_kaibun = 1;
    int Condition3 = (lenth + 3)/2;
    for(i = Condition3 - 1;i < lenth;i++){
        //printf("左から%d番目：%c 右から%d番目：%c\n",i,S[i],i,S[lenth - 1 - i]);
        if(S[i] != S[lenth - 1 - i]) check_kaibun = 0;
    }
    if(check_kaibun == 1){
        ans++;
        //printf("Condition3 Successed!\n");
    }else{
        //printf("Condition3 Failed!\n");
    }
    //printf("\n");

    if(ans == 3) printf("Yes\n");
    else printf("No\n");
    return 0;
}
