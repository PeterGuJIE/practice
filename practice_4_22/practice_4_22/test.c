#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void menu()//������1-100
{
	printf("                              \n");
	printf("       1 .play    0.exit      \n");
	printf("                              \n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess <ret)
		{
			printf("��С��\n");
		}
		else if (guess>ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
			    printf("�˳���Ϸ\n");
			    break;
			default:
				 printf("ѡ���������������\n");
				 break;
		}	
	}while (input);
	return 0;
}


//int main()//�ػ�����
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("1���Ӻ�ػ���������룺������ȡ���ػ�\n������:>");
//		scanf("%s",input);
//		if (strcmp(input, "������") == 0);
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}



//int main()//���ֲ���
//{
//	char arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 6;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



//int main()//�˷���
//{
//	int n = 0;
//	int m = 0;
//	for (n = 1; n <= 9; n++)
//	{
//		for (m = 1; m <= n; m++)
//		{
//			printf("%d*%d=%-2d ", n, m, n*m);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()//10���������ֵ
//{
//	char arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}


//int main()//1/1-1/2+1/3-1/100�м��ֵ��
//{
//	int n = 0;
//	double sum = 0;
//	int flag = 1;
//	for (n = 1; n <= 100; n++)
//	{
//		sum += flag*1.0 / n;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//int main()//1/1-1/2+1/3-1/100�м��ֵ����
//{
//	int n = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum3 = 0;
//	for (n = 1; n <= 100; n += 2)
//	{
//		sum1 += 1.0 / n;
//	}
//	for (n = 2; n <= 100; n += 2)
//	{
//		sum2 += 1.0 / n;
//	}
//	sum3=sum1 - sum2;
//	printf("%lf\n", sum3);
//	return 0;
//}


//int main()//1-100��9�ĸ���
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 10 == 9)
//		{
//			printf("%d ", n);
//			count++;
//		}
//		if (n / 10 == 9)
//		{
//			printf("%d ", n);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}



//int main() //100-200�е�����
//{
//	int n = 0;
//	int m = 0;
//	int count = 0;
//	for (n = 100; n <= 200; n++)
//	{
//		for (m = 2; m < n; m++)//(m=2;m<=sqrt(n);m++)
//		{
//			if (n%m == 0)
//			{
//				break;
//			}
//		}
//		if (m == n)
//		{
//			count++;
//			printf("%d ", n);
//		}
//		
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}



//int main()//1000-2000�������
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}



//int main()//�����������Լ��
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (a%b)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}


//int main()//1-100��3�ı���
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 3 == 0)
//		{
//			printf("%d ", n);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//int main()//��С�������
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}