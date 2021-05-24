#include<stdio.h>

int main()
{
	unsigned short i, j;
/*
	i = 0x0000;
	i |= 0x0010;

	j = 0x0008;
	i|= 1 <<j;
*/
	i = 0x00ff;
	i &= 0x0010;
	printf("%d\n", i);

	return 0;
}
