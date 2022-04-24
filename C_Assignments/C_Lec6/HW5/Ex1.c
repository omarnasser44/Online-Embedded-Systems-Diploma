#include <stdio.h>


struct student
{
	char name[20];
	int roll;
	float marks;
};

int main(void)
{
	struct student data;
	
	printf("Enter information of students\n\n");
	printf("Enter name: ");
	scanf("%s", &data.name);
	printf("Enter Roll number: ");
	scanf("%d", &data.roll);
	printf("Enter marks: ");
	scanf("%f", &data.marks);
	
	printf("\nDiplaying Information\n\n");
	printf("Name: %s\n", data.name);
	printf("Roll: %d\n", data.roll);
	printf("Marks: %.2f\n", data.marks);
	
	return 0;
}