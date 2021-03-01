#include<stdio.h>
int main(){
    int N,i,j; 
    scanf("%d",&N); 
    int arr[11][11];

    // 
    for(i=0; i<N; i++){
        for(j=N-1; j>=0; j--){
            // 7 ~ 1 
            arr[j][i] = (i+1)*N-j;
        }
    }
    // 
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%3d",arr[i][j]); 
        }
        printf("\n");
    }
}
