#include<stdio.h>
#include<string.h>
struct Student{
    char name[20];
    int mat, eng;
};

int main(){
    // 구조체 변수 선언
    struct Student s1;
    strcpy(s1.name,"Ywoosang");
    s1.mat = 10;
    s1.eng = 50;
    printf("%s\n",s1.name);
    printf("%d\n",s1.mat);
}