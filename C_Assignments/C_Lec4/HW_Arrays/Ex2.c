#include <stdio.h>

int main(void)
{
	float a[20], sum = 0;
	int n, i;
	printf("Enter the numbers of data: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d. Enter a number: ", i + 1);
		scanf("%f", &a[i]);
		sum += a[i];
	}
	printf("Average = %.2f", sum / n);
}