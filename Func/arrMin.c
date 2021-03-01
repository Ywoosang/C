#include<stdio.h>

int Min(int tmp[], int size); 
int main(){
    int N,i,num;
    scanf("%d",&N);
    int arr[101]; 
    for(i=0; i<N; i++){
        scanf("%d",&num);
        arr[i] = num;
    }
    // 
    int min = Min(arr,N);
    printf("%d\n",min);
    return 0;
}
// tmp 배열에서 최솟값 구하는 함수
int Min(int tmp[], int size){
    int i;
    int min = 2147483647;
    for(i=0; i<size; i++){
        if(tmp[i]<min){
            min = tmp[i];
        }
    }
    return min;
}