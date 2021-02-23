#include<stdio.h>

int  main(){
    int a = 1234; 
    printf("%d\n",a);
    float a1 = 3.15;
    printf("%f\n",a1);
    char a2 = 'A';
    printf("%c\n",a2);

    int c ,d=32;
    c = 8;
    // 같이 넣을 수 있음. 
    printf("%d%d\n",c,d);

    int a3 = 2147483647;
    int a4 = a3+1;
    printf("%d\n%d\n",a3,a4);

    float num;
    num = 22.3434;
    printf("%f\n",num);
    // 123456792.0000000 으로 출력됌
    float e = 123456789;
    printf("%f\n",e);

    double f = 123456789012345;
    float g = f;
    printf("%f\n%f\n",f,g);
    
}


