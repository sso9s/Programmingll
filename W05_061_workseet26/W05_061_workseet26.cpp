#include <stdio.h>
int main()
{
	int n;

	printf("자연수 입력: ");
	scanf_s("%d", &n);

	for (int i = n; i > 0; i--) {
		for (int j = i; j > 0; j--)
			printf("%d ", j);
		printf("\n");
	}

	int m;
	int mul = 1 ;

	printf("m!를 계산하시오: ");
	scanf_s("%d", &m);

	for (int i = 1; i <= n; i++); {
		mul *= i;
		printf("%d", i);
	}
}