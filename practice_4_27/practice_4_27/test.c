#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()//ɨ��
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}







//void menu()//��ɲ�������Ϸ��
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
//			printf("��С��\n");
//		}
//		else if (ret< guess)
//		{
//			printf("�´���\n");
//		}
//		else	
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������������ѡ��\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}


//int SUM(int i,int n)//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮��
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