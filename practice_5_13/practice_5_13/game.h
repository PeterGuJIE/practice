#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<ctype.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 10;
void initboard(char board[ROWS][COLS], int row, int col, int ret);
void displayboard(char board[ROWS][COLS], int row, int col);
void setmine(char board[ROWS][COLS], int row, int col);
void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int i, int j);
void firstmove(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void moveboard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
