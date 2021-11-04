#include<stdio.h>

void main()
{
	int i, tobits;
	unsigned mask, num;

	printf("Enter decimal value: ");
	scanf("%d", &num);

	tobits = 32;
	mask = 1 <<(tobits -1);

	for (i = 0; i < tobits; i++)
	{
		if ((num & mask) == 0)
			printf("0");
		else
			printf("1");

		mask >>= 1;
	}
}
