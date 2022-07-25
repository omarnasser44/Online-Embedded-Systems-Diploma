#include <stdio.h>


int main(void)
{
	
	char alph[26];
	char* ptr = alph;
	int x = 0;
	
	printf("The Alphabets are: \n");
	for (x = 0; x < 26; x++)
	{
		*ptr = 'A' + x;
		ptr++;
	}
	ptr = alph;
	for (x = 0; x < 26; x++)
	{
		printf("%c ", *ptr);
		ptr++;
	}
	return 0;
}