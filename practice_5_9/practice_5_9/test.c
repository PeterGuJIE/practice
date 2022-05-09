#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void move(char arr1[], int n)//判断一个字符串是否为另外一个字符串旋转之后的字符串
{
	int i = 0;
	int len = strlen(arr1);
	for (i = 0; i < n; i++)
	{
		int j = 0;
		char tmp = arr1[0];
		for (j = 0; j < len - 1; j++)
		{
			arr1[j] = arr1[j + 1];
		}
		arr1[len - 1] = tmp;
	}
}
int judge(char*arr1, char*arr2)
{
	int i = 0;
	int len = strlen(arr1);
	for (i = 0; i < len; i++)
	{
		move(arr1, 1);
		int ret = strcmp(arr1, arr2);
		if (ret == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char arr1[50] = { 0 };
	char arr2[50] = { 0 };
	scanf("%s %s", arr1, arr2);
	int ret = judge(arr1, arr2);
	printf("%d\n", ret);
	return 0;
}








//int main()//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水
//{
//	int n = 0;
//	scanf("%d",&n);
//	int a = n;//喝
//	int b = n;//空
//	while (b>=2)
//	{
//		a = a + b / 2;
//		b = b / 2 + b % 2;
//	}
//	printf("%d\n", a);
//	return 0;
//}










//int main()//一个数组中只有两个数字是出现一次，
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for(i = 0; i < sz;i++)
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
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}







//void swap(char*left, char*right, int width)//自己编写的冒泡排序
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		*left++;
//		*right++;
//	}
//}
//void my_qsort(void*base, int sz, int width, int (*cmp)(const void*e1, const void*e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (cmp((char*)base + j*width ,(char*)base + (j + 1)*width)>0)
//			{
//				swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
//			}
//		}
//	}
//}
//int cmp_double(const void*e1, const void*e2)
//{
//	return (int)(*(double*)e1 - *(double*)e2);
//}
//int main()
//{
//	double f[] = { 12.5, 6.6, 8.5, 9.8, 8.7, 2.4 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	my_qsort(f, sz, sizeof(f[0]), cmp_double);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%0.2lf ", f[i]);
//	}
//	return 0;
//}









//int main()//找出最大数
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	int x = a > b ? a : b;
//	int y = c > d ? c : d;
//	printf("%d\n", x > y ? x : y);
//	return 0;
//}







//int main()//球的体积
//{
//	double pai = 3.1415926;
//	float r = 0.0;
//	scanf("%f", &r);
//	double V = 4 * pai*pow(r, 3) / 3;
//	printf("%0.3lf\n", V);
//	return 0;
//}











//int main()//BMI指数
//{
//	int weight = 0;
//	int high = 0;
//	scanf("%d %d", &weight, &high);
//	double h = high / 100.0;
//	double BIMI = weight/pow(h, 2);
//	printf("%0.2lf\n", BIMI);
//	return 0;
//}








//int main()//杨辉三角
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (i == j)
//			{
//				arr[i][0] = 1;
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}






//void comple(char a, char b, char c, char d, char e)//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//{
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1 )== 1)
//						{
//							if (a*b*c*d*e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	char a = 0;
//	char b = 0;
//	char c = 0;
//	char d = 0;
//	char e = 0;
//	comple(a, b, c, d, e);
//	return 0;
//}








//int main()//排查确定杀人凶手
//{
//	char n = 0;
//	for (n = 'a'; n <= 'd'; n++)
//	{
//		if ((n != 'a') + (n == 'c') + (n == 'd') + (n == 'c') == 3)
//		{
//			printf("%c\n", n);
//		}
//	}
//	return 0;
//}








//int SUM(int n)//递归每位之和
//{
//	if (n < 9)
//		return n;
//	else
//		return SUM(n / 10) + n % 10;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = SUM(n);
//	printf("%d\n", sum);
//	return 0;
//}





//int my_strlen(char*arr)//递归字符串反向排列
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//void print(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len-1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		print(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "sdeqwqa";
//	print(arr);
//	printf("%s\n", arr);
//	return 0;
//}







//int my_strlen(char*arr)//递归算出数组长度
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "sdadds";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}








//int find(int n)//递归n的阶乘
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*find(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = find(n);
//	printf("%d\n", ret);
//	return 0;
//}








//int main()//非递归n的阶乘
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sn = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sn = sn*i;
//	}
//	printf("%d\n", sn);
//	return 0;
//}










//void print(int n)//递归打印每一位
//{
//	if (n < 9)
//		printf("%d ", n);
//	else
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}









//void print_table(int n)//函数乘法表
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
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








//void swap(int a, int b)//函数交换
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d", a, b);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	swap(a, b);
//	return 0;
//}











//int prime(int n)//函数判断闰年
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = prime(n);
//	if (ret == 1)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}











//int prime(int n)//函数判断是不是素数
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			break;
//		}
//	}
//	if (n == i)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = prime(n);
//	if (ret == 1)
//		printf("是素数");
//	else
//		printf("不是素数");
//	return 0;
//}









//void print(char*arr, int sz)//函数打印数组
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	char arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}








//int main()//交换两个值
//{
//	int a = 20;
//	int b = 10;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;
//}






//void find(int n)////找奇数位和偶数位
//{
//	int i = 0;
//	printf("奇数位:");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:");
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	find(n);
//	return 0;
//}