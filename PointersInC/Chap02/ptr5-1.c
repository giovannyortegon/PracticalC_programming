#include<stdio.h>

int main()
{
	int x = 10; /* value 10 stored at some memory location */
	int *ptr = &x; /* now pointer variable "ptr" is pointing to the memory location x = 10 */
	printf("Address of variable \"x\" = %p\n", &x); /* prints the address of memory location x */
	printf("Address of variable \"x\" = %p\n", ptr); /*prints the address of memory location x with the
help of "ptr" variable, whose value is memory location "x" */
	printf("Value of variable \"x\" = %d\n", x); /* prints the value of variable x */
	printf("Value stored at address ptr = %p is %d\n", ptr, *ptr); /* prints the value at memory
location of x with the help of value at operator (*ptr)
*/
	return (0);
}
