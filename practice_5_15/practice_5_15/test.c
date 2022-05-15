#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()
{
	printf("**********************************\n");
	printf("********1.add      2.del   *******\n");
	printf("********3.search   4.modify  *****\n");
	printf("********5.show     6.sort  *******\n");
	printf("********      0.exit       *******\n");
	printf("**********************************\n");
}
void test()
{
	int input = 0;
	contact con;
	initcontact(&con);
	do
	{
		
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			addcontact(&con);
			break;
		case del:
			delcontact(&con);
			break;
		case search:
			searchcontact(&con);
			break;
		case modify:
			modiftcontact(&con);
			break;
		case show:
			showcontact(&con);
			break;
		case sort:
			sortcontact(&con);
			break;
		case EXIT:
			savecontact(&con);
			exitcontact(&con);
			printf("退出程序\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


//int find(int n)//青蛙跳台阶
//{
//	if (n < 3)
//		return n;
//	else
//		return find(n - 1) + find(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = find(n);
//	printf("%d\n", ret);
//	return 0;
//}





//int find(int n)//递归实现求第n个斐波那契数
//{
//	if (n <= 2)
//		return 1;
//	else
//		return find(n - 1) + find(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = find(n);
//	printf("%d\n", ret);
//	return 0;
//}









//int power(int n, int k)//编写一个函数实现n^k，使用递归实现
//{
//	if (k < 0)
//	{
//		return 1.0 / (power(n, -k));
//	}
//	else if (k == 0)
//		return 1;
//	else
//		return n* power(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = power(n, k);
//	printf("%d\n", ret);
//	return 0;
//}






//int  DigitSum(int n)// 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
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
//	int len = my_strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "dsaera";
//	reverse_string(arr);
//	printf("%s\n",arr);
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
//	char arr[] = "dsaera";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}







//void find(int arr[], int sz)//奇数在前，偶数在后
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
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
//	int arr[] = { 1, 23, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






//int main()//喝汽水，1瓶1元，2空瓶换一个汽水，20元可以喝多少
//{
//	int a = 20;
//	int b = a;
//	int c = a;
//	while (c>1)
//	{
//		b = b + c / 2;
//		c = c / 2 + c % 2;
//	}
//	printf("%d\n", b);
//	return 0;
//}






//int main()//打印图案
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <n-i-1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (n - i - 1)-1; j++)
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
//		int count = 1;
//		int ret = 0;
//		while (tmp/10)
//		{
//			tmp = tmp / 10;
//			count++;
//		}
//		tmp = n;
//		while (tmp)
//		{
//			ret = ret + (int)pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (ret == n)
//		{
//			printf("%d ", n);
//		}
//	}
//
//	return 0;
//}









//int main()//5项之和
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int i = 0;
//	int sum = 0;
//	int sn = 0;
//	for (i = 0; i < k; i++)
//	{
//		sn = sn * 10 + n;
//		sum = sum + sn;
//	}
//	printf("%d\n", sum);
//	return 0;
//}










//void sever(char arr[])//数组逆序
//{
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "acdsew";
//	sever(arr);
//	printf("%s\n", arr);
//	return 0;
//}






//int find(int n)//递归实现求n的阶乘
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*find(n - 1);
//	}
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
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		print(n/10);
//		printf("%d ", n%10);
//	}
//}
//int main()
//{
//	int n = 1729;
//	print(n);
//	return 0;
//}







//int main()//找二进制中的1
//{
//	int a = 10;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}








//int main()//找出两个二进制的不同数
//{
//	int a = 10;
//	int b = 20;
//	int c = a^b;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((c >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}








//char* my_strcpy(char*arr1, const char*arr2)//模拟实现strcpy
//{
//	assert(arr1&&arr2);
//	char*ret = arr1;
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "sadas";
//	char arr2[] = "rqe";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}






//char* my_strcat(char*arr1,const char*arr2)//模拟实现strcat
//{
//	assert(arr1&&arr2);
//	char*ret = arr1;
//	while (*arr1 != '\0')
//	{
//		arr1++;
//	}
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "sadas";
//	char arr2[] = "rqe";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}