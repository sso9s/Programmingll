#include <stdio.h>

// 구구단(5단)
/*
	5x1=5
	5x2=10
	5x3=15
	5x4=20
	..
	5x9=45
	두번째 숫자가 1~9까지 변화(반복문 1개 필요)
	*/

int main()
{
	int n;

	printf("n을 입력: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= 9; i++)
		printf("%d x %d = %d\n", n, i, n*i);

	// 

	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++)
			printf("%d x %d = %d\t", j, i, j*i);
		printf("\n");
	}

	int m;

	printf("m을 입력: ");
	scanf_s("%d", &m);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("%d", j);
	
}