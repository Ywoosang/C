#include<stdio.h>

int main(){
    int N,i,j,k=1; 
    scanf("%d",&N);
    int arr[11][11]={0,};
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if( i==j || i+j == N-1){
                arr[i][j] = k; 
                k++;
            }
        }
    }
    // int arr[11][11]={0,};
    // scanf("%d",&N);
    // int cnt = 1;
    // for(i=0; i<N/2+1; i++){
    //     for(j=0; j<N; j++){
    //         if(j == i || j == N-1-i ){
    //             arr[i][j]=cnt;
    //             cnt ++;
    //         }
    //     }
    // }
    // int tmp=0; 
    // cnt = cnt + cnt -1-2; 
    // for(i=N-1; i>=N/2+1; i--){
    //     for(j=N-1; j>=0; j--){
    //         if(j == tmp || j == N-1-tmp ){
    //             arr[i][j]=cnt;
    //             cnt--;
    //         }
    //     }
    //     tmp++;
    // }
    // for(i=0; i<N; i++){
    //     for(j=0; j<N; j++){
    //         printf("%3d",arr[i][j]); 
    //     }
    //     printf("\n");
    // }
}