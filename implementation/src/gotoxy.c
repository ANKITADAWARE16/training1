#include "fun.h"
#include <stdlib.h>
#include <conio.h>
#include <windows.h> ///for windows related functions (not important)
#include <string.h>  ///string operations
/** List of Global Variable */
COORD coord = {0,0}; /// top-left corner of window

/**
    function : gotoxy
    @param input: x and y coordinates
    @param output: moves the cursor in specified position of console
*/
void gotoxy(int x,int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
