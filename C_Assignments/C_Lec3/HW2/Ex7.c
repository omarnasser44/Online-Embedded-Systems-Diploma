#include <stdio.h>

int main(void)
{
	int n, i;
	int sum = 1;
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	if (n < 0)
	{
		printf("Error!!! Factorial of a negative number does not exist\n");
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			sum *= i;
		}
		printf("Factorial = %d\n", sum);
	}
	
}