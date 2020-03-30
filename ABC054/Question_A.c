#include<stdio.h>

int main(void){

    int Alice_Card,Bob_Card;

    scanf("%d %d",&Alice_Card,&Bob_Card);

    if(Alice_Card == Bob_Card){
        printf("Draw");
    }else{
        if(Alice_Card == 1){
            printf("Alice");
        }else if(Bob_Card == 1){
            printf("Bob");
        }else if(Alice_Card > Bob_Card){
            printf("Alice");
        }else{
            printf("Bob");
        }
    }
    
    return 0;
}
