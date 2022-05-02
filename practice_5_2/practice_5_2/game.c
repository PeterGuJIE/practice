#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//void InitBoard(char board[ROWS][COLS], int rows, int cols,int ret)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			board[i][j] = ret;
//		}
//	}
//}
//void DisplayBoard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= col; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d ", i);
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//}
//void SetMine(char board[ROWS][COLS], int row, int col)
//{
//	int count = EASY_COUNT;
//	while (count)
//	{
//		int i = rand() % row + 1;
//		int j = rand() % col + 1;
//		if (board[i][j] == '0')
//		{
//			board[i][j] = '1';
//			count--;
//		}
//	}
//	
//}
//int get_mine(char mine[ROWS][COLS], int i, int j)
//{
//	return mine[i][j - 1] + mine[i][j + 1] + mine[i - 1][j] + mine[i - 1][j + 1] + mine[i - 1][j - 1] +
//		mine[i + 1][j] + mine[i + 1][j - 1] + mine[i + 1][j + 1] - 8 * '0';
//}
//void PlayerMove(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	int win = 0;
//	while (win<row*col - EASY_COUNT)
//	{
//		printf("请选择坐标:");
//		scanf("%d%d", &i, &j);
//		if (i >= 1 && i <= row&&j >= 1 && j <= col)
//		{
//			if (mine[i][j] == 1)
//			{
//				printf("踩到炸弹了，游戏结束\n");
//				DisplayBoard(mine, ROW, COL);
//				break;
//			}
//			else
//			{
//				int count = get_mine(mine, i, j);
//				show[i][j] = count + '0';
//				Expand(mine, show, i, j);
//				DisplayBoard(show, ROW, COL);
//				win--;
//			}
//		}
//		else
//		{
//			printf("坐标输入错误，请重新输入!\n");
//		}
//	}
//	if (win == row*col - EASY_COUNT)
//	{
//		printf("恭喜你，排雷成功!\n");
//		DisplayBoard(mine, ROW, COL);
//	}
//}
//void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int i, int j)//周围没有雷
//{
//	if (i >= 1 && i <= ROW&&j >= 1 && j <= COL)
//	{
//		if (get_mine(mine, i, j) == 0)
//		{
//			show[i][j] = ' ';
//			if (show[i - 1][j - 1] == '*')
//			{
//				Expand(mine, show, i - 1, j - 1);
//			}
//			if (show[i - 1][j] == '*')
//			{
//				Expand(mine, show, i - 1, j);
//			}
//			if (show[i - 1][j + 1] == '*')
//			{
//				Expand(mine, show, i - 1, j + 1);
//			}
//			if (show[i][j + 1] == '*')
//			{
//				Expand(mine, show, i, j + 1);
//			}
//			if (show[i + 1][j + 1] == '*')
//			{
//				Expand(mine, show, i + 1, j + 1);
//			}
//			if (show[i + 1][j] == '*')
//			{
//				Expand(mine, show, i + 1, j);
//			}
//			if (show[i + 1][j - 1] == '*')
//			{
//				Expand(mine, show, i + 1, j - 1);
//			}
//			if (show[i][j - 1] == '*')
//			{
//				Expand(mine, show, i, j - 1);
//			}
//		}
//	}
//	
//}
