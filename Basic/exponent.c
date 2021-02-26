#include<stdio.h>

int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    int val=1;
    for(int _=1; _<=B; _++){
        val = val*A;
    }
    printf("%d",val);
}