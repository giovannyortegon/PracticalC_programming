#include<stdio.h>
#include<stdlib.h>

char *str;
void freeup1();
void freeup2();

int main()
{
	int retvalues;

	retvalues = atexit(freeup1);
	if (retvalues != 0)
	{
		printf("Registration of function freeup1() for atexit()"
				" function failed\n");
		exit(1);
	}

	retvalues = atexit(freeup2);
	if (retvalues != 0)
	{
		printf("Registration of function freeup2() for atexit() "
				" function failed\n");
		exit(1);
	}

	str = malloc(20 * sizeof(char));
	if (str == NULL)
	{
		printf("Some error occurred in allocated memory\n");
		exit(1);
	}

	printf("Enter a string: ");
	scanf("%s", str);
	printf("The string entered is %s\n", str);

	return (0);

}
void freeup1()
{
	free(str);
	printf("Allocated memory is freed\n");
}
void freeup2()
{
	printf("The size of dynamic memory can be increased and decreased\n");
}
