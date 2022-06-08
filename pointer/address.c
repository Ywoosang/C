#include<stdio.h>

int main(void){
    int a[5] = { 1, 2, 3, 4, 5 };
    printf("%p %p %p\n",&a, &a[0],a); // 0x7fffffffdcd0 0x7fffffffdcd0 0x7fffffffdcd0 주소값 동일하게 출력
    int (*p)[5]; // 배열 포인터
    int *q; // 배열의 첫 번째 원소를 주소값으로 사용

    // &a 와 a 의 주소를 출력해보면 동일한데 불구하고 p = a 는 오류
    p = &a;  
    // p = a; cannot convert ‘int [5]’ to ‘int (*)[5]’ in assignment
    q = a;  
    printf("%p %p\n",p,q);
    printf("%d %d\n",(*p)[1], q[1]); // (*q)[1] 

    return 0;
}