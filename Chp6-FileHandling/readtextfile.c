#include<stdio.h>
#include<stdlib.h>

#define BUFFSIZE 255

void main(int argc, char *argv[])
{
	FILE *fp;
	char buffer[BUFFSIZE];

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("%s file does not exist\n");
		exit(1);
	}
	int i = 0;

	while (!feof(fp))
	{	
		i++;
		fgets(buffer, BUFFSIZE, fp);
//		puts(buffer);
		printf("%d %s", i, buffer);
	}
	fclose(fp);
}
