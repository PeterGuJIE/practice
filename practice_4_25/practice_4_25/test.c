#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()//ˮ�ɻ���
{
	int i = 0;
	for (i = 1; i <= 100000; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;
		while (tmp/10)
		{
			count++;
			tmp = tmp / 10;
		}
		tmp = i;
		while (tmp)
		{
			if (count < 3)
				break;
			else
			{
				sum = sum + (int)pow(tmp % 10, count);
				tmp = tmp / 10;
			}
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}





//void memu()//������
//{
//	printf("                     \n");
//	printf("   1.play   0.exit   \n");
//	printf("                     \n");
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
//		{
//			if (ret != 'C')
//				break;
//		}
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret=IsWin(board, ROW, COL);
//		{
//			if (ret != 'C')
//				break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("���Ӯ\n");
//	}
//	else if (ret == '#')
//	{
//		printf("����Ӯ\n");
//	}
//	else
//	{
//		printf("ƽ��\n");
//	}
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		memu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("������Ϸ\n");
//			break;
//		default:
//			printf("�����������ѡ��\n");
//			break;
//		}
//		/*if (input == 1)
//		{
//			game();
//		}
//		else if (input == 0)
//		{
//			printf("������Ϸ\n");
//		}
//		else
//		{
//			printf("����ѡ��\n");
//		}*/
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}




//int main()//�������ﵥһ������
//{
//	int arr[] = { 1, 2, 3, 4, 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
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
//	return 0;
//}

//void print_line(int blank_cut, int star_cut)//����Ļ���������ͼ����
//{
//	int i = 0;
//	for (i = 0; i < blank_cut; i++)
//	{
//		printf(" ");
//	}
//	for (i = 0; i < star_cut; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	int line = 0;
//	scanf("%d", &line);
//	for (n = 1; n < line; n++)
//	{
//		print_line(line-n,2*n-1);
//	}
//	print_line(0, 2 * line - 1);
//	for (n = 1; n < line; n++)
//	{
//		print_line(n, 2 * (line - n) - 1);
//	}
//	return 0;
//}