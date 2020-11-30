#include <stdio.h>
#define MAX 100

void main()
{
	int p[MAX], n, i, k, j;
	
	printf("Enter length of arrays: ");
	scanf("%d", &n);
	
	printf("Enter %d element of arrays\n", n);

	for(i = 0; i <= n-1; i++)
		scanf("%d", &p[i]);

	printf("\nThe array is: \n");
	for(i = 0; i <= n-1; i++)
		printf("%d\n", p[i]);
	printf("\nEnter position where to delete: ");
	scanf("%d", &k);
	k--; /* The position is always one value higher
	than the subscript, so it is decremented by one */

	for(j = k; j <= n - 2; j++)
		p[j] = p[j+1];
	
	p[n - 1] = 0;
	printf("\nArray after insertion of elelments: \n");

	for(i = 0; i <= n - 2; i++)
		printf("%d\n", p[i]);
	
}
