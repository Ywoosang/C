#include<stdio.h>
#include<string.h>

int main(){
    char strArray[12] = "CLanguage";
    int len = strlen(strArray);
    printf("%s",strArray);
    for(int i=0; i<len; i++){
        printf("%c\n",strArray[i]);
    }
    
}