#include<stdio.h>

int main(){
    // 전체합 - 임의의 둘 합 = 100
    int tall,i,j;
    int tmp = 0;
    int cnt = 0;
    int totalArr[10];
    for(i=0; i<9; i++){
        scanf("%d",&tall);
        cnt += tall;
        totalArr[i] = tall;
    };
    // 임의의 둘 합 
    int index1,index2;
    for(i=0; i<9; i++){
        for(j=i+1; j<9; j++){
            if(i==j) continue;
            tmp = totalArr[i] + totalArr[j];
            if(cnt-tmp == 100){
                index1 = i;
                index2 = j;
                break; 
            }
        }
    }
    for(i=0; i<9; i++){
        if(i == index1 || i == index2) continue;  
        printf("%d ",totalArr[i]);
    }
}