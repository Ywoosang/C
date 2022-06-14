#include<stdio.h>
#include<string.h>

int main(void){
    int N,M,i,j,cnt=0;
    scanf("%d %d",&N,&M);
    char strArr[N][501];
    char tempStr[501];
    for(i=0; i<N; i++){
        scanf("%s",strArr[i]);
    }
    // 선형탐색 시간초과
    for(int i=0; i<M; i++){
        scanf("%s",tempStr);
        for(j=0; j<N; j++){
            if(strcmp(strArr[j],tempStr)==0){
                cnt++;
                break;
            }
        }
    }

    printf("%d",cnt);

}