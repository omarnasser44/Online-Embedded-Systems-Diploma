#include <stdio.h>

int main(void)
{
	float a, b, c;
	printf("Enter three numbers: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a > b && a > c)
	{
		printf("Largest number = %f", a);
	}
	else if (b > a && b > c)
	{
		printf("Largest number = %f", b);
	}
	else
	{
		printf("Largest number = %f", c);
	}
}