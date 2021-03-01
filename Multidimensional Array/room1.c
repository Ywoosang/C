#include<stdio.h>

int main(){
    // 남남 여여
    // 방에 같은 학생 , 0명 이상
    // 학생수 N 
    // 최대 인원수 K
    // 1<= Y <= 6
    // 성별 S 는 0,1 중 하나로서 여핵생 0, 남학생 1 
    // 학년 Y 1~6;
    int N,K,S,Y,i,j,tmp;
    int cnt = 0; 
    // 2차원 배열 만들어서 학년, 여,남 저장
    scanf("%d %d",&N,&K);
    int arr[7][3] = {0,}; 
    for(i=1; i<=N; i++){
        scanf("%d %d",&S,&Y);
        // 이차원 배열에 집어넣음
        arr[Y-1][S] ++;
    }
    // 6 * 2 
    for(i=0; i<2; i++){
        for(j=0; j<6; j++){
            tmp = arr[j][i];
            cnt += tmp/K + tmp%K;
            // 나눈 다음 소수점을 올려버려도 됌
            // ceil(arr[j][i]/(double)k)); 
        }
    }
    printf("%d\n",cnt);
    
}