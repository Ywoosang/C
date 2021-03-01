#include<stdio.h>

int main(){
    int N=5,i,j;
    int arr[6][6]= {0,};   
    int num = 0;
    for(i=0; i<5; i++){
        // 0 :1개 1: 2개 
        for(j=4; j>=0; j--){
            // 행 고정, 열 오른쪽에서 왼쪽으로
            if(j<= i){
                num ++;
                arr[i][j] = num;
            }
        }
    }
    //
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%3d",arr[i][j]);
        }
        printf("\n");

    }
}