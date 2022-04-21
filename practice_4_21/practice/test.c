#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
int main()//模拟三次登录
{
	int n = 0;
	char password[20] = { 0 };
	for (n = 0; n < 3; n++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password,"123456") ==0)
		{
			printf("密码正确\n");
		}
	}
	if (n == 3)
	{
		printf("密码错误\n");
	}
	return 0;
}


//int main()//多字符从两端移动
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];	
//		Sleep(1000);
//		left++;
//		right--;
//		system("cls");
//		printf("%s\n", arr2);
//		
//	}
//	return 0;
//}


//int main()//寻找某个具体数字n
//{
//	char arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n =5;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid]<n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到数字，下标为：%d\n", mid);
//			break;
//		}
//			
//	}
//	if (left > right)
//		printf("未找到数字\n");
//	return 0;
//}


//int main()//1!+10!阶乘
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}



//int main()//n的阶乘
//{
//	int n = 0;
//	int a = 0;
//	int ret = 1;
//	scanf("%d", &a);
//	for (n = 1; n <= a; n++)
//	{
//		ret = ret*n;
//
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//
//}