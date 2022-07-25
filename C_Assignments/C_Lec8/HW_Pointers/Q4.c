#include <stdio.h>


int main(void)
{
	int arr[15], n;
	int *ptr, i;
	
	printf("Input the number of elements to store in the array (max 15) : ");
	scanf("%d", &n);
	
	printf("Input 5 number of elements in the array : \n");
	
	for(i = 0; i < n; i++)
	{
		printf("element - %d : ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("The elements of array in reverse order are : \n");
	ptr = &arr[n-1];
	for(i = n; i > 0; i--)
	{
		
		printf("element - %d : %d\n", i, *ptr);
		ptr--;
	}
	return 0;
}