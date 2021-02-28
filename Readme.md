## c언어 학습 


### 변수 선언과 메모리

정수형 변수 선언  
int a;  
메모리 공간에는 a 라는 이름을 가진 32bit (4byte) 짜리 공간이 생성  
  
1bit  : 0또는 1 저장  
1byte = 8 bit  
3bit 로 표현할 수 있는 가짓수 : 2x2x2 = 8 가지  
  
0~7 까지 표현 가능 (최대 크기:7)  
```
000 - 0  
001 - 1  
010 - 2  
...  
110 - 6  
111 - 7  
```
### 자료형
 
정수 자료형은 크게 char, int    
![image](https://user-images.githubusercontent.com/68385605/109399375-d79e0200-7985-11eb-841e-607cccec4a8d.png)

실수 자료형은 소수점 표현 가능  
![image](https://user-images.githubusercontent.com/68385605/109399400-061bdd00-7986-11eb-87ee-f807e9124bc8.png)

tip: 자료형 크기
```
char < short < int < long < long long < float < double < long double
```
int 보다 float 가 자료형 크기가 큼

### 자동 형 변환(암시적 형 변환)

데이터 형식(Type)을 자동으로 변환해주는 것을 의미  
대입 연산자를 기준으로 오른쪽에서 왼쪽으로 자동 형 변환  
자료형이 같거나 크기가 큰 쪽, 표현 범위가 넓은 쪽으로 저장하면 자동으로 변환  
```c
unsigned int a = 10; //  
long long a = 10;  
double a = 10; 
```

형 축소는 값의 손실이 발생하여 컴파일러가 알아서 처리할 수 없으므로 경고가 발생 

크기가 큰 자료형값을 크기가 작은 자료형에 저장하면 데이터 손실이 발생  
```c
char num1 = 130; // 값  범위 -128~+127 초과 손실  
int num2 = 3.14; // 소수점 담아내지 못해 손실
```


### 강제 형 변환(명시적 형 변환)

개발자가 직접 형 변환 실행  
타입캐스팅이라고 함  

바꿀 자료형을 강제로 () 괄호 안에 기입 

```c
ex) (double)num;
```

a/b 의 연산결과는 3.5지만 (int) 캐스트 연산자를 거치면 소수점 부분이 제거되고 정수부분만 결과로 남음  
변수 c 는 실수형이지만 대입되는 값은 3.0  

```c
float a,b;
a = 7;
b = 2;
c = (int)(a/b);
``` 

정수형 변수끼리 나누기를 하면 실수형 변수에 정수만 저장  
따라서 두 변수중 하나의 변수를 float 으로 형변환시키면 실수가 온전하게 저장  
나누기 연산자보다 형변환 연산자가 우선순위가 높기 때문에 먼저 수행됨   
4.666667 이 출력   
  
```c
int d=14,e=3;  
float f = (float)d/e;  
float g =  d/(float)e;
```
  
d/e 로 정수끼리 나누기한 몫 4 을 float 으로 변환  
4.0000000 이 출력

```c
float h = (float)(d/e) 
```
 
### 출력 printf()

ex) `%3d` 를 이용해 여백으로 칸 맞추기

```c
printf("%3d",10);
printf("%3d",8);
printf("%3d",205);
```

### 정수형 변수 int  값 저장할 수 있는 최대 크기
  
최상위 bit (첫번째 bit) 는 숫자 표현용이 아니라 부호표현용  
0 : 양수  
1 : 음수  
  
나머지 31 bit 로 숫자와 대응시킴  
  
양수 최대크기 : 2^31 -1 (0 포함)  
2147483647  
음수 최소크기 : -2^31 (0 미포함)  
-2147483648  
  
### 값의 범위를 넘어가면 오버플로 발생  
최대값을 넘어가면 최소값으로 회전해서 변환

``` 
2^31 = -2^31  
2^31 +1 = -2^31 +1  
...  
-2^31 -1 = 2^31 -1  
```
### 정수형 변수를 정수형 변수로 나누면 몫이 저장 (정수만 저장)

7/2 = 3.5  
3 저장  

tip : 정수를 1로 나누면 나머지는 항상 0  
ex) 5%1 = 0  

### 실수형 변수 float,double 

float a = 1234567  
7자리까지는 정확하게 나옴  

float b = 123456789  
123456792.000000    
8자리 이상부터 부정확하게 나올 수 있음  

따라서 double 로 실수를 표현  
double 은 8byte 라서 많은 용량을 가지고 사용하기 때문에 정확도 높음  
15자리까지 정확하게 나옴  

문제풀이시 double 사용할것  
double,float 모두 출력할때는 %f 사용  

##### 123456789012345 를 float, double 로 출력   
```c
double  
123456789012345.000000  
float  
123456788103168.000000  
```

## 실수형 반올림

```
%0.1f
%0.2f
```
각각 반올림해서 소숫점 첫번째, 두번째 자리까지 나오게함  

## 문자형 변수 char 

