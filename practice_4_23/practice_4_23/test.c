#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()//�����������Լ��
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	while (a%b)
	{
		c = a%b;
		a = b;
		b = c;
	}
	printf("���Լ��:%d\n", b);
	return 0;
}



//int main()//���������Ӵ�С���
//{
//	int a, b, c;
//	int ret = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		ret = a;
//		a = b;
//		b = ret;
//	}
//	if (a < c)
//	{
//		ret = a;
//		a = c;
//		c = ret;
//	}
//	if (b < c)
//	{
//		ret = b;
//		b = c;
//		c = ret;
//	}
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}



//int main()//10 �����������ֵ
//{
//	char arr[] = { 1, 2, 3, 4, 5, 6, 50, 8, 9, 11 };
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}



//void Swap(int* x, int* y)//������ֵ�����ݽ��н���
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}



//int main()//����
//{
//	int n = 0;
//	for (n = 1000; n <= 2000; n++)
//	{
//		if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}



//int main()//�˷���
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <=a; b++)
//		{
//			printf("%d*%d=%-2d ", a, b, a*b);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()//����
//{
//	int n = 0;
//	int m = 0;
//	for (n = 100; n <= 200; n++)
//	{
//		for (m = 2; m < n; m++)
//		{
//			if (n%m == 0)
//			{
//				break;
//			}
//		}
//		if (m == n)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}


//void Add(int* p)//������ÿ����һ������������ͻὫ num ��ֵ����1
//{
//	++*p;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}




//int binary_search(int arr[], int k, int sz)//����ʵ��һ��������������Ķ��ֲ���
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
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
//			return mid;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == 1)
//		printf("δ�ҵ��±�\n");
//	else
//		printf("�ҵ��ˣ��±�Ϊ:%d\n", ret);
//	return 0;
//}




//int is_lead_year(int x)//�����ж�1000-2000�������
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_lead_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}




//int is_prime(int b)//�����ж�100-200������
//{
//	int c = 0;
//	for (c = 2; c < b; c++)
//	{
//		if (b%c == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		if (is_prime(a) == 1)
//			printf("%d ", a);
//	}
//	return 0;
//}