/*
 * Program to enter n number of digits. Form a number using these digit.
 */

#include<stdio.h>
#include<math.h>

int main() {
	int number = 0, digit[10], numofdigits, i;

	printf("\nEnter the number of digits: ");
	scanf("%d", &numofdigits);

	for (i = 0; i < numofdigits; i++) {
		printf("\nEnter the digit at position %d: ", i + 1);
		scanf("%d", &digit[i]);
	}

	i = 0;

	while (i < numofdigits) {
		number = number + digit[i] * pow(10, i);
		i++;
	}

	printf("\nThe number is: %d", number);

	return (0);
}
