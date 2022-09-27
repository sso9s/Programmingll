#include <stdio.h>
int main()
{
	int m;
	int fact = 1; // sum = 0; 

	printf("m!를 계산하시오: ");
	scanf_s("%d", &m);

	for (int i = 1; i <= m; i++); {
		fact *= i;
		printf("%d! = %d\n", n, fact);
	}
}