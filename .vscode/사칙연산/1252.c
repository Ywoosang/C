#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void append(char* str, char c){
    char* p = str;
    while(*p != '\0') p++;
    *p = c;
    *(p+1) = '\0';
}

void removeFront(char* str){
    bool flag = false;
    char tempStr[100]="";
    for(int i=0; i<strlen(str); i++){
        if(str[i] != '0')
            flag = true;
        if(flag)
           append(tempStr,str[i]);
    }
    if(strcmp(tempStr,"") == 0)
        strcpy(str,"0");
    else
        strcpy(str,tempStr);
}

int main(void) {
    char binary1[100], binary2[100],curr[10];
    char result[100] = "";
    int temp,tempBit = 0;
    bool flag= false;
    scanf("%s %s",binary1,binary2);
    // 앞자리 0 제거
    removeFront(binary1);
    removeFront(binary2);
    int idx1 = strlen(binary1)-1;
    int idx2 = strlen(binary2)-1;
   
      // 높은 인덱스 (뒷자리) 부터 더하면서 반복
    while(idx1 >=0 || idx2 >=0 || tempBit){
        if(idx1>=0 && idx2>=0)
            temp = (binary1[idx1--]-48) + (binary2[idx2--]-48) + tempBit;
        else if(idx1 >=0)
            temp = (binary1[idx1--]-48)  + tempBit;
        else if(idx2 >=0)
            temp = (binary2[idx2--]-48) + tempBit;
        else 
            temp = tempBit;
     
        switch(temp){
            case 0:
                strcpy(curr,"0");
                tempBit =0;
                break;
            case 1:
                strcpy(curr,"1");
                tempBit =0;
                break;
            case 2:
                strcpy(curr,"0");
                tempBit=1;
                break;
            case 3:
                strcpy(curr,"1");
                tempBit=1;
                break;
        }
        char tempStr[100];
        strcpy(tempStr,curr);
        strcat(tempStr,result);
        strcpy(result,tempStr);
    }
    printf("%s",result);      
}
 