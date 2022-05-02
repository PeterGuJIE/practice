#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define EASY_COUNT 10
void InitBoard(char board[ROWS][COLS], int rows, int cols,int ret);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void PlayerMove(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
