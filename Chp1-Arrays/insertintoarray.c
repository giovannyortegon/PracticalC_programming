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
	printf("\nEnter position where to insert: ");
	scanf("%d", &k);
	k--; /* The position is always one value higher than the
	subscript, so it is decremented by one */

	for(j = n-1; j >= k; j--)
		p[j+1] = p[j];
	
	printf("\nEnter the value to insert: ");
	scanf("%d", &p[k]);
	printf("\nArray after insertion of elelments: \n");

	for(i = 0; i <= n; i++)
		printf("%d\n", p[i]);
	
}
