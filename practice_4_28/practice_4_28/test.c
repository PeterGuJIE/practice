#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("��Ӽ�����ѡ������:");
	while (1)
	{
		int n = 0;
		scanf("%c", &n);
		if (n >= 'a'&&n <= 'z')
		{
			n = n - 32;
			printf("%c\n", n);
		}
		else if (n >= 'A'&&n <= 'Z')
		{
			n = n + 32;
			printf("%c\n", n);
		}
		else if (n >= '0'&&n <= '9')
		{
			printf("%c\n", n);
		}
		else
			;
	}
	return 0;
}


//int main()//��д����ģ��������������ĳ���
//{
//	char input[20] = { 0 };
//	char password[] = "��¼�ɹ�";
//	int n = 0;
//	for (n = 0; n < 3; n++)
//	{
//		printf("�������룬��ʾ����¼�ɹ���\n");
//		scanf("%s", &input);
//		if (strcmp(input, "��¼�ɹ�") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//
//		}
//		else
//			printf("�������\n");
//	}
//	if (n == 3)
//	{
//		printf("�������");
//	}
//	return 0;
//}




//int Find(int arr[], int i, int sz)//���±�
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (i < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (i>arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 6;
//	int left = 0;
//	int right = sz - 1;
//	int ret = Find(arr, i, sz);
//	if (arr[ret] == i)
//	{
//		printf("�±�Ϊ:%d\n", ret);
//	}
//	else
//		printf("δ�ҵ��±�\n");
//	return 0;
//}

//int main()//���±�
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 13;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (i < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (i>arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�±�Ϊ:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("δ�ҵ��±�:-1");
//	}
//	return 0;
//}




//int main()//�������黥����
//{
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 4, 3, 2, 1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}




//void Init(int arr[], int sz)//�������㡢��ӡ���֡������û�
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//	while (i<=j)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		i++;
//		j--;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*Init(arr, sz);*/
//	Print(arr, sz);
//	Reverse(arr, sz);
//	return 0;
//}




//int main()//ð������
//{
//	int arr[] = { 2, 5, 9, 6, 3, 1, 7 };
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//void move(char getone, int n, char putone)
//{
//	static int k = 1;
//	printf("%2d:%3d#%c---%c\n", k, n, getone, putone);
//	if (k++ % 3 == 0)
//	{
//		printf("\n");
//	}
//}
//
//void Hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		move(a,b,c);
//	}
//	else
//	{
//		Hanoi(n-1, a, c, b);
//		move(a, n, c);
//		Hanoi(n - 1, b,a,c);
//	}
//
//}
//int main()
//{
//	int n;
//	char a = 'a';
//	char b = 'b';
//	char c = 'c';
//	printf("���������:");
//	scanf("%d", &n);
//	printf("\n");
//	Hanoi(n, a, b, c);
//}