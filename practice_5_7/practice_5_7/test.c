#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()//猜数字
{
	printf("                             \n");
	printf("           1.play            \n");
	printf("           0.exit            \n");
	printf("                             \n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	firstmine(mine, ROW, COL);
	PlayerMove(mine, show, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test(); 
	return 0;
}









//void menu()//猜数字
//{
//	printf("                             \n");
//	printf("           1.play            \n");
//	printf("           0.exit            \n");
//	printf("                             \n");
//}
//void game()
//{
//	int input = 0;
//	printf("请猜数字\n");
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		scanf("%d", &input);
//		if (input > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (input > ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了!\n");
//			break;
//		}
//	}
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
//			printf("输入错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}








//int SUM(int n, int i)//5项之和
//{
//	int sum = 0;
//	while (i)
//	{
//		sum = sum * 10 + n;
//		i--;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= k; i++)
//	{
//		sum += SUM(n, i);
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}










//char* my_strstr(char*arr1, char*arr2)//my_strstr判断字符串str2是否是str1的子串的函数
//{
//  assert(arr1&&arr2);
//	char*s1,*s2;
//	char*s3 = arr1;//放入s1里面 arr1不动
//	if (*arr2 == '\0')
//	{
//		return arr1;
//	}
//	while (*s3)
//	{
//		s1 = s3;
//		s2 = arr2;
//		while ((*s1&&*s2 != '\0') && *s1 == *s2)
//		{
//			*s1++;
//			*s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return s3;
//		}
//		s3++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcsddd";
//	char arr2[] = "bbcs";
//	char*ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("未找到\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}







//int my_strncmp(const char*arr1, const char*arr2, int n)//my_strcmp比较两个字符串中n个字符函数
//{
//	assert(arr1&&arr2);
//	while (--n&&(*arr1++ = *arr2++))
//	{
//		if (*arr1&&*arr2 == '\0')
//		{
//			return 0;
//		}
//	}
//	return (*arr1 - *arr2);
//	/*if (*arr1 > *arr2)
//		return 1;
//	else
//		return -1;*/
//}
//int main()
//{
//	char arr1[] = "asdf";
//	char arr2[] = "asdfrw";
//	int ret = my_strncmp(arr1, arr2, 5);
//	printf("%d\n", ret);
//	return 0;
//}





//char*my_strncat(char*arr1, const char*arr2, int n)//my_strncat复制n个字符串函数
//{
//	char*ret = arr1;
//	assert(arr1&&arr2);
//	while (*arr1!='\0')
//	{
//		arr1++;
//	}
//	while (n--&&(*arr1++ = *arr2++))
//	{
//		;
//	}
//	*arr1 = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello\0dsad";
//	char arr2[] = "bit";
//	my_strncat(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}








//char* my_strncpy(char*arr1, const char*arr2, int n)//my_strncpy复制n个字符串函数
//{
//	char*ret = arr1;
//	assert(arr1&&arr2);
//	while (n--&&(*arr1++ = *arr2++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "sadhf";
//	char arr2[] = "asda";
//	my_strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}






//int my_strcmp(const char*arr1,const char*arr2)//my_strcmp比较两个字符串函数
//{
//	assert(arr1&&arr2);
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//		{
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	}
//	if (*arr1 > *arr2)//return *arr1-*arr2
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char arr1[] = "adcvbf";
//	char arr2[] = "adcvbf";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}




//char*my_strcat(char*arr1,const char*arr2)//my_strcat连接两个字符串函数
//{
//	char*ret = arr1;
//	assert(arr1&&arr2 != NULL);
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
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}








//char* my_strcpy(char*arr1,const char*arr2)//my_strcpy复制字符串函数
//{
//	char*ret = arr1;
//	assert(arr1&&arr2);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hsad";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}









//int my_strlen(const char *arr)//my_strlen字符串长度函数
//{
//  assert(arr!=NULL);
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "sdafaf";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}









//int find(int arr[3][3], int k, int *row, int *col)//杨氏矩阵
//{
//	int x = 0;
//	int y = *col - 1;
//	while (x<*row&&y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*row = x;
//			*col = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
//	int k = 0;
//	int x = 3;
//	int y = 3;
//	scanf("%d", &k);
//	int ret = find(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标为:%d %d\n",x,y);
//	}
//	else
//		printf("未找到\n");
//	return 0;
//}