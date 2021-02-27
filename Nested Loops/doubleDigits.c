#include<stdio.h>

int main(){
    int C,A,B;
    scanf("%d",&C);
    // AB 
    for(A=1; A<=9; A++){
        //if 문으로 A<= B 일때 거르는것보다 for 문 돌때 A보다 적게 돌면 훨씬 효율적
        for(B=1; B<A; B++){
            // if(A<=B || A*10+B > C) continue;

            // 불필요하게 반복문을 도는것 방지
            if(A*10+B>C) break;
            printf("%d%d\n",A,B);
        }
    }

}