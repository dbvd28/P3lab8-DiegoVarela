#include <string>
#include <curses.h>
using namespace std;
WINDOW *ventana1, *ventana2, *ventana3;
int main()
{

    int MaxY, MaxX;
    initscr();
    getmaxyx(stdscr, MaxY, MaxX);
    start_color();
    init_pair(2, COLOR_WHITE, COLOR_BLUE);
    init_pair(1, COLOR_BLACK, COLOR_CYAN);
    init_pair(3, COLOR_YELLOW, COLOR_BLUE);
    init_pair(4, COLOR_YELLOW, COLOR_CYAN);
    ventana1 = newwin(3, MaxX - 4, 2, 2);
    ventana2 = newwin(MaxY / 1.5, MaxX / 4, MaxY / 6, 2);
    ventana3 = newwin(MaxY / 1.5, MaxX / 1.4, MaxY / 6, MaxX / 3.7);
    wbkgd(stdscr, COLOR_PAIR(2));
    wbkgd(ventana1, COLOR_PAIR(2));
    wbkgd(ventana2, COLOR_PAIR(2));
    wbkgd(ventana3, COLOR_PAIR(2));
    int impx, impy;
    impx = MaxX / 8;
    impy = MaxY / 8;
    attron(COLOR_PAIR(1));
    printw("YaST @ G185");
    for (int i = 11; i < MaxX / 1.16; i++)
    {
        printw(" ");
    }
    move(0, MaxX / 1.16);
    printw("Press F1 for Help");
    attroff(COLOR_PAIR(1));
    refresh();
    box(ventana1, 0, 0);
    wattron(ventana1, COLOR_PAIR(3));
    mvwprintw(ventana1, 1.5, impx * 3.25, "Yast2 Control Center");
    wattroff(ventana1, COLOR_PAIR(3));
    touchwin(ventana1);
    wrefresh(ventana1);
    box(ventana2, 0, 0);
    wattron(ventana2, COLOR_PAIR(4));
    mvwprintw(ventana2, 1, 1, "Software");
    wattroff(ventana2, COLOR_PAIR(4));
    mvwprintw(ventana2, 2, 1, "Hardware");
    mvwprintw(ventana2, 3, 1, "System");
    mvwprintw(ventana2, 4, 1, "Network Devices");
    mvwprintw(ventana2, 5, 1, "Network Services");
    mvwprintw(ventana2, 6, 1, "Security and Users");
    mvwprintw(ventana2, 7, 1, "Misc");
    touchwin(ventana2);
    wrefresh(ventana2);
    box(ventana3, 0, 0);
    wattron(ventana3, COLOR_PAIR(3));
    mvwprintw(ventana3, 1, 1, "Patch Update");
    wattroff(ventana3, COLOR_PAIR(3));
    mvwprintw(ventana3, 2, 1, "Installation into Directory");
    mvwprintw(ventana3, 3, 1, "Online Update");
    mvwprintw(ventana3, 4, 1, "Install and Remove Software");
    mvwprintw(ventana3, 5, 1, "Change surce of Installation");
    mvwprintw(ventana3, 6, 1, "System Update");
    touchwin(ventana3);
    wrefresh(ventana3);
    move(MaxY / 1.10, 0 + 2);
    printw("[");
    attron(COLOR_PAIR(3));
    move(MaxY / 1.10, 0 + 3);
    printw("H");
    attroff(COLOR_PAIR(3));
    move(MaxY / 1.10, 0 + 4);
    printw("elp]");
    move(MaxY / 1.10, MaxX / 1.09);
    printw("[");
     attron(COLOR_PAIR(3));
    move(MaxY / 1.10, MaxX / 1.08);
    printw("Q");
    attroff(COLOR_PAIR(3));
    move(MaxY / 1.10, MaxX / 1.07);
    printw("uit]");
    getch();
    endwin();
    return 0;
}