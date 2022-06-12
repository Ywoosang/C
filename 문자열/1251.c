 // void subStr(char str[],char target[], int startIdx,int endIdx) {
//     int idx = 0;
//     for(int i=startIdx; i<=endIdx; i++){
//         target[idx++] = str[i];
//     }
//     target[idx] = '\0';
// }

// void reverseStr(char str[]){
//     int len = strlen(str);
//     char tempStr[len];
//     int idx = 0;
//     strcpy(tempStr,str);
//     for(int i=len-1; i>=0; i--){
//         str[idx++] = tempStr[i];
//     }
// }
#include<stdio.h>
#include<string.h>

void reverseSubStr(char str[],char target[], int startIdx,int endIdx){
    int idx = 0;
    for(int i=endIdx; i >= startIdx; i--){
        target[idx++] = str[i];
    }
    target[idx] = '\0';
}


int main(void){
    char str[51];
    scanf("%s",str);
    int len = strlen(str);
    char first[51], second[51], third[51];
    int idx = 0;
    char min[51] = "";
    // 123  0~0 1~1 2~2
    // 세 단어로 나누기
    // 0 ~ i, i+1~ j, j+1~len-1 
    for(int i=0; i <len -2; i++){ // 두 번째 자를때 
        for(int j=i+1; j<len-1; j++){
            reverseSubStr(str,first,0,i);
            reverseSubStr(str,second,i+1,j);
            reverseSubStr(str,third,j+1,len-1);
            strcat(first,second);
            strcat(first,third);
            if(strcmp(min,"") == 0){
                strcpy(min,first);
            } else if(strcmp(min,first) > 0){
                strcpy(min,first);
            }
        }
    }

    printf("%s",min);
    return 0;
}