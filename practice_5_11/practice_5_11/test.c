#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
char* my_strstr(char*arr1, char*arr2)//my_strstr�ж��ַ���str2�Ƿ���str1���Ӵ��ĺ���
{
	assert(arr1&&arr2);
	char*s1 = arr1;
	char*s2;//arr1
	char*s3;//arr2
	if (*arr2 == '\0')
		return arr1;
	while (*s1)
	{
		s2 = s1;
		s3 = arr2;
		while ((*s2&&*s3 != '\0') && (*s2 == *s3))
		{
			s2++;
			s3++;
		}
		if (*s3 == '\0')
		{
			return s1;
		}
		s1++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abbcde";
	char arr2[] = "bbcd";
	char* ret = my_strstr(arr1, arr2);
	printf("%s\n", ret);
	return 0;
}





//int my_strncmp(const char*arr1, const char*arr2, int n)//my_strcmp�Ƚ������ַ�����n���ַ�����
//{
//	assert(arr1&&arr2);
//	while (n--)
//	{
//		if (*arr1 == *arr2)
//		{
//			arr1++;
//			arr2++;
//		}
//		else
//		{
//			if (*arr1 > *arr2)
//				return 1;
//			else
//				return -1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abdcde";
//	char arr2[] = "abbcd";
//	int ret = my_strncmp(arr1, arr2, 5);
//	printf("%d\n", ret);
//	return 0;
//}






//char* my_strncat(char*arr1, const char*arr2, int n)//my_strncat����n���ַ�������
//{
//	assert(arr1&&arr2);
//	char* ret = arr1;
//	while (*arr1 != '\0')
//	{
//		arr1++;
//	}
//	while (n-- && (*arr1++ = *arr2++))
//	{
//		;
//	}
//	*arr1 = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "saddas";
//	char arr2[] = "asdwe";
//	my_strncat(arr1, arr2, sizeof(arr2));
//	printf("%s\n", arr1);
//	return 0;
//}








//char* my_strncpy(char*arr1, const char*arr2, int n)//my_strncpy����n���ַ�������
//{
//	assert(arr1&&arr2);
//	char*ret = arr1;
//	while (n--&&(*arr1++ = *arr2++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "saddas";
//	char arr2[] = "asdwe";
//	my_strncpy(arr1, arr2, sizeof(arr2));
//	printf("%s\n", arr1);
//	return 0;
//}








//int my_strcmp(char*arr1, char*arr2)//my_strcmp�Ƚ������ַ�������
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
//	if (*arr1 > *arr2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "abcdef";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}









//void menu()//������
//{
//	printf("*****************\n");
//	printf("******1.play*****\n");
//	printf("******0.exit*****\n");
//	printf("*****************\n");
//}
//void game()
//{
//	int ret = 0;
//	char arr[ROW][COL] = { 0 };
//	Initboard(arr,ROW,COL);
//	Displayerboard(arr, ROW, COL);
//	while (1)
//	{
//		Moveboard(arr, ROW, COL);
//		Displayerboard(arr, ROW, COL);
//		ret = Iswin(arr, ROW, COL);
//		if (ret != 'c')
//		{
//			break;
//		}
//		Computerboard(arr, ROW, COL);
//		Displayerboard(arr, ROW, COL);
//		ret = Iswin(arr, ROW, COL);
//		if (ret != 'c')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//		printf("���Ӯ\n");
//	else if (ret == '#')
//		printf("����Ӯ\n");
//	else
//		printf("ƽ��\n");
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}







//int main()//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = a - (a - b) / 2;
//	printf("%d\n", sum);
//	return 0;
//}






//int my_strlen(char*arr)//��һ���ַ����������Ϊ:"student a am i", ���㽫��������ݸ�Ϊ"i am a student"
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//void move(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		move(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "student a am i";
//	move(arr);
//	//printf("%s\n", arr);
//	int left = 0;
//	int right = 0;
//	int len = my_strlen(arr);
//	int i = 0;
//	for (i = 0; i < len-1; i++)
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
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//	printf("%s\n", arr);
//	return 0;
//}









//void left_move(char*arr1, int n)//�ж������ַ������������Ƿ�һ��
//{
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		char tmp = arr1[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//	}
//}
//int move(char*arr1, char*arr2)
//{
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i < len-1; i++)
//	{
//		left_move(arr1, 1);
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = { 0 };
//	scanf("%s %s", arr1, arr2);
//	int ret = move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("������һ��\n");
//	}
//	else
//		printf("δ�ҵ�\n");
//	return 0;
//}







//int main()//�ҵ�һ����
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}












//int main()//ˮ�ɻ�
//{
//	int n = 0;
//	for (n = 1; n <= 10000; n++)
//	{
//		int tmp = n;
//		int count = 1;
//		int ret = 0;
//		while (tmp/10)
//		{
//			tmp /= 10;
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
//	return 0;
//}








//int SUM(int n, int i)//ǰ5��֮��
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
//		sum  = sum + SUM(n, i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}







//void findcount(int arr[], int sz)////��������ʹ����ȫ����λ��ż��ǰ��
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
//	int arr[] = { 1, 3, 43, 5, 4634, 54, 567 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	findcount(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}








//int main()//�������
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == i)
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