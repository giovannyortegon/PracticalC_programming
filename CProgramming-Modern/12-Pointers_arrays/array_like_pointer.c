#include<stdio.h>

#define N 10


int main()
{
	int i, *p;
	int a[] = {11, 34, 82, 7, 64, 98, 47, 18, 79, 20};

	*a = 7;
	*(a + 1) = 12;

/*	i = 0;
	while (i < 10)
	{
		printf("%d\n", *(a + i));
		i++;
	}*/

	for (p = a; p < a + N; p++)
		printf("%d\n", *p);

	return (0);
}
