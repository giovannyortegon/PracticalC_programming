#include<ncurses.h>

int main(void)
{
	char text[] = "Greetings from NCurses!";
	char *t;

	initscr();		/* initialize NCUrses */
	t = text;		/* initialize the pointers */

	while (*t)		/* loop through the whole string. */
	{
		addch(*t);	/* put one char to curscr */
		t++;		/* increment pointer */
		refresh();	/* update the screen */
		napms(200);	/* delayt a bit to see the display */
	}

	getch();		/* wait here */

	endwin();		/* clean up NCurses */

	return (0);

}
