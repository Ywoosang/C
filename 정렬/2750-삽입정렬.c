#include <stdio.h>
#include <malloc.h>
int main(void){
    int N,i,j,curr,temp;
    int* arr;
    scanf("%d",&N);
    arr = malloc(N * sizeof(int));
    for(i=0; i<N; i++) {
        scanf("%d",&arr[i]);
    }
    // 삽입정렬
    // 두 번째 인덱스부터
    for(i=1; i<N; i++){
        curr = arr[i];
        for(j=i-1; j >=0 && arr[j] > curr; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = curr;
    }

    for(i=0; i<N; i++){
        printf("%d\n",arr[i]);
    }

}