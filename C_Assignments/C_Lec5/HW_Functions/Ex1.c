#include <stdio.h>

void prime(int i)
{
	int j, flag = 0;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
			flag++;
	}
	if (flag == 0)
		printf("%d ", i);
}


int main(void)
{
	int start, end, i;
	
	printf("Enter two numbers (intervals): ");
	scanf("%d %d", &start, &end);
	printf("Prime numbers between %d and %d are: ", start, end);
	for (i = start; i <= end; i++)
	{
		prime(i);
	}
	
}