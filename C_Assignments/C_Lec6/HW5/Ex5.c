#include <stdio.h>

#define PI 3.14
#define AREA(r) ((PI) * (r * r))


int main()
{
	float r;
	
	printf("Enter the radius: ");
	scanf("%f", &r);
	printf("AREA = %.2f", AREA(r));
	
}