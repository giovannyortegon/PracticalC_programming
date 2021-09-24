/* stacklinkedlist.c */
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

void push(struct node * NewNode, struct node ** Top);
struct node * pop(struct node **Top);
void print_list(struct node * Nodes);

int main(void)
{
	struct node * newNode, *top, * recNode;
	int n = 0;
	top = NULL;

	while (n != 4)
	{
		printf("\n1. Pushing an element into the stack\n");
		printf("2. Popping out an element from the stack\n");
		printf("3. Print stack\n");
		printf("4. Quit\n");
		printf("Enter your choice 1/2/3/4: ");
		scanf("%d", &n);

		switch(n)
		{
			case 1:
				newNode = (struct node *) malloc(sizeof(struct node));
				printf("Enter the value to push: ");
				scanf("%d", &newNode->data);
				newNode->next = NULL;
				push(newNode, &top);
				printf("Value %d is pushed to stack\n", newNode->data);
				break;
			case 2:
				recNode = pop(&top);
				if (recNode == NULL)
					printf("Stack is empty");
				else
					printf("The value poped id %d\n", recNode->data);
				break;
			case 3:
				recNode = top;
				if (recNode == NULL)
					printf("Stack is empty");
				else
					print_list(recNode);
				break;
			default:
				printf("[!] Opcion no Valida.");
		}
	}

	return (0);
}
void push(struct node * NewNode, struct node ** Top)
{
	NewNode->next = *Top;
	*Top = NewNode;
}
struct node * pop(struct node **Top)
{
	struct node * temp;

	if (* Top == NULL)
		return (NULL);
	else
	{
		temp = *Top;
		(*Top) = (*Top)->next;

		return (temp);
	}
}
void print_list(struct node * Nodes)
{
	printf("\nPrinting Stack: ");
	while (Nodes != NULL)
	{
		printf("%d ", Nodes->data);
		Nodes = Nodes->next;
	}
	printf("\n");
}
