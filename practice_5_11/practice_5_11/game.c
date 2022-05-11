#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//void Initboard(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			arr[i][j] = ' ';
//		}
//	}
//}
//void Displayerboard(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", arr[i][j]);
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
//			printf("\n");
//		}
//	}
//}
//void Moveboard(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("玩家走:");
//	while (1)
//	{
//		scanf("%d%d", &i, &j);
//		if (i >= 1 && i <= row&&j >= 1 && j <= col)
//		{
//			if (arr[i - 1][j - 1] == ' ')
//			{
//				arr[i - 1][j - 1] = '*';
//				break;
//			}
//			else
//				printf("此处已填满\n");
//		}
//		else
//		{
//			printf("请重新输入\n");
//		}
//	}
//}
//void Computerboard(char arr[ROW][COL], int row, int col)
//{
//	printf("电脑走:\n");
//	int i = 0;
//	int j = 0;
//	while (1)
//	{
//		i = rand()%row;
//		j = rand()%col;
//		if (arr[i][j] == ' ')
//		{
//			arr[i][j] = '#';
//			break;
//		}
//	}
//}
//int fullboard(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (arr[i][j] == ' ')
//				return 0;
//		}
//	}
//	return 1;
//}
//int Iswin(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
//			return arr[i][1];
//	}
//	for (j = 0; j < col; j++)
//	{
//		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[1][j] != ' ')
//			return arr[1][j];
//	}
//	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
//		return arr[1][1];
//	if (arr[1][1] == arr[0][2] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')
//		return arr[1][1];
//	if (1 == fullboard(arr, ROW, COL))
//	{
//		return 'q';
//	}
//	return 'c';
//
//
//}