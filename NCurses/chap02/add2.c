#include<ncurses.h>

int main(void)
{
	char text1[] = "Oh give me a clone!\n";
	char text2[] = "Yes a clone of my own!";

	initscr();

	addstr(text1);
	addstr(text2);
	move(3, 1);
	addstr("With the Y chromosome changed to the X.");

	refresh();

	getch();
	endwin();

	return (0);
}
