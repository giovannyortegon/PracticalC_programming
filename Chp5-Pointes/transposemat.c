#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r, c, i, j, *ptr, m;

	printf("Enter rows and columns of matrix: ");
	scanf("%d %d", &r, &c);

	ptr = (int *)malloc(r * c * sizeof(int));
	printf("\nEnter elements of matrix:\n");

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &m);
			*(ptr + i * c + j) = m;
		}
	}

	printf("\nMatrix using pointer is: \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d\t", *(ptr + i * c + j));
		}
		printf("\n");
	}
	printf("\nTranspose of Matrix: \n");
	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			printf("%d\t", *(ptr + i + j * c));
		}
		printf("\n");
	}
	return (0);
}
