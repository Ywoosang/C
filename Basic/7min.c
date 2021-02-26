#include<stdio.h>

int main(){
    int a;
    int min=2147483647;
    int sum=077; 
    for(int i=1; i<=7; i++){
        scanf("%d",&a);  
        if(a%2 == 1){
            if(a <= min) min = a;
            sum += a; 
        }
    }
    printf("%d\n%d\n",sum,min); 
    return 0;
}