#include <stdio.h>
#include <string.h>
int main(void)
{
	char string[100], string_reversed[100];
	int i;
	printf("Enter the string: ");
	gets(string);
	int n = strlen(string) - 1;
	for (i = 0; i <= n; i++)
	{
		string_reversed[i] = string[n - i];
		printf("%c", string_reversed[i]);
	}
}