#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            j == N ? printf("*\n") : printf("*");
        }
        // 혹은 마지막에 printf("/n") 으로 줄바꿈해줘도 됌.
    }
}