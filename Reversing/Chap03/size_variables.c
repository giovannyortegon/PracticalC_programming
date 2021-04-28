#include<stdio.h>

signed char		gvar1 = 0x11;
unsigned char	gvar2 = 0x22;
short			gvar3 = 0x33;
unsigned short	gvar4 = 0x44;
int				gvar5 = 0x55;
unsigned int	gvar6 = 0x66;
long			gvar7 = 0x77;
unsigned long	gvar8 = 0x88;
long long		gvar9 = 0x99;

int main(int argc, char *argv[])
{
	signed char		lvar1 = 0x11;
	unsigned char	lvar2 = 0x22;
	short			lvar3 = 0x33;
	unsigned short	lvar4 = 0x44;
	int				lvar5 = 0x55;
	unsigned int	lvar6 = 0x66;
	long			lvar7 = 0x77;
	unsigned long	lvar8 = 0x88;
	long long		lvar9 = 0x99;

	printf("signed char %d = %u\n", sizeof(lvar1), lvar1);
	printf("unsigned char %d = %u\n", sizeof(lvar2), lvar2);
	printf("short %d = %u\n", sizeof(lvar3), lvar3);
	printf("unsigned short %d = %u\n", sizeof(lvar4), lvar4);
	printf("int %d = %d\n", sizeof(lvar5), lvar5);
	printf("unsigned int %d = %u\n", sizeof(lvar6), lvar6);
	printf("long %d = %ld\n", sizeof(lvar7), lvar7);
	printf("unsigned long %d = %ld\n", sizeof(lvar8), lvar8);
	printf("long long %d = %ld\n", sizeof(lvar9), lvar9);

	return (0);
}
