#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()//扫雷
{
	printf("                               \n");
	printf("        1.paly  0.exit         \n");
	printf("                               \n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	/*DisplayBoard(mine, ROW, COL);*/
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
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
			printf("输入错误，请重新选择!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}







//void menu()//完成猜数字游戏。
//{
//	printf("                         \n");
//	printf("     1.play   0.exit     \n");
//	printf("                         \n");
//}
//void game()
//{
//	int guess= 0;
//	int ret = rand() & 100 + 1;
//	/*printf("%d\n", ret);*/
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (ret > guess)
//		{
//			printf("猜小了\n");
//		}
//		else if (ret< guess)
//		{
//			printf("猜大了\n");
//		}
//		else	
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
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
//			printf("输入错误，请重新选择！\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}


//int SUM(int i,int n)//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和
//{
//	int sum = 0;
//	while (n>0)
//	{
//		sum = sum * 10 + i;
//		n--;
//	}
//	return sum;
//}
//int main()
//{
//	int i ,n= 0;
//	scanf("%d", &i);
//	int Sn = 0;
//	for (n = 1; n <= 5; n++)
//	{
//		Sn = Sn + SUM(i,n);
//	}
//	printf("%d\n", Sn);
//	return 0;
//}