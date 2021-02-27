#include<stdio.h>

int main(){
    int total,price; 
    scanf("%d",&total);
    scanf("%d",&price);
    int ram = total  - price;
    int five = ram / 500;
    int one = (ram%500) / 100;
    printf("%d\n%d\n%d\n",ram,five,one);

}