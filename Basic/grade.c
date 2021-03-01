#include<stdio.h>

int main(){
    // 수학,영어,c언어 점수 
    int N,i,num,math,eng,c;
    scanf("%d",&N);
    int arr[51][5];
    for(i=0; i<N; i++){
        scanf("%d %d %d %d",&num,&math,&eng,&c);
        // 2차원 배열을 만들어서 집어넣기
        arr[i][0] = num;
        arr[i][1] = math;
        arr[i][2] = eng;
        arr[i][3] = c;
    }
    int max = -2147483648;
    int index;
    for(i=0; i<N; i++){
        if(arr[i][1]>max){
            max = arr[i][1]; 
            index=i;
        }
    }
    printf("%d\n",arr[index][3]);
}