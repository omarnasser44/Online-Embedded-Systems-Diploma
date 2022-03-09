#include <stdio.h>

int main(void)
{
	int a[20], i, num, inserted_element, location;
	
	printf("Enter no of elements: ");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter the element to be inserted: ");
	scanf("%d", &inserted_element);
	printf("location: ");
	scanf("%d", &location);
	
	for (i = num; i >= 0 + 1; i--)
	{
		if (i < location - 1)
		{
			continue;
		}
		else if (i > location - 1)
		{
			a[i] = a[i - 1];
		}
		else
			a[i] = inserted_element;
	}
	for (i = 0; i <= num; i++)
	{
		printf("%d  ", a[i]);
	}
}