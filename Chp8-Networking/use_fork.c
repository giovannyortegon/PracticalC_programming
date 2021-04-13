#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

#define max 50

int main()
{
	char wstr[max];
	char rstr[max];
	int i, x = 1;
	pid_t proc;

	proc = fork();

	if (proc >= 0)
	{
		if (proc == 0)
		{
			printf("Child has x = %d.\n", ++x);
			exit(0);
		}
		else
		{
			printf("Parent has x = %d.\n", --x);
			exit(0);
		}
	}
	else
	{
		perror("Fork()");
		exit(0);
	}

	return (0);
}
