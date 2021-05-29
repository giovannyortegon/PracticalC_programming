#include<ncurses.h>

int main(void)
{
    initscr();

    attron(A_BOLD);
    addstr("Twinkle, twinkle little star\n");
    addstr("How I wonder what you are.\n");
    attroff(A_BOLD);

    attron(A_BLINK);
    addstr("Up above the world so high,\n");
    addstr("Like a diamond in the sky.\n");
    attrset(A_NORMAL);

    addstr("Twinkle, twinkle little star\n");
    addstr("How I wonder what you are.\n");

    refresh();
    getch();
    endwin();

    return(0);
}
