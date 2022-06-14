#include<stdio.h>
#include<string.h>

int compare(char* f,char* s){
    if(strlen(f) > strlen(s)) return 1;
    else if(strlen(f) < strlen(s)) return -1;
    else if(strlen(f) == strlen(s)) return strcmp(f,s);
}

// 문자열의 배열을 넘길 때
void QuickSort(char strArr[][51] ,int left, int right){
    int low,high,pivotIdx;
    char temp[51];
    char pivot[51];
    low = left;
    high = right + 1;
    strcpy(pivot,strArr[left]);
    if(left < right){
        do{
            do{
                low++;
            } while(low <= right &&  compare(strArr[low],pivot) < 0);
            do {
                high--;
            } while(high >= left && compare(strArr[high],pivot) > 0);
            if(low < high){
                strcpy(temp,strArr[low]);
                strcpy(strArr[low],strArr[high]);
                strcpy(strArr[high],temp);
            }
        } while(low < high);
        pivotIdx = high;
        strcpy(temp,strArr[pivotIdx]);
        strcpy(strArr[pivotIdx],pivot);
        strcpy(strArr[left],temp);
        QuickSort(strArr,left,pivotIdx-1);
        QuickSort(strArr,pivotIdx+1,right);
    }
}

// 선택정렬시 시간초과
int main(void){
    int N,i;
    scanf("%d",&N);
    char tempStr[51];
    char strArr[N][51];
    for(int i=0; i<N; i++){
        scanf("%s",strArr[i]);
    }
    // 퀵정렬
    QuickSort(strArr,0,N-1);
    // 중복 제거 출력
    for(int i=0; i<N; i++){
        if(strcmp(tempStr,strArr[i]) != 0){
            printf("%s\n",strArr[i]);
            strcpy(tempStr,strArr[i]);
        }
    }
}