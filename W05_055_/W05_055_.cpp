#include <stdio.h>
int main()
{
	int n;

	// *
	// **
	// ***
	// ****
	// *****
	printf("n을 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}


	int m;

	// *
	// ***
	// *****
	// *******
	// *********
	// i: 1 ~ 5
	// j: 1 ~ 2*i-1
	printf("m을 입력 : ");
	scanf_s("%d", &m);

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
}
