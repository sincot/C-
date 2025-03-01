#pragma once

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

#define EASY_COUNT 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//≥ı ºªØ∆Â≈Ã
void Initboard(char board[ROWS][COLS], int r, int c, char character);
//¥Ú”°∆Â≈Ã
void Printboard(char board[ROWS][COLS], int r, int c);
//…Ë÷√¿◊
void Setboom(char boom[ROWS][COLS], int r, int c);
//≈≈≤È¿◊
void Fineboom(char boom[ROWS][COLS], char show[ROWS][COLS], int r, int c);