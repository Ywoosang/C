#include<stdio.h>

int main(){
    double a,b;
    scanf("%lf",&a);
    // 23.4456.. 
     b =(double)(int)(a*10+0.5);
     printf("%f",b/10);
}