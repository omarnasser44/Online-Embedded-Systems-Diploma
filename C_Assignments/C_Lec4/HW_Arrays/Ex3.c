#include <stdio.h>

int main(void)
{
	int r,c, elements[20][20], i, j, T[20][20];
	printf("Enter rows and columns of the matrix: ");
	scanf("%d%d", &r, &c);
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter a%d%d: ", i + 1, j + 1);
			scanf("%d", &elements[i][j]);
		}
	}
	printf("Entered Matrix: \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d	",elements[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of the matrix: \n");
	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			T[i][j] = elements[j][i];
			printf("%d	", T[i][j]);
		}
		printf("\n");
	}
	
}