#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N); 
    int cnt = 0;
    for(int i=1; i<=N; i++){
        if(N%i ==0) cnt ++;
    }
    cnt == 2 ? printf("YES\n") : printf("NO\n");
}
