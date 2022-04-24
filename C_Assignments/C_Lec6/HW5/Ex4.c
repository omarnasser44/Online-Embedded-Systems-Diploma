#include <stdio.h>


struct student
{
	char name[20];
	int roll;
	float marks;
};

int main(void)
{
	struct student data[10];
	int i;
	printf("Enter information of students\n\n");
	for (i = 0; i < 10; i++)
	{
		data[i].roll = i + 1;
		printf("For Roll number %d\n", data[i].roll);
		printf("Enter name: ");
		scanf("%s", &data[i].name);
		
		printf("Enter marks: ");
		scanf("%f", &data[i].marks);
	}
	
	printf("\nDiplaying Information\n\n");
	
	for(i = 0; i < 10; i++)
	{
		printf("Name: %s\n", data[i].name);
		printf("Roll: %d\n", data[i].roll);
		printf("Marks: %.2f\n\n", data[i].marks);
	}
	return 0;
}