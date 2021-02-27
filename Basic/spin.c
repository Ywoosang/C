#include<stdio.h>

int main(){
    int i,j,K;
    int arr[10];
    for(i=0; i<9; i++){
        scanf("%d",&arr[i]);
    }
    //
    scanf("%d",&K);
    // j = K%9;
    // for(i=0; i<9; i++){
    //     int spin = (i+j) > 8 ? i+j-8 : i+j;
    //     arr[i] = arr[spin];
    // }

    // 혹은 1번 이동을 k 번 진행할 수도 있음
    for(i=1; i<=K; i++){
        // arr[0] 값을 기억
        int tmp = arr[0];
        for(j=0; j<8; j++){
            arr[j] = arr[j+1];
        }
        arr[8] = tmp;
    }
    // 
    for(i=0; i<9; i++){
        printf("%d ",arr[i]);
    }
   
}