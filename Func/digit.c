#include<stdio.h>
#include<string.h> 

int digit(int n); 
int main(){
    int N;
    scanf("%d",&N);
    digit(N);
}

int digit(int n){
    int i;
    char str[5];
    sprintf(str,"%d",n); 
    int length = strlen(str);
    printf("%d\n",length );
}