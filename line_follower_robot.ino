
#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main()
{
    int i, j;

    clrscr();

    for(i = 10; i <= 60; i = i + 2)
    {
        clrscr();

        textcolor(YELLOW);
        gotoxy(28, 2);
        cprintf("LINE FOLLOWING ROBOT");

        /* START AND END */
        textcolor(GREEN);
        gotoxy(10, 5);
        cprintf("START");

        gotoxy(65, 5);
        cprintf("END");

        textcolor(GREEN);

        for(j = 7; j <= 22; j++)
        {
            gotoxy(8, j);
            cprintf("|");

            gotoxy(72, j);
            cprintf("|");
        }

        textcolor(WHITE);

        for(j = 9; j < i; j++)
        {
            gotoxy(j, 13);
            cprintf("#");
        }
        for(j = i + 11; j <= 71; j++)
        {
            gotoxy(j, 13);
            cprintf("#");
        }

        textcolor(CYAN);

        gotoxy(i + 2, 11);
        cprintf(".------.");

        gotoxy(i, 12);
        cprintf("O|      |O");

        gotoxy(i + 1, 13);
        cprintf("| ROBOT |");

        gotoxy(i, 14);
        cprintf("O|______|O");

        textcolor(YELLOW);
        gotoxy(10, 24);
        cprintf("ROBOT MOVING FROM START TO END...");

        delay(200);
    }

    clrscr();

    textcolor(GREEN);
    gotoxy(28, 10);
    cprintf("ROBOT REACHED THE END!");

    textcolor(YELLOW);
    gotoxy(29, 12);
    cprintf("MISSION COMPLETED!");

    getch();
}


