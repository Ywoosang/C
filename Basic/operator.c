#include <stdio.h>

int main(){
    int a = 4, b =15, c, d,e;
    c = b % a;
    d = c+1;
    e = ++c;
    printf("%d %d %d\n", c, d,e);
    return 0;
}