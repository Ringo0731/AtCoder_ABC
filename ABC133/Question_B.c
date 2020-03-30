#include<stdio.h>
#include<math.h>

int main(void){
    
    int N,D,i,j,k,X[10][10],result = 0;
    double dist = 0;

    scanf("%d %d",&N,&D);
    for(i = 0;i < N;i++){
        for(j = 0;j < D;j++){
            scanf("%d",&X[i][j]);
        }
    }

    for(i = 0;i < N;i++){
        for(k = i + 1;k < N;k++){
            dist = 0;
            for(j = 0;j < D;j++){
                dist += (X[k][j] - X[i][j])*(X[k][j] - X[i][j]); 
            }
            if(ceil(sqrt(dist)) == floor(sqrt(dist))){
                //printf("%d番目と%d番目 %lf %lf\n",i,k,ceil(sqrt(dist)),floor(sqrt(dist)));
                result++;
            }
        }
    }

    printf("%d",result);
    return 0;
}