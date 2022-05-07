#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROWS][COLS], int row, int col, int ret)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ret;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (board[i][j] == '0')
		{
			board[i][j] = '1';
			count--;
		}
	}
}
int get_mine(char board[ROWS][COLS], int i, int j)
{
	return board[i][j - 1] + board[i][j + 1] + board[i + 1][j - 1] + board[i + 1][j + 1] + board[i + 1][j]
		+ board[i - 1][j - 1] + board[i - 1][j + 1] + board[i - 1][j] - 8 * '0';
}
void PlayerMove(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int win = 0;
	while (win<row*col-COUNT)
	{
		printf("请选择坐标:");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= row&&j >= 1 && j <= col)
		{
			if (mine[i][j] == '1')
			{
				printf("你踩到炸弹了，游戏结束!\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = get_mine(mine, i, j);
				show[i][j] = count + '0';
				expand(mine,show, i, j);
				DisplayBoard(show, ROW, COL);
				win--;
			}
		}
		else
		{
			printf("坐标错误，请重新选择!");
		}
	}
	if (win == row*col - COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}
void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int i, int j)
{
	if (i >= 1 && i <= ROW&&j >= 1 && j <= COL)
	{
		if (get_mine(mine, i, j) == 0)
		{
			show[i][j] = ' ';
			if (show[i - 1][j - 1] == '*')
			{
				expand(mine, show, i - 1, j - 1);
			}
			if (show[i - 1][j] == '*')
			{
				expand(mine, show, i - 1, j);
			}
			if (show[i - 1][j+1] == '*')
			{
				expand(mine, show, i - 1, j+1);
			}
			if (show[i + 1][j + 1] == '*')
			{
				expand(mine, show, i + 1, j + 1);
			}
			if (show[i + 1][j - 1] == '*')
			{
				expand(mine, show, i + 1, j - 1);
			}
			if (show[i + 1][j] == '*')
			{
				expand(mine, show, i + 1, j);
			}
			if (show[i][j + 1] == '*')
			{
				expand(mine, show, i, j + 1);
			}
			if (show[i][j - 1] == '*')
			{
				expand(mine, show, i, j - 1);
			}
		}
	}
}
void firstmine(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = COUNT;
	while (1)
	{
		printf("请选择坐标:");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= ROW&&j >= 1 && j <= COL)
		{
			if (board[i][j] == '1')
			{
				board[i][j] = '0';
				while (count)
				{
					int i = rand() % row + 1;
					int j = rand() % col + 1;
					if (board[i][j] == '0')
					{
						board[i][j] = '1';
						count--;
						DisplayBoard(board, ROW, COL);
						break;
					}
				}
			}
			else
				break;
		}
		else
			printf("坐标输入错误，请重新输入\n");
	}
}