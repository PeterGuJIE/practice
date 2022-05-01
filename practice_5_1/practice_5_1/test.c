#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()//找单一数字
{
	int arr[] = { 1, 2, 3, 4, 15, 1, 2, 3, 4 };
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret^arr[i];
	}
	printf("%d\n", ret);
	return 0;
}






//int main()//水仙花
//{
//	int n = 0;
//	for (n = 1; n < 10000; n++)
//	{
//		int count = 0;
//		int tmp = n;
//		int sum = 0;
//		while (tmp)
//		{
//			tmp = tmp / 10;
//			count++;
//		}
//		tmp = n;
//		while (tmp)
//		{
//			if (count < 3)
//			{
//				break;
//			}
//			else
//			{
//				sum += (int)pow(tmp % 10, count);
//				tmp = tmp / 10;
//			}
//		}
//		if (sum == n)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}




//int Sum(int n,int j)//Sn = a + aa + aaa + aaaa + aaaaa的前5项之和
//{
//	int sum = 0;
//	while (j>0)
//	{
//		sum = sum*10 + n;
//		j--;
//	}
//	return sum ;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int j = 0;
//	int Sn = 0;
//	for (j = 1; j <= 5; j++)
//	{
//		Sn = Sn + Sum(n,j);
//	}
//	printf("%d\n", Sn);
//	return 0;
//}





//void menu()
//{
//	printf("                           \n");
//	printf("       1.plat  0.exir      \n");
//	printf("                           \n");
//}
//void game()
//{
//	int ret = 0;
//	char board[ROW][COL] = { 0 };
//	InitBoard(board, ROW, COL);
//	DisplayBoard(board, ROW, COL);
//	while (1)
//	{
//		PlayMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
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
//		printf("平局\n");
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
//		default:
//			printf("输入错误，请重新选择！\n");
//			break;
//		}
//	
//
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}