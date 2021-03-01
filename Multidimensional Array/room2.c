#include<stdio.h>
#include<math.h>

int main(){
    int N,K,S,Y,i,j;
    scanf("%d %d",&N,&K);
    int arr[4][3]={0,};
    for(i=1; i<=N; i++){
        scanf("%d %d",&S,&Y);
        if(Y <=2) arr[0][S]++;
        else if(Y <=4) arr[1][S]++;
        else  arr[2][S] ++;
    }
    
    int cnt = 0;
    // // 먼저 1,2학년부터 더함
    cnt +=( (arr[0][1] + arr[0][0])/K + (arr[0][1] + arr[0][0])%K);
    // // 열 고정, 행 움직 
    for(i=0; i<2; i++){
        for(j=1; j<3; j++){
            cnt += (arr[j][i]/K + arr[j][i]%K);
        } 
    }
    printf("%d",cnt);
}