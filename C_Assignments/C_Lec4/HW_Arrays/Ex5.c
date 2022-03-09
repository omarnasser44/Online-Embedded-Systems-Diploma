#include <stdio.h>

int main(void)
{
	int a[20], i, element, n;
	printf("Enter no of elements: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter the element to be searched: ");
	scanf("%d", &element);
	
	for (i = 0; i < n; i++)
	{
		if (a[i] == element)
		{
			printf("Number found at the location = %d", i + 1);
			break;
		}
		
	}
	if (i == n)
	{
		printf("Not found");
		
	}
}