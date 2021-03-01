#include<stdio.h>

int main(){
    int N,i,j,total;
    scanf("%d",&N);
    // 돌다리가 N 개면 N+1 번 뛰어야 함
    // 두번 뛰기가 가능한 최대 횟수 
    int max = (N+1)/2;
    // 총 가짓수  
    int cnt =0;
    // 두번 뛰는 횟수 i
    // 한번 뛰는 횟수 N+1 - 2*i 
    for(i=0; i<=max; i++){
        total = N+1 - 2*i + i;
        // totalCi  = p1!/p2!*p3! 라 하면 
        int p1 = 1;
        int p2 = 1;
        int p3 = 1;
        for(j=1; j<=total; j++){
            p1 = p1*j;
        }
        for(j=1; j<=i; j++){
            p2 = p2 * j;
        }
        for(j=1; j<=total-i; j++){
            p3 = p3 * j;
        }
        cnt += p1/(p2*p3);
    }
    printf("%d",cnt);
}