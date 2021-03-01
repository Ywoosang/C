#include<stdio.h>

int main(){
    int a=10,b=20;
    int *pa; // 포인터 변수 선언
    pa = &a; // a 메모리 주소 할당
    printf("%d\n",*pa); // 주소 역참조로 값 출력
    *pa = b; // 포인터 변수가 가리키고 있는 메모리의 값에 b 값 할당
    printf("%d\n",*pa); // 포인터 변수 출력
    *pa = *pa +1; // 포인터 변수가 가리키고 있는 메모리의 값에 1 더함 = a도 21 로 변함
    printf("%d\n",*pa);
    printf("%d\n",a);
    return 0;
}