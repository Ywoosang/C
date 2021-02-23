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
}


