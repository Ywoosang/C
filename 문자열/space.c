#include<stdio.h>
#include<string.h>

void removeSpace(char str[],char newStr[]){
    int idx = 0;
   for(int i=0; i < strlen(str); i++){
       if(str[i] != ' '){
           newStr[idx++] = str[i];
       }
   }
   newStr[idx] = '\0';
}

int main(void){
    // 문자열에 포함된 공백 문자 삭제       
    char str[50];
    char newStr[50];
    scanf("%[^\n]s",str);
    removeSpace(str,newStr);
    printf("%s",newStr);
    return 0;
}