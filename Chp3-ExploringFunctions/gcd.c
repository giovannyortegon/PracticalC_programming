#include<stdio.h>

int gcd(int p, int q);

void main()
{
	int x, y, g;

	printf("Enter two number: ");
	scanf("%d %d", &x, &y);

	g = gcd(x, y);
	printf("Greatest Common Divisor of %d and %d is %d\n", x, y, g);
}
int gcd(int a, int b)
{
	int m;

	m = a % b;

	if (m == 0)
		return (b);
	else
		gcd(b, m);
}
