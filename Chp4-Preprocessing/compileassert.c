#include<stdio.h>
#include<assert.h>

struct customers
{
	int orderid;
	char customer_name[20];
//	float amount;
};

static_assert(sizeof(struct customers) == 28, "The structure is consuming unexpected number of bytes");

int main()
{
	printf("size of (int) %d\n", sizeof(int));
	printf("size of (float) %d\n", sizeof(float));
	printf("size of (struct customers) %d\n", sizeof(struct customers));

	return (0);
}
