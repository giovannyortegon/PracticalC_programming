#include<stdio.h>

#define N 10


int main()
{
	int *p, sum = 0;
	// Compound literal
	int *q;
	int b[] = {11, 34, 82, 7, 64, 98, 47, 18, 79, 20};

	q = &b[0];

	*q++ = 4;

	printf("%d\n", (*q)++);
	printf("%d\n\n", *q);
	for (q = &b[0]; q < &b[N]; q++)
		printf("%d\n", *q);

	int a[] = {11, 34, 82, 7, 64, 98, 47, 18, 79, 20};

	p = &a[0];
	while(p < &a[N])
		sum += *p++;

	printf("\nSum: %d\n", sum);

	return (0);
}
