#include<stdio.h>

int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C); 
    // 삼각형의 정의
    if( A+B > C && A+C >B && B+C> A) printf("YES\n");
    else printf("NO\n");
}