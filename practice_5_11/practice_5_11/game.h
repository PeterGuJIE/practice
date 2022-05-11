#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
void Initboard(char arr[ROW][COL],int row,int col);
void Displayerboard(char arr[ROW][COL], int row, int col);
void Moveboard(char arr[ROW][COL], int row, int col);
void Computerboard(char arr[ROW][COL], int row, int col);
int Iswin(char arr[ROW][COL], int row, int col);
