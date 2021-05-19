#include<stdio.h>

#define N 10

//void store_zeros(const int a[], int n)  // read-only
//void store_zeros(int a[], int n)
void store_zeros(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		a[i] = 0;
}
int main()
{
	int i;
	int a [] = {11, 34, 82, 7, 64, 98, 47, 18, 79, 20};

	store_zeros(a, N);

	for (i = 0; i < N; i++)
		printf(" %d", a[i]);

	putchar('\n');

	return (0);
}
