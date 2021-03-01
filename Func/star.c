#include<stdio.h>

void prntStar(int n);

int main(){
    int N;
    scanf("%d",&N); 
    int i;
    for(i=1; i<=N; i++){
        prntStar(i);
    }
}

void prntStar(int i){
    int j;
    for(j=1; j<=i; j++){
        printf("%c",'*');
    }
    printf("\n");

}