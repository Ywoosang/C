#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    for(int i=1; i<=N; i ++){
        for(int j=1; j<=N; j++){
            // continue 활용하기
            if(i==j) continue;
            printf("%d%d\n",i,j);
        //     if(i != j){
        //         printf("%d%d\n",i,j);

        //     }
        // }
    }}
} 