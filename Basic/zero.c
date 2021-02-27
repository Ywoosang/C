#include<stdio.h>

int main(){
    int A;
    scanf("%d",&A);
    if(A==0) printf("zero\n");
    else if(A%2==0) printf("even\n");
    else printf("odd\n");
}