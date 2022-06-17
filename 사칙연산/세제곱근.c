#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[10][3];
	int num,tmp,i,j,k;
	int input;
	scanf("%d",&input);
	for (i = 0; i < 10; i++) { // 수
		tmp = i + 1;
		for (j = 0; j < 3; j++) { // 제곱
			num = i + 1;
			for (k = 0; k < j; k++) {
				num = num * tmp;
			}
			arr[i][j] = num;
		}
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 3; j++) {
			if (arr[i][j] == input) {
				printf("%d", arr[i][0]);
				break;
			}
		}
	}
}