#include<stdio.h>

int main()
{
	char tmp, str[255], *ptr1, *ptr2;
	int n, m;

	printf("Enter a string: ");
	scanf("%s", str);

	ptr1 = str;
	n = 1;

	while (*ptr1 != '\0')
	{
		ptr1++; 	// Termina hasta que encuentre el null
		n++;
	}
	ptr1--;   // retrocede una posicion

	m = 1;
	ptr2 = str;

	while (m <= n/2)
	{
		tmp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = tmp;
		ptr1--;
		ptr2++;
		m++;
	}

	printf("Reverse string is %s\n", str);
	return (0);
}
