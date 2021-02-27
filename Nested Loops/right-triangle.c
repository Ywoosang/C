#include<stdio.h>

int main(){
    int N; 
    scanf("%d",&N);
    for(int i=1; i<= N; i++){
        // for(int j=N-i+1; j>=1; j--){
        //     printf("*");
        // }

        // 시작을 i 부터
        for(int j=i; j<=N; j++){
             printf("*");
        }
        printf("\n");
    }
}