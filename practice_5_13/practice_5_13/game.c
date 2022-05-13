#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void initboard(char board[ROWS][COLS], int row, int col, int ret)
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
void displayboard(char board[ROWS][COLS], int row, int col)
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
void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int i = rand()%row + 1;
		int j = rand() % col + 1;
		if (board[i][j] == '0')
		{
			board[i][j] = '1';
			count--;
		}
	}
}
int getmine(char board[ROWS][COLS], int i, int j)
{
	return board[i][j - 1] + board[i][j + 1] + board[i + 1][j - 1] + board[i + 1][j + 1] + board[i + 1][j] +
		board[i - 1][j - 1] + board[i - 1][j + 1] + board[i - 1][j] - 8 * '0';
}
void moveboard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int win = 0;
	while (win < row*col - 10)
	{
		printf("请选择坐标:");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= row&&j >= 1 && j <= col)
		{
			if (mine[i][j] == '1')
			{
				printf("游戏结束\n");
				displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = getmine(mine, i, j);
				show[i][j] = count + '0';
				expand(mine,show, i, j);
				displayboard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标错误\n");
		}
	}
	if (win == row*col - 10)
	{
		printf("赢了\n");
		displayboard(mine, ROW, COL);
	}
}
void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int i, int j)
{
	if (i >= 1 && i <= ROW&&j >= 1 && j <= COL)
	{
		if (getmine(mine, i, j) == 0)
		{
			show[i][j] = ' ';
			if (show[i][j - 1] = '*')
			{
				expand(mine, show, i, j - 1);
			}
			if (show[i][j + 1] = '*')
			{
				expand(mine, show, i, j + 1);
			}
			if (show[i+1][j - 1] = '*')
			{
				expand(mine, show, i + 1, j - 1);
			}
			if (show[i + 1][j + 1] = '*')
			{
				expand(mine, show, i + 1, j + 1);
			}
			if (show[i + 1][j] = '*')
			{
				expand(mine, show, i + 1, j);
			}
			if (show[i-1][j - 1] = '*')
			{
				expand(mine, show, i - 1, j - 1);
			}
			if (show[i - 1][j + 1] = '*')
			{
				expand(mine, show, i - 1, j + 1);
			}
			if (show[i - 1][j] = '*')
			{
				expand(mine, show, i - 1, j);
			}
		}
	}
}
void firstmove(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = COUNT;
	printf("请选择坐标:");
	scanf("%d %d", &i, &j);
	if (i >= 1 && i <= row&&j >= 1 && j <= col)
	{
		if (mine[i][j] == '1')
		{
			printf("你还有一次机会\n");
			mine[i][j] = '0';
			while (count)
			{
				int i = rand() % row + 1;
				int j = rand() % col + 1;
				if (mine[i][j] == '0')
				{
					mine[i][j] = '1';
					count--;
				}
			}
		}
	}
}