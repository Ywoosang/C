#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double mean = (a+b+c)/(float)3;
    // 소수 셋째 자리에서 반올림
    printf("%f",(int)(mean*100+0.5)/(float)100); 
}