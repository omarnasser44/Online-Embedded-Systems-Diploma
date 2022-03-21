#include <stdio.h>

void reverse(char *s)
{
	
	if (*s != '\0')
	{
		reverse(s+1);
	}
	printf("%c", *s);
}

int main(void)
{
	char s[100];
	printf("Enter a sentence: ");
	gets(s);
	reverse(s);
}