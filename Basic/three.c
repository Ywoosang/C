#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    // a,b 비교 => 큰거랑 c 비교 해서 첫번째 구함
    int min = a > b ?  (b > c ? c : b) :  (a > c ? c : a);
    printf("%d\n",min); 
}