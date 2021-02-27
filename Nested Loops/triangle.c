#include<stdio.h>

int main(){
    // int N,i,j,k,l;
    int N,i,j;
    scanf("%d",&N);
    // for(i=1; i<=N; i++){
    //     //
    //     for(j=1; j<=N; j++){
    //         j > N-i ? printf("@") : printf(" ");
    //     };
    //     printf("\n");
    // }
    // for(k=1; k<=N-1; k++){
    //     // 
    //     for(l=1; l<=N; l++){
    //         l <= k ? printf(" ") : printf("@");
    //     };
    //      printf("\n");
    // } 

    // 최종 줄수가 N
    // N 이 정수형이므로 c 언어는 N/2 를 정수형으로 취급. 따라서 1 더해줘야 가운데줄 나옴.
    for(i=1; i <= N/2+1; i++){
        for(j=i; j< (N/2+1); j++){
            printf(" ");
        }
        for(j=1; j <=i; j++){
            printf("@");
        }
        printf("\n"); 
        
    }
     for(i=1; i <= N/2; i++){
        // 1 ~ i 까지 공백
        for(j=1; j<=i; j++){
          printf(" ");
        }
        // > 로 @ 하나씩 적게 나오게해서 칸수 맞추기
        for(j>i; j<= (N/2+1); j++){
          printf("@");
        }
        
        printf("\n"); 
        
    }

}