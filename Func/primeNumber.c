#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n); 
int main(){
    // 100 이하 자연수 N 주어짐
    // N 개 자연수 입력됨
    int N,i,j,num;
    scanf("%d",&N);
    int arr[N+1]; 
    // 숫자들 배열에 저장
    for(i=0; i<N; i++){
        scanf("%d",&num); 
        arr[i] = num;
    }
    // 배열 읽어서 소수 판별
    for(i=0; i<N; i++){
        if(isPrime(arr[i])){
            printf("%d ",arr[i]); 
        }
    }

}
bool isPrime(int N){
    int i;
    int cnt = 0;
    for(i=1; i<=N; i++){
        if(N%i==0){
            cnt ++;
        }
        if(cnt > 2){
            return false;
        }
    }
    return true; 
}