#include<stdio.h>
#include<stdlib.h>

#define MAX_N 200001

void merge_sort (long int array[], int left, int right) {
  int i, j, k, mid;
  long int work[MAX_N];  // 作業用配列
  if (left < right) {
    mid = (left + right)/2; // 真ん中
    merge_sort(array, left, mid);  // 左を整列
    merge_sort(array, mid+1, right);  // 右を整列
    for (i = mid; i >= left; i--) { work[i] = array[i]; } // 左半分
    for (j = mid+1; j <= right; j++) {
      work[right-(j-(mid+1))] = array[j]; // 右半分を逆順
    }
    i = left; j = right;
    for (k = left; k <= right; k++) {
      if (work[i] < work[j]) { array[k] = work[i++]; }
      else                   { array[k] = work[j--]; }
    }
  }
}

int main(void){

    int N,K,i;
    long int H[MAX_N],ans = 0;

    scanf("%d %d",&N,&K);
    for(i = 0;i < N;i++){
        scanf("%ld",&H[i]);
    }

    merge_sort(H,0,N-1);

    for(i = N-1;i >= 0;i--){
        printf("%ld ",H[i]);
        if(K > 0){
            H[i] = 0;
            K--;
        }else{
            ans += H[i];
        }
    }

    printf("\n%ld\n",ans);
    return 0;
}