#include<ncurses.h>

int main(void)
{
	initscr();
	refresh();

	getch();
	endwin();
	return(0);
}
