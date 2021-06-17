#include<stdio.h>

#define NUM_ROWS 20
#define NUM_COLS 20

int main(void)
{
	int a[NUM_ROWS][NUM_COLS];
	int *ptr ,i;

/*	for (ptr = &a[0][0]; ptr < &a[NUM_ROWS-1][NUM_COLS-1]; ptr++)
		*ptr = 0;*/

	for (i = 0, ptr = a[i]; ptr < a[i] + NUM_COLS-1; ptr++)
		*ptr = 0;

	for (ptr = &a[0][0]; ptr <= &a[NUM_ROWS -1][NUM_COLS-1]; ptr++)
		printf("%d ", *ptr);

	return (0);
}
