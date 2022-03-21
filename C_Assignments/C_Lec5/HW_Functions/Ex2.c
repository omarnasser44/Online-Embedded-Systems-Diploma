#include <stdio.h>
int r = 1;

int factorial(int n)
{
	if (n > 1)
	{
		r *=n;
		n--;
		factorial(n);
	}
}

int main(void)
{
	int n;
	
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	printf("Factorial of %d = %d\n", n, factorial(n));
}