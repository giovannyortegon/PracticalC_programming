#include<stdio.h>

typedef unsigned char BYTE;
typedef unsigned short WORD;

union {
	struct {
		WORD ax, bx, cx, dx;
	} word;
	struct {
		BYTE al, ah, bl, bh, cl, ch, dl, dh;
	} byte;
} regs;

int main(void)
{
	printf("%d byte\n", sizeof(BYTE));
	printf("%d bytes\n", sizeof(WORD));

	regs.byte.ah = 0x12;
	regs.byte.al = 0x34;

	printf("ah: 0x%hx\n", regs.byte.ah);
	printf("al: 0x%hx\n", regs.byte.al);

	printf("AX: %hx\n", regs.word.ax);

	return (0);
}
