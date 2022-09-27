#include <stdio.h>
int main()
{	
	int n;
	int sum = 0;
	int oddsum = 0;
	int evensum = 0;

	printf("자연수 입력: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += i;
		if (i % 2 == 0)
			evensum += i;
		else
			oddsum += i;
	}
	printf("합: %d\n홀수의 합: %d\n짝수의 합: %d\n", sum, oddsum, evensum);
}