#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, int set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
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
	int count = EASY_COUNT;
	while (count)
	{
		int i = rand() % row+1;
		int j = rand() % col+1;
		if (board[i][j] == '0')
		{
			board[i][j] = '1';
			count--;
		}	
	}
}
int get_mine_count(char mine[ROWS][COLS], int i, int j)
{
	return mine[i][j - 1] + mine[i][j + 1] + mine[i + 1][j - 1] + mine[i + 1][j + 1] +
		mine[i + 1][j] + mine[i - 1][j - 1] + mine[i - 1][j + 1] + mine[i - 1][j] - 8 * '0';
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入你的坐标:>");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= row&&j >= 1 && j <= row)
		{
			if (mine[i][j] == '1')
			{
				printf("很遗憾,你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine_count(mine, i, j);
				show[i][j] = count + '0';
				DisplayBoard(show, row, col);
				win--;
			}
		}
		else
		{
			printf("坐标错误，请重新输入！\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}






//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j <  col - 1)
//			{
//				printf("|");
//			}
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j <  col - 1)
//				{
//					printf("|");
//				}
//			}
//			printf("\n");
//		}
//	}
//}
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("玩家走:>\n");
//	while (1)
//	{
//		printf("请输入坐标:>");
//		scanf("%d%d", &i, &j);
//		if (i >= 1 && i <= row&&j >= 1 && j <= col)
//		{
//			if (board[i - 1][j - 1] == ' ')
//			{
//				board[i - 1][j - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("该位置以占满\n");
//			}
//		}
//		else
//			printf("请重新输入！\n");
//	}
//}
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("电脑走:>\n");
//	while (1)
//	{
//		i = rand() % row;
//		j = rand() % col;
//		if (board[i][j] == ' ')
//		{
//			board[i][j] = '#';
//			break;
//		}
//	}
//}
//int IsPull(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//				return 0;
//		}
//	}
//	return 1;
//}
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//			if (board[i][0] && board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//			{
//				return board[i][1];
//			}
//			for (j = 0; j < col; j++)
//			{
//				if (board[0][j] && board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
//				{
//					return board[i][1];
//				}
//			}
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (1 == IsPull(board, ROW, COL))
//	{
//		return 'Q';
//	}
//	return 'C';
//}