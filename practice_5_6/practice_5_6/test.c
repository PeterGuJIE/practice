#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()//杨辉三角
{
	int arr[ROW][COL] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j <=i; j++)
		{
			if (i == j)
			{
				arr[i][j] = 1;
				arr[i][0] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}







//void move(int arr[], int sz)//调整数组使奇数全部都位于偶数前面。
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz; j++)
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
//	int arr[] = { 1, 2, 3, 4, 5, 2, 35, 7, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}








//void menu()
//{
//	printf("                         \n");
//	printf("          1.play         \n");
//	printf("          0.exit         \n");
//	printf("                         \n");
//}
//void game()
//{
//	int ret = 0;
//	char board[ROW][COL] = { 0 };
//	InitBoard(board, ROW, COL);
//	DisplayBoard(board, ROW, COL);
//	while (1)
//	{
//		MoveBorad(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'c')
//		{
//			break;
//		}
//		ComputerBoard(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'c')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//		printf("玩家赢");
//	else if (ret == '#')
//		printf("电脑赢");
//	else
//		printf("平局");
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
//





//int SUM(int a, int i)//前5项之和
//{
//	int sum = 0;
//	while (i>0)
//	{
//		sum = sum * 10 + a;
//		i--;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	int k = 0;
//	scanf("%d %d", &a, &k);
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= k; i++)
//	{
//		sum =sum+ SUM(a, i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}







//int main()//水仙花
//{
//	int n = 0;
//	for (n = 1; n <= 10000; n++)
//	{
//		int tmp = n;
//		int count = 0;
//		int ret = 0;
//		while (tmp)
//		{
//			tmp = tmp / 10;
//			count++;
//		}
//		tmp = n;
//		while (tmp)
//		{
//			ret += (int)pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (ret == n)
//		{
//			printf("%d ", ret);
//		}
//	}
//	return 0;
//}










//int main()//找单一数字
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < sz ; j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//		}
//		if (count == 1)
//			printf("%d\n", arr[i]);
//	}
//	return 0;
//}











//void left_move(char arr1[], int k)//判断两个字符串左右旋后是否一样
//{
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i < k; i++)
//	{
//		int j = 0;
//		char tmp = arr1[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len-1] = tmp;
//	}
//}
//int move(char arr1[], char arr2[])
//{
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i < len; i++)
//	{
//		left_move(arr1, 1);
//		int ret = strcmp(arr1, arr2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = move(arr1, arr2);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}






//void left_move(char arr[], int k)//左旋字符abcd-->cdab
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		int j = 0;
//		char tmp = arr[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len-1] = tmp;
//	}
//}
//void severse(char*left, char*right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		right--;
//		left++;
//	}
//}
//void left_move(char* arr, int k)
//{
//	int len = strlen(arr);
//	severse(arr, arr + k - 1);
//	severse(arr + k, arr + len - 1);
//	severse(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}








//int my_strlen(char*arr)//有一个字符数组的内容为:"student a am i", 请你将数组的内容改为"i am a student".
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
//	char arr[] = "student a am i";
//	reverse_string(arr);
//	int i = 0;
//	int left = 0;
//	int right = 0;
//	int ret = my_strlen(arr)-1;
//	for (i = 0; i < ret;i++)
//	{
//		if (arr[i] != ' ')
//		{
//			left = i;
//			while (arr[i] && arr[i + 1] != ' ')
//			{
//				i++;
//			}
//		}
//		right = i - 1;
//		char tmp = 0;
//		while (left < right)
//		{
//			char tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//	printf("%s", arr);
//	return 0;
//}








//int main()//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^ arr[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}





//int main() //不使用（a + b） / 2这种方式，求两个数的平均值
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a, &b);
//	int ret = a - (a - b) / 2;
//	printf("%d\n", ret);
//	return 0;
//}