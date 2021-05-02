#include<ncurses.h>

#define UNI 4.5

int main(void)
{
	int pieces;

	initscr();

	addstr("SUSHI BAR");
	move(2, 0);
	printw("We have Uni today for $%.2f.\n", UNI);
	addstr("How many pieces would you like? ");
	refresh();

	scanw("%d", &pieces);
	printw("You want %d pieces?\n", pieces);
	printw("That will be $%.2f!", UNI*(float) pieces);

	refresh();
	getch();
	endwin();
	return (0);
}
