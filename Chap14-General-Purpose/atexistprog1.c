#include<stdio.h>
#include<stdlib.h>

char *str;
void freeup();

int main()
{
	int retvalues;
	retvalues = atexit(freeup);

	if (retvalues != 0)
	{
		printf("Registration of function for atexit() function failed\n");
		exit(1);
	}

	str = malloc(20 * sizeof(char));

	if (str == NULL)
	{
		printf("Some error occurred in allocating memory\n");
		exit(1);
	}

	printf("Enter a string ");
	scanf("%s", str);
	printf("The string entered is %s\n", str);
}
void freeup()
{
	free(str);
	printf("Allocated memory is freed\n");
}
