#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 5
void InitBoard(char board[ROWS][COLS], int row, int col, int ret);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int i, int j);
void PlayerMove(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void firstmine(char board[ROWS][COLS], int row, int col);