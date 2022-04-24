#include <stdio.h>

typedef struct complex
{
	float real;
	float imaginary;
}complex;
complex s(complex, complex);

int main(void)
{
	complex n1,n2,sum;
	
	printf("For first complex number\n");
	printf("Enter real and imaginary respctively: ");
	scanf("%f%f", &n1.real, &n1.imaginary);
	
	
	printf("For second complex number\n");
	printf("Enter real and imaginary respctively: ");
	scanf("%f%f", &n2.real, &n2.imaginary);
	
	sum = s(n1, n2);
	
	printf("Sum = %.1f + %.1fi", sum.real, sum.imaginary);
}

complex s(complex n1, complex n2)
{
	complex sum;
	sum.real = n1.real + n2.real;
	sum.imaginary = n1.imaginary + n2.imaginary;
	
	return (sum);
}