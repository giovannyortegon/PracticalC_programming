#include<stdio.h>

int main()
{
	int i = 10;
	int *j;
//address of i
	j = &i;

	printf("Address of i is %d\n", &i);
	printf("Address of i is %d\n", j);
// Value of i
	printf("Value of i is %d\n", i);
	printf("Value of i is %d\n", *j);

	int **k;
	k = &j;

// Address of j
	printf("Address of j = %d %d\n", &j, k);
// Address of i through k
	printf("Address of i = %d %d %d\n", &i, j, *k);
// Value of i through k
	printf("Address of i = %d %d %d %d\n", i, *(&i), *j, **k);


}
