#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
void move(char a, int n, char c)//汉诺塔
{
	static int k = 1;
	printf("%d: %c---%c\n", k, a, c);
	if (k++ % 3 == 0)
	{
		printf("\n");
	}
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
	int input = 0;
	scanf("%d", &input);
	char a = 'a';
	char b = 'b';
	char c = 'c';
	Hanio(input, a, b, c);
	return 0;
}







//int main()//冒泡排序
//{
//	int arr[] = { 1, 5, 7, 98, 0, 34, 9, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1-i; j++)
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
//}









//void Init(int arr[], int sz)//数组清零、打印数字、数组置换
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//		printf("%d ", arr[i]);
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int i = 0;
//	int j = sz - 1;;
//	while (i <= j)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		j--;
//		i++;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	return 0;
//}






//int main()//两个数组互内容
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
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}





//int Find(int arr[],int k, int sz)//找下标
//{
//	int left = 0;
//	int right = sz - 1;
//	int n = 0;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int count = Find(arr,k, sz);
//	if (arr[count] == k)
//	{
//		printf("%d\n", count);
//	}
//	else
//	{
//		printf("未找到\n");
//	}
//	return 0;
//}







//int main()//编写代码模拟三次密码输入的场景
//{
//	char guess[20] = { 0 };
//	char password[] = "5201314";
//	int n = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		scanf("%s", &guess);
//		if (strcmp(guess, password) == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (n = 3)
//	{
//		printf("退出程序\n");
//	}
//	return 0;
//}





//int main()//循环打印键盘上的字母
//{
//	printf("请选择输入:");
//	while (1)
//	{
//		int n = 0;
//		scanf("%c", &n);
//		if (n >= 'a'&&n <= 'z')
//		{
//			printf("%c\n", n - 32);
//		}
//		else if (n >= 'A'&&n <= 'Z')
//		{
//			printf("%c\n", n + 32);
//		}
//		else if (n >= '0'&&n <= '9')
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





//int Find(int a, int b)//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//{
//	int c = 0;
//	int i = 0;
//	int count = 0;
//	c = a^b;
//	for (i = 0; i < 32; i++)
//	{
//		if (((c >> i) & 1 )== 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int count = Find(a, b);
//	printf("%d\n", count);
//	return 0;
//}




//void Find(int n)//输出一个整数的每一位
//{
//	if (n < 9)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		Find(n/10);
//		printf("%d ", n%10);
//	}
//}
//int main()
//{
//	int n = 0;//1729
//	int m = 0;
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		m = -n;
//	}
//	Find(m);
//	return 0;
//}




//void Frind(int n)//获取一个数二进制序列中所有的偶数位和奇数位，
//{
//	int i = 0;
//	printf("奇数为:\n");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数为:\n");
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Frind(n);
//	return 0;
//}








//int count_one_bits(unsigned int value)//写一个函数返回参数二进制中 1 的个数
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((value >> i)&1) == 1)
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
//	int count = count_one_bits(n);
//	printf("%d\n", count);
//	return 0;
//}







//int cmp_arr(const void*e1, const void* e2)//冒泡函数，简单版
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[] = { 3, 54, 7, 9, 5, 50, 1, 7, 10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_arr);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_arr1(const void*e1, const void* e2)
//{
//	return (int)(*(double*)e1 - *(double*)e2);
//}
//void test2()
//{
//	double arr1[] = { 2.3, 5.4, 5.7, 9.8, 6.5 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	qsort(arr1, sz, sizeof(arr1[0]), cmp_arr1);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%lf ", arr1[i]);
//	}
//	printf("\n");
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_arr2(const void*e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//int cmp_arr3(const void*e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void test3()
//{
//	struct stu arr2[] = { { "zhangsan", 30 }, { "lisi", 10 }, { "wangwu", 20 } };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	qsort(arr2, sz, sizeof(arr2[0]), cmp_arr2);
//	qsort(arr2, sz, sizeof(arr2[0]), cmp_arr3);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", &arr2[i]);
//	}
//	printf("\n");
//
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}