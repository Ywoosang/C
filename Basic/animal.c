#include<stdio.h>

int main(){
    // 마리수, 다리수
    // x + y = a 
    // 4 * x + 2 * y = b 
    // 2x = b - 2a
    // x = (b-2a)/2
    // y = a - x
   
   // 적어도 1마리 for 문을 이용
   int a,b,i;
   scanf("%d %d",&a,&b);
   for(i =1; i<10; i++){
       if(4*i + 2*(a-i) == b){
           break;
       }
   }
   printf("%d %d\n",i,a-i);
    

}