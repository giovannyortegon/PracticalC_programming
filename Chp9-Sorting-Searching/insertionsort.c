#include<stdio.h>

#define max 20

void print_arr(int arr[], int len);

int main(void)
{
	int arr[max], i, j, temp, len;

	printf("How many numbers are there? ");
	scanf("%d", &len);

	printf("Enter %d values to sort\n", len);

	for (i = 0; i < len; i++)
		scanf("%d", &arr[i]);

	for (i = 1; i < len; i++)
	{
		for (j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
		print_arr(arr, len);
		putchar('\n');
	}

	printf("\nThe ascending order of the values entered is:\n");

	print_arr(arr, len);

	putchar('\n');
	return (0);
}
void print_arr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
}
