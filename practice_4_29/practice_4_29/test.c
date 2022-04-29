#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
//int digitsum(unsigned int n)//递归每位之和
//{
//	if (n > 9)
//		return digitsum(n/10)+n%10;
//	else
//	return n;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int sum = digitsum(n);
//	printf("%d\n", sum);
//	return 0;
//}





//int my_strlen(char* arr)//递归字符串反向排列
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1)>=2)
//	    reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdfg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}




//int my_strlen(char* arr)//递归算出数组长度
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}




//int main()strlen用法
//{
//	char arr[] ="bit";
//	int i = strlen(arr);
//	printf("%d\n", i);
//	return 0;
//}




//int  print_sum(int n)//递归n的阶乘
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*print_sum(n - 1);
//}
//int main()
//{
//	int n,j= 0;
//	scanf("%d", &n);
//    int sum =print_sum(n);
//	printf("%d\n", sum); 
//	return 0;
//}



//int main()//非递归n的阶乘
//{
//	int n,j= 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		sum =sum*j;
//	}
//	printf("d\n", sum); 
//	return 0;
//}



//void print_number(int a)递归打印每一位
//{
//	if (a > 9)
//	{
//		print_number(a / 10);
//		printf("%d ", a % 10);
//	}
//	else
//	{
//		printf("%d ", a);
//	}
//}
//int main()
//{
//	int a=0;
//	scanf("%d", &a);
//	print_number(a);
//	
//	return 0;
//}




//void print_table(int n)//函数乘法表
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j=1;j<=i;j++)
//		{
//			printf("%2d*%d=%3d ", i, j, i*j);
//		}	
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}



//void swap_number(int a, int b)//函数交换
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d", a, b);
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	swap_number(a, b);
//	return 0;
//}




//int is_year(int year)//函数判断闰年
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_year(year) == 1)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}




//int jud_prime(int a)//函数判断是不是素数
//{
//	int n = 0;
//	int j = 0;
//	for (n = 100; n <= 200; n++)
//	{
//		for (j = 2; j < a; j++)
//		{
//			if (a%j == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//}
//int main()
//{
//int a = 0;
//	scanf("%d", &a);
//	if (jud_prime(a) == 1)
//		printf("是素数\n");
//	else
//		printf("不是素数\n");
//	return 0;
//}




//void print(int *p, int sz)//函数打印数组
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}





//int main()//交换两个值
//{
//	int a = 0;
//	int b = 10;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d", a, b);
//	return 0;
//}



//void Find_count(int n)//找奇数位和偶数位
//{
//	int a = 0;
//	printf("奇数位:\n");
//	for (a = 30; a >= 0; a -= 2)
//	{
//		printf("%d ", (n >> a) & 1);
//	}
//	printf("\n");
//	printf("偶数位:\n");
//	for (a = 31; a >= 1; a -= 2)
//	{
//		printf("%d ", (n >> a) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Find_count(n);
//	return 0;
//}




//void is_diff_count(int a, int b)//找出两个二进制的不同数
//{
//	int n = 0;
//	int c = a^b;
//	int count = 0;
//	for (n = 0; n <32; n ++)
//	{
//		if (((c >> n) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}
//int main()
//{
//	int a, b = 0;
//	scanf("%d%d", &a, &b);
//	is_diff_count(a, b);
//	
//	return 0;
//}




//int Find_count(int n)//找二进制中的1
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = Find_count(n);
//	printf("%d\n", count);
//	return 0;
//}