#include <stdio.h>

int main(void)
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	
	if (c >= 65 && c <= 122)
	{
		printf("%c is an alphabet\n", c);
	}
	else
	{
		printf("%c is not an alphabet\n", c);
	}
}