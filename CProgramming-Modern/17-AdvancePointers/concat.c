#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * concat(const char * s1, const char * s2);

int main(void)
{
	char * str;

	str = concat("abc", "def");

	printf("%s\n", str);

	return (0);
}

char * concat(const char * s1, const char * s2)
{
	char *result;

	result = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (result == NULL)
	{
		printf("Error: malloc failed in concat\n");
		exit(EXIT_FAILURE);
	}

	strcpy(result, s1);
	strcpy(result, s2);

	return (result);
}
