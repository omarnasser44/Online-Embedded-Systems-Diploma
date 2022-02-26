#include <stdio.h>

int main(void)
{
	float a,b;
	char c;
	
	printf("Enter operator either +, -, * or /: ");
	scanf("%c", &c);
	printf("Enter two operands: ");
	scanf("%f %f", &a ,&b);
	
	switch(c)
	{
		case '+':
		{
			printf("%f + %f = %f", a, b, a + b);
			break;
		}
		case '-':
		{
			printf("%f - %f = %f", a, b, a - b);
			break;
		}
		case '*':
		{
			printf("%f * %f = %f", a, b, a * b);
			break;
		}
		case '/':
		{
			printf("%f / %f = %f", a, b, a / b);
			break;
		}
	}
}