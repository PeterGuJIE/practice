#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
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
//			if (j < col - 1)
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
//				if (j < col - 1)
//				{
//					printf("|");
//				}
//			}
//		}
//		printf("\n");
//	}
//}
//void MoveBorad(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("�����");
//	while (1)
//	{
//		scanf("%d%d", &i, &j);
//		if (i >= 1 && i <= row&&j >= 1 && j <= col)
//		{
//			if (board[i - 1][j - 1] == ' ')
//			{
//				board[i - 1][j - 1] = '*';
//				break;
//			}
//			else
//				printf("�˴�������\n");
//		}
//		else
//			printf("����������\n");
//	}
//}
//void ComputerBoard(char board[ROW][COL], int row, int col)
//{
//	int j = 0;
//	int i = 0;
//	printf("������\n");
//	while (1)
//	{
//		j = rand() % row;
//		i = rand() % col;
//		if (board[i][j] == ' ')
//		{
//			board[i][j] = '#';
//			break;
//		}
//	}
//}
//int Is_Full(char board[ROW][COL], int row, int col)
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
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];
//		}
//	}
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//		{
//			return board[1][i];
//		}
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (1 == Is_Full(board, ROW, COL))
//	{
//		return 'q';
//	}
//	return 'c';
//}
