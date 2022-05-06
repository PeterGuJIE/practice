#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#define ROW 10
#define COL 10
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void MoveBorad(char board[ROW][COL], int row, int col);
void ComputerBoard(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
