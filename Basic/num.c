#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int cnt = 0;
    // 1부터 N 까지 짝수의 개수
    for(int i=2; i<=N; i+=2){
        cnt +=1;
    }
    printf("%d",cnt);
}