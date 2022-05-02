#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//int Sum(int n,int i)//5项之和
//{
//	int sum = 0;
//	while (i)
//	{
//		sum = sum * 10 + n;
//		i--;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int Sn = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= 5; i++)
//	{
//		Sn += Sum(n,i);
//	}
//	printf("%d\n", Sn);
//	return 0;
//}





//void menu()//猜数字
//{
//	printf("                      \n");
//	printf("        1.play        \n");
//	printf("        0.exit        \n");
//	printf("                      \n");
//}
//void game()
//{
//	int input = 0;
//	int ret = rand() % 100 + 1;
//	printf("开始猜数字，请打出你想的数字\n");
//	while (1)
//	{
//		scanf("%d", &input);
//		if (ret < input)
//		{
//			printf("猜大了\n");
//		}
//		else if (ret > input)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了!\n");
//			break;
//		}
//	}
//		
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束!\n");
//			break;
//		default:
//			printf("选择错误，请重新选择!\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}





//void menu()//扫雷
//{
//	printf("                             \n");
//	printf("            1.play           \n");
//	printf("            0.exit           \n");
//	printf("                             \n");
//}
//void game()
//{
//	char mine[ROWS][COLS] = { 0 };
//	char show[ROWS][COLS] = { 0 };
//	InitBoard(mine, ROWS, COLS,'0');
//	InitBoard(show, ROWS, COLS, '*');
//	/*DisplayBoard(mine, ROW, COL);*/
//	DisplayBoard(show, ROW, COL);
//	SetMine(mine, ROW, COL);
//	DisplayBoard(mine, ROW, COL);
//	PlayerMove(mine,show,ROW,COL);
//
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏!\n");
//		default:
//			printf("选择错误，请重新选择!\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}