#include<stdio.h>

void swap(int *pa,int *pb){
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb =tmp; 
}
int main(){
    int a=10, b=20;
    swap(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}
