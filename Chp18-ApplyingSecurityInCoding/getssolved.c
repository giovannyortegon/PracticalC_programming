#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include<stdlib.h>


struct users
{
	char name[10];
	int orderid;
};

int main(void)
{
	struct users user1;
	int n;

	// first user
	printf("Enter order number: ");
	scanf("%d", &user1.orderid);
	__fpurge(stdin);
	printf("Enter first user name: ");
	fgets(user1.name, sizeof(user1.name), stdin);
	n = strlen(user1.name) -1;
	if (user1.name[n] == '\n')
		user1.name[n] = '\0';

	printf("Information of first user - Name %s, Order number %d\n",
			user1.name, user1.orderid);

	return (0);
}
