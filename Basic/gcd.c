#include<stdio.h>

int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    int min = A>B ? A : B;
    // int gcd;
    // for(int i=1; i<=min; i++){
    //     if(A%i==0 && B%i==0){
    //         gcd = i;
    //     }
    // }
    // 가능한 가장 큰 수부터 내려오면서
    for(int i=min; i>=1; i--){
        if(A%i==0 && B%i==0){
            printf("%d\n",i);
            break;
        }
    }
    // printf("%d\n",gcd); 
}