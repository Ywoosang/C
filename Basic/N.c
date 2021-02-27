#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    // int num = 1;
    // while(num<=N){
    //     if(num%2 != 0) printf("%d ",num);
    //     num ++;
    // }

    // if문을 사용하지 않은 풀이
    for(int i=1; i<=N; i+=2){
        printf("%d",i);
    }
    return 0;
}