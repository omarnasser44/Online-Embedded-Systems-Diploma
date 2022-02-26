#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	int i, sum = 0;
	
	for (i = 0; i <= n; i++)
	{
		sum += i;
	}
	printf("Sum = %d", sum);
}