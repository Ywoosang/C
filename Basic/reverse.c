#include<stdio.h>

int main(){
    int N,item,i;
    //
    scanf("%d",&N);
    int arr[N+1];
    // 
    for(i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    // 
    for(i=N-1;i>=0; i--){
        printf("%d\n",arr[i]);
    }
    // printf("\n");
}