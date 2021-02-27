#include<stdio.h>

int main(){
    int N,i=1,sum=0; 
    scanf("%d",&N);
    // while(i<=N){
    //     sum += i;
    //     i ++;
    // }
    for(; i<=N; i++){
        sum += i;
    }
    printf("%d\n",sum);
}