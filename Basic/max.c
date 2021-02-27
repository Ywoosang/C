#include<stdio.h>

int main(){
    int a[7] = {123,334,545,664,672,886,531};
    int i,min=2147483547;
    for(i=0; i<sizeof(a)/sizeof(int); i++){
        if(a[i]<min) min = a[i];
    }
    printf("%d\n",min);
}