1byte (8bit) 변수  
%d 로 출력하면 아스키넘버가 출력됨  
A~Z   
65~90  
a~z  
97~122  

```c
char str;
str = 'A'
``` 
문자를 코드에서 작성할 때는 반드시 홑따옴표로 묶어야함  

```c
printf("%c\n",str)
``` 
%c 는 문자형 변수를 출력하는 제어문자  

```c
printf("%d\n",str);  // 65 출력 
str = str + 1 // 66 
printf("%c\n",str); // 66 이므로 B 출력
```
더하기나 곱하기 등 연산을 수행할 시 아스키넘버로 계산

숫자를 문자형 %c 로 출력하면 아스키넘버에 맞는 문자로 변환



### scanf 키보드를 통한 변수값 입력

scanf("%문자형", &변수);  

```c
int a;
scanf("%d", &a);
```

scanf() 에서 변수 앞에 꼭 주소연산자인 & 를 써야함  
입력한 값이 변수에 대입  


double 형을 입력받을때는 %lf 사용

```c
double a;
scanf("%lf", &a);
```

포맷 부분의 %d, %d 수와 , 뒤 변수의 개수가 일치해야 함
```c
double c,d;
scanf("%lf %lf",&c,&d );
printf("c와 d 입력값 %f %f",c,d);
``` 

### % 나머지 연산자  ++ -- 증감연산자

```c
int a= 123,b=456,c,d;
c = a % b;
d = c ++;
print("%d %d",c,d);
```
b 에 먼저 1을 3더하고 a 에 그 값을 할당  
```c 
int a , b=3; 
a = ++b; 
``` 
a 에 b 값을 할당하고 b 에 1을 더함  

```c
a = b++; 
```
 


tip: 모든 정수를 10으로 나누어 나머지 구하면 정수의 일의자리숫자 를 얻을 수 있음


### 주의사항다
다음 코드의 실행 결과값은 7.666666.. 이 아닌 7.000000  
a,b,c 가 모두 정수이므로 나눈 값이 정수로 변환된 다음 double 에 할당되어 소수점만 붙은 것
```c
int a=5,b=7,c=11;
double avg = (a+b+c)/11
``` 
소수점을 얻고 싶다면 나누어준 11 을 float 형으로해서 전체 결과값을 float 형으로 나오게 해야함 

```c
double avg = (a+b+c)/11.0
or
double avg = (a+b+c)/(float)11
or
double avg = (double)(a+b+c)/11
```

### 올림,내림,반올림

```c 
#include<math.h>
``` 

ceil(num) : 올림  
floor(num) : 내림  
round(num) : 반올림


### 비트 연산자
5 : 101
6 : 110

& (and) : 둘다 1일때만 1 
| (or) : 둘중 하나만 1 이어도 1
^ (xor) : 두 개가 서로 다르면 1 같으면 0 
`<<`(쉬프트 연산): 왼쪽으로 비트 이동  
ex)     101 << 1 = 1010, 101 << 2 = 10100


```
5 & 6 : 100 = 4 
5 | 6 : 111 = 7
5 ^ 6 :  11 = 3
``` 
tip : 오른쪽으로 1 비트 이동은 2로 나눈 후 나머지를 버린것 

### 일반적인 연산자
```
>=,==.<=
&&
|| 
```

### 삼항 연산자

조건 ? 참일 때 : 거짓일 때; 

ex) min = a > b ? b : a;

### if 조건문

``` c
if(조건) 한 줄 실행  
else if 한 줄 실행  
else 한 줄 실행  
  
if(조건){  
    두 줄 이상 실행  
} else {  
    두 줄 이상 실행  
}  
```

### for 문

```c
for(1.시작값; 2.조건식; 4.증가감){
    3.실행문
}  
```

for 문이 도는 구조  
```
1 -> 2 -> 3 -> 4 -> 2 -> 3 -> 4 ...
```
1 : 처음 한 번만 시작값 지정  
2 : 조건식 만족하면 실행문 시작
3 : 코드 실행 
4 : 실행문끝나면 증가감 변화

### while 문

```c 
while(조건식){  
    실행문  
}  
``` 

조건식이 참이면 반복  
while(1) : 1은 항상 참이므로 무한반복  
  
break : 반복을 종료  
continue : 반복문 안의 실행문을 실행하지 않고 건너뜀  

### 중첩 for 문

```c
for(1.시작값; 2.조건식; 7.증가 감){  
    for(3.시작값; 4.조건식; 6.증가감;){
        5.실행문  
    }  
}  
```

### 1차원 배열

같은 데이터형 변수를 여러개 묶어놓은것

```
자료형 배열명[크기] = {...}
```
배열명이 a 이고 크기가 6인 배열 생성 (6개 빈 정수형 공간이 생성되고 그 안에 값 들어감) 
배열 안에는 같은 이름(a) 를 가진 변수들이 존재  
```c
int a[4] = {1,2,3,4}; 
```
요소에 접근
```c 
a[0]  //1
a[1] //2
```

