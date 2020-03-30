#include<stdio.h>

#define MAX_ARRAY 100001

void MergeSort(int array1[],int array2[],int Left,int Right){

    int i,j,k,center;
    int work_A[MAX_ARRAY],work_CO[MAX_ARRAY];

    if(Left<Right){
        center = (Left + Right)/2;
        MergeSort(array1,array2,Left,center);
        MergeSort(array1,array2,center+1,Right);

        for(i = center;i >= Left;i--){
            work_A[i] = array1[i];
            work_CO[i] = array2[i];
        }
        for(j = center + 1;j <= Right;j++){
            work_A[Right-(j-(center+1))] = array1[j];
            work_CO[Right-(j-(center+1))] = array2[j];
        }

        i = Left;
        j = Right;

        for(k = Left;k <= Right;k++){
            if(work_A[i] < work_A[j]){
                array1[k] = work_A[i];
                array2[k] = work_CO[i];
                i++;
            }else{
                array1[k] = work_A[j];
                array2[k] = work_CO[j];
                j--;
            }
        }
    }
}

int main(void){

    int A[MAX_ARRAY],ComeOrder[MAX_ARRAY];
    int N,i;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&A[i]);
        ComeOrder[i] = i+1;
    }

    MergeSort(A,ComeOrder,0,N-1);

    for(i = 0;i < N;i++){
        printf("%d ",ComeOrder[i]);
    }

    printf("\n");

    return 0;
}