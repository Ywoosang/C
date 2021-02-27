#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int intNum = (int)(num/12);
    // 소수부분을 의미
    double ramnent  = (num/12.0) -intNum;
    // 나머지가 0 이면 빼고 나머지가 0 이 아니면 안뺌
    // 즉, 일단 더하고 소수부분이 있다면 빼지 않고, 소수부분이 없다면 뺌
    int das =  intNum +1 - (int)(1-ramnent);
    printf("%d",das); 
}