#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//在屏幕上输出以下图案
{
	int line = 0;
	scanf("%d", &line);
	int a, b, c;
	for (a = 1; a <= line; a++)
	{
		for (b = 1; b <= line - a; b++)
		{
			printf(" ");
		}
		for (c = 1; c <= a * 2 - 1; c++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (a = 1; a <= line-1; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf(" ");
		}
		for (c = 1; c < 2 * line - a * 2 ; c++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}




//int main()
//{
//	int line = 0;//6
//	scanf("%d", &line);
//	int a, b, c;
//	for (a = 0; a < line; a++)
//	{
//		for (b = 0; b < line - 1-a; b++)
//		{
//			printf(" ");
//		}
//		for (c = 0; c < a * 2 + 1; c++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (a = 0; a < line; a++)
//	{
//		for (b = 0; b <= a; b++)
//		{
//			printf(" ");
//		}
//		for (c = 0; c < 2*(line -2 -a)+1; c++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n / 10 == 9)
//		{
//			printf("%d ", n);
//			count++;
//		}
//		if (n % 10 == 9)
//		{
//			printf("%d ", n);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("count =%d\n", count);
//	return 0;
//}



//int main()//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//{
//	int n = 0;
//	double sum = 0;
//	int flag = 1;
//	for (n = 1; n <= 100; n++)
//	{
//		sum = sum + flag * 1.0 / n;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//int main()//将数组A中的内容和数组B中的内容进行交换
//{
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 5, 6, 7, 8 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}


//int main()//将数组A中的内容和数组B中的内容进行交换
//{
//	char arr1[] = "abcd";
//	char arr2[] = "dcba";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//int Fib(int a)//第n个斐波那契数
//{
//	if (a <= 2)
//		return 1;
//	else
//		return Fib(a - 1)+Fib(a - 5);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0; 
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



//int Facl(int a)//求n的阶乘
//{
//	if (a <= 1)
//		return 1;
//	else
//		return a*Facl(a - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}




//int Facl(int a)//求n的阶乘
//{
//	int j = 0;
//	int ret = 1;
//	for (j = 1; j <= a; j++)
//	{
//		ret = ret*j;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}



//int my_strlen(char* str)//编写函数不允许创建临时变量，求字符串的长度
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = 0;
//	sz=my_strlen(arr);
//	printf("%d\n", sz);
//	return 0;
//}



//void print(int a)//接受一个整型值（无符号），按照顺序打印它的每一位
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a%10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}