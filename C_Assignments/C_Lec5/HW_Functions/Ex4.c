#include <stdio.h>
int s = 1;
int power(int n, int p)
{
	
	if(p != 0)
	{
		p--;
		power(n, p);
		
		s *= n;
		
	}
	return s;
}



int main(void)
{
	int n,p;
	printf("Enter base number: ");
	scanf("%d", &n);
	
	printf("Enter power number (positive integer): ");
	scanf("%d", &p);
	printf("%d ^ %d = %d", n, p, power(n,p));
	
}