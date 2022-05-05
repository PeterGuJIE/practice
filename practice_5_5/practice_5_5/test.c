#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void move(char a, int n, char c)//汉诺塔问题
{
	static k = 1;
	printf("%d: %c---%c\n", k, a, c);
	if (k++ % 3 == 0)
		printf("\n");
}
void Hanio(int n, char a, char b, char c)
{
	if (n == 1)
	{
		move(a, b, c);
	}
	else
	{
		Hanio(n - 1, a, c, b);
		move(a, b, c);
		Hanio(n - 1, b, a, c);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	char a = 'a';
	char b = 'b';
	char c = 'c';
	Hanio(n, a, b, c);
	return 0;
}








//void empty(int arr[], int sz)//初始化数组、清空数组、函数完成数组元素的逆置
//{
//	int n = 0;
//	for (n = 0; n < sz; n++)
//	{
//		arr[n] = 0;
//		printf("%d ", arr[n]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int i = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 23, 4, 5, 67, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*empty(arr, sz);*/
//	reverse(arr, sz);
//	return 0;
//}








//int find_count(int n)//未递归斐波那契数
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		int i = 0;
//		int a = 1;
//		int b = 1;
//		int tmp = 0;
//		for (i = 3; i <= n; i++)
//		{
//			tmp = a + b;
//			a = b;
//			b = tmp;
//		}
//		return tmp;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = find_count(n);
//	printf("%d\n", ret);
//	return 0;
//}









//int step_time(int n)//青蛙跳台阶
//{
//	if (n < 3)
//		return n;
//	else
//		return step_time(n - 1) + step_time(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = step_time(n);
//	printf("%d\n", ret);
//	return 0;
//}












//int FindCount(int n)//递归实现求第n个斐波那契数
//{
//	if (n == 2)
//		return 1;
//	else
//		return FindCount(n - 1) + FindCount(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = FindCount(n);
//	printf("%d\n", ret);
//	return 0;
//}









//int Power(int n, int k)//编写一个函数实现n^k，使用递归实现
//{
//	if (k < 0)
//		return (1.0 / (Power(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n*Power(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Power(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}









//int DigitSum(int n)// 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//{
//	if (n < 9)
//		return n;
//	else
//		return DigitSum(n / 10) + n % 10;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}






//int my_strlen(char*arr)//编写一个函数reverse_string（递归实现）
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int count = my_strlen(arr);
//	arr[0] = arr[count - 1];
//	arr[count - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[count - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "qweqwe";
//	reverse_string(arr);
//	printf("%s ", arr);
//	return 0;
//}











//int my_strlen(char*arr)//非递归实现strlen
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "qweqwe";
//	int count = my_strlen(arr);
//	printf("%d\n", count);
//	return 0;
//}










//int my_strlen(char*arr)//递归实现strlen
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "qweqwe";
//	int count = my_strlen(arr);
//	printf("%d\n", count);
//	return 0;
//}






//void find_count(int arr[], int sz)//奇数在前，偶数在后
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i] % 2 == 1 && arr[j] % 2 == 0)
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 45, 6, 7, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_count(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






//int main()//喝汽水，1瓶1元，2空瓶换一个汽水，20元可以喝多少
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = 0;//喝
//	int c = 0;//空
//	b = a;
//	c = a;
//	while (c >= 2)
//	{
//		b = b + c / 2;
//		c = c % 2 + c / 2;
//	}
//	printf("%d\n", b);
//	return 0;
//}






//int main()//打印图案
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <n-i-1 ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*(n-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}





//int main()//水仙花数
//{
//	int n = 0;
//	for (n = 1; n <= 10000; n++)
//	{
//		int tmp = n;
//		int ret = 0;
//		int count = 1;
//		while (tmp/10)
//		{
//			tmp = tmp / 10;
//			count++;
//		}
//		tmp = n;
//		while (tmp)
//		{
//			ret =ret+ (int)pow(tmp % 10, count);
//			tmp = tmp / 10; 
//		}
//		if (ret == n)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}






//int main()//5项之和
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ret = ret * 10 + n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}





//void sever(char*arr)//数组逆序
//{
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	char arr[300] = { 0 };
//	gets(arr);
//	sever(arr);
//	printf("%s\n", arr);
//	return 0;
//}





//int main()//非递归实现求n的阶乘
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum*i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}






//int find(int n)//递归实现求n的阶乘
//{
//	if (n == 1)
//		return n;
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








//void print(int n)//递归方式实现打印一个整数的每一位
//{
//	if (n < 9)
//		printf("%d ",n);
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






//void find_count(int n)//找二进制中的1
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
//	printf("%d\n", count);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	find_count(n);
//	return 0;
//}










//void is_count(int a, int b)//找出两个二进制的不同数
//{
//	int c = a^b;
//	int n = 0;
//	int count = 0;
//	for (n = 0; n < 32; n++)
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
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	is_count(a, b);
//	return 0;
//}