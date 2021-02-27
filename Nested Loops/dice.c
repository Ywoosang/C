#include<stdio.h>

int main(){
    // 1~6 까지 자연수
    // 눈의 합 K 가 되는 경우의 수
    int K,i,j;
    scanf("%d",&K);
    // for(int i=1; i<=6; i++){
    //     dice1=i;
    //     dice2=K-i;
    //     if( 1<= dice2 && dice2 <=6){
    //         printf("%d %d\n",dice1,dice2);
    //     }
    // }
    for(i=1; i<=6; i++){
        for(j=1; j<=6; j++){
            if(i+j==K){
                printf("%d %d\n",i,j);
            }
        }
    }

}