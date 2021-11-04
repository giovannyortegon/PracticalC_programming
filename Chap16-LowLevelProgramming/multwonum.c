#include<stdio.h>
#include<stdint.h>

int main(int argc, char * argv[])
{
	int32_t var1 = 10, var2 = 20, multi = 0;

	asm volatile ("imull %%ebx, %%eax;"
		:"=a" (multi)
		:"a" (var1), "b" (var2)
	);

	printf("Multiplicacion: = %d\n", multi);

	return (0);
}
