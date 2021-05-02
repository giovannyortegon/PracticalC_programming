#include <ncurses.h>
int main(void)
{
	initscr();

	printw("Hello, world!");
	addstr("Goodbye, cruel C programming!");
	addch('a');
	refresh();
	getch();

	endwin();

	return 0;
}
