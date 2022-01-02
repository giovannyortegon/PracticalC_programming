#include<stdio.h>

int main() {
	int i, n, arr[20], large, second_large;

	printf("\nEnter the number of elements in the array: ");
	scanf("%d", &n);

	printf("\nEnter the elements\n");

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	large = arr[0];

	for (i = 1; i < n; i++) {
		if (arr[i] > large)
			large = arr[i];
	}

	second_large = arr[1];

	for (i = 0; i < n; i++) {
		if (arr[i] != large) {
			if (arr[i] > second_large)
				second_large = arr[i];
		}
	}

	printf("\nThe numbers you entered are: ");
	for (i = 0; i < n; i++)
		printf("\t%d", arr[i]);

	printf("\nThe largest of these numbers is: %d", large);
	printf("\nThe second largest of these numbers is: %d", second_large);

	return (0);
}
