/* bubblesort.c */
#include<stdio.h>

#define max 20

void print_arr(int arr[], int);

int main(void)
{
    int arr[max], temp, len, i, j;

    printf("How many values are there? ");
    scanf("%d", &len);

    printf("Enter %d values to sort\n", len);
    for (i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    for (i = len -2; i >=1; i--)
    {
        for (j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        print_arr(arr, len);
    }

    printf("\nThe sorted array is;\n");
    print_arr(arr, len);

    return (0);
}
void print_arr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    putchar('\n');
}
