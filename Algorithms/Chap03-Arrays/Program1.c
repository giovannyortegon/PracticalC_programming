#include<stdio.h>


int main() {
	int i, n, arr[20];

	printf("\nEnter the number of elements in array in the array: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}

	printf("\nThe array elements are: ");

	for (i = 0; i < n; i++) {
		printf("\t%d ",arr[i]);
	}

	return (0);
}
