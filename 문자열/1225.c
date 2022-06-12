#include<stdio.h>
#include<string.h>

int main(void){
    char first[10001];
    char second[10001];
    // 두 수가 모두 10000자리이고, 각 자릿수가 모두 9인 경우, 9 * 9 * 10000 * 10000을 계산해보면 81억으로 int 형의 범위를 벗어나기 때문에 long long int를 사용하여 작성
    long long int sum = 0,i,j;
    scanf("%s %s",first, second);
    for(i=0; i< strlen(first); i++){
        for(j=0; j< strlen(second); j++){
            sum += (first[i] - 48) * (second[j] - 48);
        }
    }
    printf("%lld",sum);
    return 0;
}