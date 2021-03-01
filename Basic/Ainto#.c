#include<stdio.h>
#include<string.h> 

int main(){
    int i;
    char word[20];
    // 배열은 앞에 & 를 붙이지 않음 
    scanf("%s",word); 
    for(i=0; i<strlen(word); i++){
        if(word[i]=='A'){
            word[i] = '#';
        }
     }
     printf("%s",word);
}
