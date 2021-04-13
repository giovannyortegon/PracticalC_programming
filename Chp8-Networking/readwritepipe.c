#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

#define max 50

int main()
{
	char str[max];
	int pp[2], ret;

	ret = pipe(pp);

	printf("%d\n", ret);

	if (ret < 0)
		exit(1);

	printf("Enter first message to write into pipe: ");
	gets(str);
	write(pp[1], str, max);

	printf("%d\n", pp[1]);

	printf("Enter second message to write into pipe: ");
	gets(str);
	write(pp[1], str, max);

	printf("%d\n", pp[0]);

	printf("Message read from the pipe are as follow:\n");
	read(pp[0], str, max);
	printf("%s\n", str);
	read(pp[0], str, max);
	printf("%s\n", str);

	return (0);
}
