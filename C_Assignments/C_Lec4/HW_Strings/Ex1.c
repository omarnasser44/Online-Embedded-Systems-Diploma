#include <stdio.h>

int main(void)
{
	char string[1000], element;
	int i, counter = 0;
	printf("Enter a string: ");
	gets(string);
	
	printf("Enter a charcter to find frequency: ");
	scanf("%c", &element);
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == element)
			counter++;
	}
	printf("frequency of %c is %d", element, counter);
}