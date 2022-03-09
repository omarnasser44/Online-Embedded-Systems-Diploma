#include <stdio.h>

int main (void)
{
	char string[1000];
	int i;
	
	printf("Enter a string: ");
	gets(string);
	
	for (i = 0; i < 1000; i++)
	{
		if (string[i] == '\0')
		{
			break;
		}
	}
	printf("Length of string : %d", i);
}