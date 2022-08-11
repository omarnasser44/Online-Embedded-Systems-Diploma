#include <stdio.h>

struct emp{
	char *emp_name;
	int emp_id;
};

int main()
{
	struct emp emp1 = {"Alex", 36};
	
	struct emp (*arr[3]);
	arr[0] = &emp1;
	struct emp (*((*ptr)[3])) = &arr;
	printf("Employee name: %s\n", (**(*ptr+0)).emp_name);
	
	printf("Employee id: %d", (**(*ptr+0)).emp_id);

	
}