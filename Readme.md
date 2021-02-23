## c언어 학습 

정수형 변수 선언 
int a;
메모리 공간에는 a 라는 이름을 가진 32bit (4byte) 짜리 공간이 생성 

1bit  : 0또는 1 저장
1byte = 8 bit
3bit 로 표현할 수 있는 가짓수 : 2x2x2 = 8 가지 

0~7 까지 표현 가능 (최대 크기:7)
000 - 0
001 - 1
010 - 2
...
110 - 6
111 - 7 

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

2^31 = -2^31 
2^31 +1 = -2^31 +1
... 
-2^31 -1 = 2^31 -1 

### 정수형 변수를 정수형 변수로 나누면 몫이 저장된다 (정수만 저장)

7/2 = 3.5 
3 저장






















