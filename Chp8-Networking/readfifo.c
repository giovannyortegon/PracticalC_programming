#include<fcntl.h>
#include <sys/types.h>
#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>

#define BUFFESIZE 255

int main()
{
	int fr;
	char str[BUFFESIZE];
	fr = open("FIFOPipe", O_RDONLY);
	read(fr, str, BUFFESIZE);

	printf("Read from the FIFO Pipe: %s\n", str);
	close(fr);
	return (0);
}
