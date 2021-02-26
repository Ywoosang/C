#include<stdio.h>

int main(){
    int schoolNum,studentNum,appleNum,num=0;
    scanf("%d",&schoolNum);
    for(int i=1; i<=schoolNum; i++){
        scanf("%d %d",&studentNum,&appleNum);
        num += (appleNum%studentNum);
    }
    printf("%d\n",num);
}