요소에 값 할당
```c
int a[1] = 11; // 인덱스 1인 배열 요소에 값 할당
``` 

0 으로 초기화
```c
자료형 배열명[크기] = {0,};
int a[7] = {0,}; 
``` 

### 배열의 크기 sizeof 

배열이 차지하는 전체 공간과 요소의 개수는 sizeof 연산자 이용


```c 
int a[8] = {1,2,3,4,5,6,7,8};
sizeof(a); 
sizeof(a) / sizeof(int); 
```
sizeof(a) : 4 바이트 크기의 요소가 10개이므로 40  
sizeof(a)/sizeof(int) : 배열의 크기를 구할 때는 전체 공간을 요소의 크기로 나눠줌  

### 배열 요소중 최대,최소

최소 
```c
int a[7] = {123,334,545,664,672,886,531};
    int i,min=2147483547;
    for(i=0; i<sizeof(a)/sizeof(int); i++){
        if(a[i]<min) min = a[i];
    }
``` 
최대 
```c
int a[7] = {123,334,545,664,672,886,531};
    int i,max=-2147483548;
    for(i=0; i<sizeof(a)/sizeof(int); i++){
        if(a[i]>max) max = a[i];
    }
```
### 문자열 배열

문자: 알파벳 1개  
문자열: 단어  
  
문자열을 변수에 저장하려면 먼저 문자열 배열을 선언하고 초기화
문자열 출력은 %s  
마지막은 `\0` (null) 값이 들어가므로 배열을 선언할 때 문자열보다 크기를 하나 더 늘려야함  
 
![image](https://user-images.githubusercontent.com/68385605/109392062-63e7ff00-795d-11eb-8677-47dd5cca4286.png)


```c
char a[10] = "language";
```

### 문자열 길이 strlen

```c
include<string.h>
```
문자열 길이
```c
strlen(문자열); 
``` 


### 문자열 배열 반복
```c
for(i=0; i<strlen(a); i++){
    a[i] = '@'
    ...
} 
```


tip: 문자와 `\0` 이 들어갈 공간이 있도록 넉넉하게 잡기

### 입력 값을 문자열에 저장

배열도 포인터처럼 주소를 담고 있으므로, 일반 변수와는 달리 배열 앞에는 &를 붙이지 않음
```c
char a[10]; 
scanf("%s", a);
```
입력할 때 문자열의 개수가 배열의 크기 - 1을 넘지 않도록 하고, 좀 더 길게 입력하고 싶다면 배열의 크기를 크게
  
`scanf` 함수에서 서식 지정자를 `"%[^\n]s"` 와 같이 지정하면 공백까지 포함하여 문자열을 입력받을 수 있음

### 2차원 배열

2차원 배열 선언
```C 
int a[3][4]; 
```
메모리에 다음과 같은 구조가 생김 
![image](https://user-images.githubusercontent.com/68385605/109393051-f76ffe80-7962-11eb-905e-66be31b17e0c.png)

2차원 배열에 접근하기 위해서는 중첩 for 문을 사용
```c
# @ 로 배열 채우기
int main(){
    int a[3][4];
    int i,j,k='@';
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            a[i][j] = k;
        }
    }
    ... 
}
``` 
배열명[행][열]


행 고정
```c
a[i][j]
```
열 고정
```c
a[j][i]
```
`++`,`--` 로 칸 이동

### 2차원 배열 대각선 인덱스 규칙

다음과 같은 중첩 for 문 가정
```c
... 
for(i=0; i<N; i++){
    for(j=0; j<N; j++){
        ... 
    }
}
```
아래그림에서 대각선 인덱스에 위치하는 요소에 값을 집어넣기  

![image](https://user-images.githubusercontent.com/68385605/109399070-dc61b680-7983-11eb-8fe6-052c1e3d139f.png)
  
빨강 : j==i 일때
파랑 : i+j = N-1 일때

```c
... 
for(i=0; i<N; i++){
    for(j=0; j<N; j++){
        if(i==j || i+j==n-1){
            //
            a[i][j] = ... 
        }
    }
}
...
```

### 함수

특정 기능을 가진 블록  

운영체제는 main 함수만 보고 위부터 순차처리  
메인함수가 별도로 정의된 함수를 호출  

```c
반환할 자료형 함수이름(파라미터 자료형 파라미터 변수명){
    ... 
    return ... 
}
```

ex)   

```c
...
double add(int x,int y) {
    int t;
    t =(double)x/y;
    return t;
}
int main(){
    int a =10,b=5;
    double c; 
    c = add(a);
    ...
}
```

main 함수 아래에 함수 정의  
함수가 있다는 정의를 main 위에 해줘야함  
상단에 정의를 하지 않는다면 main 에서 함수를 찾을 수 없으므로 오류 발생  
```c
int abs(int x); // 상단에 정의
int main(){
    int a=1,b;
    b = abs(a)
}
int abs(int x){ // main 아래 정의
    if(x<0) return x*-1;
    else return x;
}