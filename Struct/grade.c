#include<stdio.h>

struct Student{
    int num, math, eng, c; 
};

int main(){
    // 구조체 배열 만들기
    struct Student s[51]; 
    int i, n, max=-2147483648,res;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&s[i].num);
        scanf("%d",&s[i].math);
        scanf("%d",&s[i].eng);
        scanf("%d",&s[i].c);
    }
    for(i=1; i<=n; i++){
        if(s[i].math>max){
            max = s[i].math;
            // 최종적으로 math성적이 가장 높은 학생의 c 언어점수가 res에 저장 
            res = s[i].c;
        }
    }
    printf("%d\n",res);
    return 0;

}