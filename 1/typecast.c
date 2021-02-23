#include<stdio.h>

int main(){
    float a=5,b=2;
    float c = (int)(a/b);
    printf("%f\n",c);
    int d=14,e=3;
    float f = (float)d/e;
    float g = d/(float)e;
    printf("%f\n%f\n",f,g);
    // 소숫점 2번째 자리에서 반올림
    printf("%0.1f\n",f);
    return 0;
}

