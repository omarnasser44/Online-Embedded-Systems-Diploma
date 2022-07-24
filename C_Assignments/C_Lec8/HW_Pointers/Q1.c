#include <stdio.h>



int main(void)
{
	int m;
	int* ab;
	
	m = 29;
	printf("Adress of m : %p\n", &m);
	printf("Value of m : %d\n\n\n", m);
	
	printf("Now ab is assigned with the address of m.\n");
	ab = &m;
	printf("Address of pointer ab : %p\n", ab);
	printf("content of pointer ab: %d\n\n\n", *ab);
	
	printf("The value of m assigned to 34 now.\n");
	m = 34;
	printf("Address of pointer ab: %p\n", ab);
	printf("Content of pointer ab: %d\n\n\n", *ab);
	
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	*ab = 7;
	printf("Adress of m : %p\n", &m);
	printf("Value of m : %d\n\n\n", m);
	
	return 0;
}