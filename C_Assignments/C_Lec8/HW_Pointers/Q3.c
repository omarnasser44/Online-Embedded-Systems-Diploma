#include <stdio.h>
#include <string.h>

int main(void)
{
	char st[50];
	printf("Input a string: ");
	gets(st);
	
	int l = strlen(st);
	int x = 0;
	char *ptr;
	ptr = st + l-1;
	
	printf("Reverse of the string is : ");
	for (x = 0; x <= l; x++)
	{
		printf("%c", *ptr);
		ptr--;
	}
	return 0;
	
}