#include<stdio.h>
#include<string.h>

int main(void) {
    int N,i,j;
    char tmp[51];
    char prev[51];
    scanf("%d",&N);
    char strArr[N][51];
    for(int i=0; i<N; i++){
        scanf("%s",strArr[i]);
    }
    // 선택정렬
    for(i=0; i<N; i++){
        int minLen = strlen(strArr[i]);
        int minIdx = i;
        // 자신 뒤에 있는 요소 중 가장 작은 것 보다 작다면 바꿈
        for(j = i+1; j < N; j++){
            if(strlen(strArr[j]) < minLen || (strlen(strArr[j]) == minLen && strcmp(strArr[j],strArr[minIdx]) < 0)){
                minLen = strlen(strArr[j]);
                minIdx = j;
            }
        }
        // swap
        if(minIdx != i){
            strcpy(tmp,strArr[i]);
            strcpy(strArr[i],strArr[minIdx]);
            strcpy(strArr[minIdx],tmp);
        }
        // 중복된 것은 출력하지 않음
        if(strcmp(prev,strArr[i]) != 0){
             printf("%s\n",strArr[i]);
        }
        strcpy(prev,strArr[i]);
    }
    
}