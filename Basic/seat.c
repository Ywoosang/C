#include<stdio.h>

int main(){
    int N,M,i,j,item;
    scanf("%d",&N);
    int arr[N+2];
    for(i=0; i<N; i++){
        scanf("%d",&item); 
        arr[i] = item;
    };
    scanf("%d",&M);

    // 한번에 밀어주기 
    // for(i=N-1; i>=0; i--){
    //    if(arr[i]>M) arr[i+1] = arr[i];
    //    else break; 
    // }

    //요소가 들어갈 인덱스 찾기 
    int tmp;
    for(i=0; i<N; i++){
        if(arr[i]<M && M < arr[i+1]){
            tmp=i+1;
        }
    }
    // 요소가 들어갈 인덱스 뒤로 한칸씩 밀기
    for(i=N; i>tmp; i--){
        arr[i] = arr[i-1]; 
    };
    // 요소 삽입
    arr[tmp] = M;
    // 배열 출력
    for(i=0; i<=N; i++){
        printf("%d ",arr[i]);
    }
}