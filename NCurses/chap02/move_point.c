#include<ncurses.h>

int main(void)
{
	initscr();

	for (int i = 0; i < 100; i++)
	{
		addch('*');
		move(0, i);
		napms(300);
		refresh();
	}

	getch();
	endwin();
	return(0);
}
