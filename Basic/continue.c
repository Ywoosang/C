#include<stdio.h>

int main(){
    int i, sum=0;
    for(i=1; i<=5; i++){
        if(i%2==0) continue;
        sum += i;
    }
    printf("for: %d\n",sum);
    sum =0; 
    int j=1;
    while (j<=5){
        if(j%2==0) {
            j++; 
            continue;
        } 
        sum +=j;
        j++;
    }
    printf("while: %d\n",sum);  
}