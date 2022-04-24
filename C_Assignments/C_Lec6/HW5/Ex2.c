#include <stdio.h>

struct measure
{
	int feet;
	float inch;
};

int main(void)
{
	int sf = 0;
	float si = 0;
	struct measure data;
	
	printf("Enter information for 1st distance\n");
	printf("Enter feet: ");
	scanf("%d", &data.feet);
	printf("Enter inch: ");
	scanf("%f", &data.inch);
	sf = sf + data.feet;	si = si + data.inch;
	
	printf("\nEnter information for 2nd distance\n");
	printf("Enter feet: ");
	scanf("%d", &data.feet);
	printf("Enter inch: ");
	scanf("%f", &data.inch);
	sf = sf + data.feet;	si = si + data.inch;
	if (si >= 12){sf++; si -= 12;};
	
	printf("\n Sum of distances= %d'-%.1f", sf, si);
}