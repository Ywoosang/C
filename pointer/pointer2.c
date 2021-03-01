#include<stdio.h>

int main(){
    int a = 20;
    int *pa; // 포인터변수
    pa = &a;
    printf("%p\n",&a);
    printf("%p\n",pa);
    printf("%d\n",*pa);
    return 0;
}