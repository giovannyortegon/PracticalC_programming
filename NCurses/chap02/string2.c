#include<ncurses.h>

int main(void)
{
	char first[4];
	char last[4];

	initscr();

	addstr("Enter the first 3 letter of your first name? ");
	refresh();
	getnstr(first, 3);

	addstr("Enter the first 3 letter of your last name? ");
	refresh();
	getnstr(last, 3);

	addstr("Your secret agent name is ");
:x
clear
	addch('!');

	refresh();

	getch();
	endwin();
	return (0);
}
