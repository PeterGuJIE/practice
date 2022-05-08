#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<assert.h> 
#include<stdlib.h>
void left_move(char*arr1, int n)//判断一个字符串是否为另外一个字符串旋转之后的字符串。
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
int move(char*arr1, char*arr2)
{
	int i = 0;
	int len = strlen(arr1);
	for (i = 0; i < len; i++)
	{
		left_move(arr1, 1);
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
	char arr1[20] = {0};
	char arr2[20] = {0};
	scanf("%s %s", arr1, arr2);
	int ret = move(arr1, arr2);
	printf("%d\n", ret);
	return 0;
}








//void left_move(char *arr, int n)//实现一个函数，可以左旋字符串中的k个字符
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		char tmp = arr[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	int n = 0;
//	char arr[] = "ABCD";
//	scanf("%d",&n);
//	left_move(arr, n);
//	printf("%s\n", arr);
//	return 0;
//}











//void Swap(char*e1, char*e2, int width)//冒泡函数，复杂
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		*e1++;
//		*e2++;
//	}
//}
//void my_qsort(void*arr1, int sz, int width, int (*cmp)(void*e1, void*e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)arr1 + j*width, (char*)arr1 + (j + 1) * width)>0)
//			{
//				Swap((char*)arr1 + j*width, (char*)arr1 + (j + 1) * width, width);
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
//	double arr1[] = { 2.3, 5.4, 5.7, 9.8, 6.5 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	my_qsort(arr1, sz, sizeof(arr1[0]), cmp_double);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%0.2lf ", arr1[i]);
//	}
//	return 0;
//}









//int count_one_bits(int n)//写一个函数返回参数二进制中 1 的个数
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
//	int ret = count_one_bits(n);
//	printf("%d\n", ret);
//	return 0;
//}







//void find(int n)//获取一个数二进制序列中所有的偶数位和奇数位
//{
//	int i = 0;
//	printf("奇数为:");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数为:");
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








//void find(int n)//输出一个整数的每一位
//{
//	if (n < 9)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		find(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	find(n);
//	return 0;
//}









//int Find(int n, int m)//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//{
//	int c = 0;
//	c = n^m;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((c >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 50;
//	int m = 500;
//	int ret = Find(n, m);
//	printf("%d\n", ret);
//	return 0;
//}








//int main()//循环打印键盘上的字母
//{
//	printf("请输入:");
//	while (1)
//	{
//		char n = 0;
//		scanf("%c", &n);
//		if (n >= 'a'&&n <= 'z')
//		{
//			printf("%c\n", n-32);
//		}
//		else if (n >= 'A'&&n <= 'Z')
//		{
//			printf("%c\n", n + 32);
//		}
//		else if (n >= '1'&&n <= '9')
//		{
//			printf("%c\n", n);
//		}
//		else
//		{
//			;
//		}
//	}
//	return 0;
//}









//int main()//编写代码模拟三次密码输入的场景
//{
//	char guess[20] = { 0 };
//	char password[] = "5201314";
//	int n = 0;
//	for (n = 0; n < 3; n++)
//	{
//		scanf("%s", guess);
//		if (strcmp(guess, password) == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误请重新输入\n");
//		}
//	}
//	if (n == 3)
//	{
//		printf("退出程序\n");
//	}
//	return 0;
//}








//int Find(int arr[], int k,int sz)//找下标
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]>k)
//		{
//			right++;
//		}
//		else if (arr[mid] < k)
//		{
//			left++;
//		}
//		else
//			return mid;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int k =16;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Find(arr, k, sz);
//	if (ret != 0)
//	{
//		printf("%d\n", ret);
//	}
//	else
//		printf("找不到\n");
//	return 0;
//}










//int main()//两个数组互内容
//{
//	char arr1[] = "abcd";
//	char arr2[] = "bcde";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		char tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("%s %s\n", arr1, arr2);
//	return 0;
//}











//void Init(int arr[], int sz)//数组清零、打印数字、数组置换
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//	while (i < j)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		j--;
//		i++;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*Init(arr, sz);*/
//	Reverse(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}








//int cmp(const void*e1, const void*e2)//冒泡函数简单
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//int main()
//{
//	float f[] = { 9.0, 8.0, 5.0, 10.0, 31.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%0.2f ", f[i]);
//	}
//	return 0;
//}








//void move(char a, int i, char c)//汉诺塔
//{
//	static int k = 1;
//	printf("%d: %c---%c\n", k, a, c);
//	if (k++ % 3 == 0)
//		printf("\n");
//}
//void Hanio(int i, char a, char b, char c)
//{
//	if (i == 1)
//	{
//		move(a, b, c);
//	}
//	else
//	{
//		Hanio(i - 1, a, c, b);
//		move(a, b, c);
//		Hanio(i - 1, b, a, c);
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	char a = 'a';
//	char b = 'b';
//	char c = 'c';
//	Hanio(i, a, b, c);
//	return 0;
//}









//int my_memcmp(void*arr1, void*arr2, int count)//把存储区 str1和存储区 str2的前 n个字节进行比较
//{
//	assert(arr1&&arr2);
//	while (count--)
//	{
//		if (*(char*)arr1 == *(char*)arr2)
//		{
//			++(char*)arr1;
//			++(char*)arr2;
//		}
//		else if (*(char*)arr1 > *(char*)arr2)
//			return 1;
//		else
//			return -1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4};
//	int arr2[] = { 1, 2, 4, 4, 5 };
//	int ret = my_memcmp(arr1, arr2, 10);
//	printf("%d\n", ret);
//	return 0;
//}








//void* my_memmove(void*arr2, void*arr1, int count)//内存拷贝的函数
//{
//	assert(arr2&&arr1);
//	char*ret = arr2;
//	if (arr2<arr1)
//	{
//		while (count--)
//		{
//			*(char*)arr2 = *(char*)arr1;
//			++(char*)arr2;
//			++(char*)arr1;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)arr2 + count) = *((char*)arr1 + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(arr1, arr1+3, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}










//void* my_memcpy(void*arr2,const void*arr1, int n)//my_memcpy复制 n个字节到存储区
//{
//	assert(arr1&&arr2);
//	char*ret = arr2;
//	while (n--)
//	{
//		*(char*)arr2 = *(char*)arr1;
//		++(char*)arr1;
//		++(char*)arr2;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	int i = 0;
//	for (i = 0; i < 8; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}






//int main()//大写转小写
//{
//	char arr[] = "I AM A Student";
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);//toupper
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}









//int main()//分解字符串为一组字符串
//{
//	char arr[] = "sadfa@dasd.com";
//	char*p = "@.";
//	char buf[2014] = { 0 };
//	strcpy(buf, arr);
//	char*ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}






//int main()
//{
//	int num[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = &num[2];
//	*p++; ++*p; p++; ++p;
//	printf("%d\n", *p);
//	return 0;
//}