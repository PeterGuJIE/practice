#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include <stdio.h>
void menu()
{
	printf("                             \n");
	printf("       1.play   0.exit       \n");
	printf("                             \n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	/*DisplayBoard(mine, ROW, COL);*/
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine,show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}          





//int SUM(int n, int i)//Sn = a + aa + aaa + aaaa + aaaaa的前5项之和
//{
//	int sum = 0;
//	while (n>0)
//	{
//		sum = sum * 10+i;
//		n--;
//	}
//	return sum;
//}
//int main()
//{
//	int i ,n;
//	scanf("%d", &i);
//	int Sn = 0;
//	for (n = 1; n <= 5; n++)
//	{
//		Sn = Sn + SUM(n, i);
//	}
//	printf("%d\n", Sn);
//	return 0;
//}



//
//void menu()
//{
//	printf("                         \n");
//	printf("     1.play   0.exit     \n");
//	printf("                         \n");
//}
//void game()
//{
//	int ret = 0;
//	char board[ROW][COL] = { 0 };
//	InitBoard(board, ROW, COL);
//	DisplayBoard(board, ROW, COL);
//	while (1)
//	{
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//			break;
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret=IsWin(board, ROW, COL);
//		if (ret != 'C')
//			break;
//	}
//	if (ret == '*')
//	{
//		printf("玩家赢\n");
//	}
//	else if (ret == '#')
//	{
//		printf("电脑赢\n");
//	}
//	else 
//	{
//		printf("平局\n");
//	}
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10000; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/10)
//		{
//			tmp = tmp / 10;
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			if (count < 3)
//			{
//				break;
//			}
//			else
//			sum += (int)pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum ==i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	
//	return 0;
//}