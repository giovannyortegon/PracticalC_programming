#include<stdio.h>
#include <stdio_ext.h>


struct users
{
	char name[10];
	int orderid;
};

int main(void)
{
	struct users user1, user2;
	// first user
	printf("Enter order number: ");
	scanf("%d", &user1.orderid);
	__fpurge(stdin);
	printf("Enter first user name: ");
	gets(user1.name);
	// secind user
	printf("Enter Order number: ");
	scanf("%d", &user2.orderid);
	__fpurge(stdin);
	printf("Enter second user name: ");
	gets(user2.name);

	printf("Information of first user - Name %s, Order number %d\n",
			user1.name, user1.orderid);

	printf("Information of second user - Name %s, Order number %d\n",
			user2.name, user2.orderid);

	return (0);
}
