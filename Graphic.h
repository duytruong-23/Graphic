#ifndef GRAPHIC_H
#define GRAPHIC_H

#include <Windows.h>

void resizeConsole(int width, int height);

void TextColor(int x);

void gotoxy(int x, int y);

void clearScreen();

void ShowConsoleCursor(bool showFlag);

#endif
