#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//int Sum(int n,int i)//5��֮��
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





//void menu()//������
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
//	printf("��ʼ�����֣��������������\n");
//	while (1)
//	{
//		scanf("%d", &input);
//		if (ret < input)
//		{
//			printf("�´���\n");
//		}
//		else if (ret > input)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���!\n");
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
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("��Ϸ����!\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��!\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}





//void menu()//ɨ��
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
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ!\n");
//		default:
//			printf("ѡ�����������ѡ��!\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}