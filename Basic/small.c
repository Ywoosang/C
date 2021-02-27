#include<stdio.h>

int main(){
    int a,b; 
    scanf("%d %d",&a,&b);
    int value = a > b ? b : a;
    printf("%d\n",value);
    return 0; 
}