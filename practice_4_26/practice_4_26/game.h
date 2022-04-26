#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define EASY_COUNT 80
void InitBoard(char board[ROWS][COLS], int rows, int cols,int set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row, int col);
//#define ROW 3
//#define COL 3
//void InitBoard(char board[ROW][COL], int row, int col);
//void DisplayBoard(char board[ROW][COL], int row, int col);
//void PlayerMove(char board[ROW][COL], int row, int col);
//void ComputerMove(char board[ROW][COL], int row, int col);
//char IsWin(char board[ROW][COL], int row, int col);