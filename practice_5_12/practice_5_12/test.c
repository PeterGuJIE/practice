#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
char*my_strchr(char*arr1,char arr2)//my_strchr�ַ���arr1�в����ַ�arr2
{
	assert(arr1&&arr2);
	while (*arr1 != '\0')
	{
		if (*arr1 == arr2)
		{
			return  arr1;
		}
		arr1++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "avdfvdsad";
	char arr2 = 'f';
	char*ret = my_strchr(arr1, arr2);
	if (ret != NULL)
	{
		printf("%s\n", ret);
	}
	else
	{
		printf("%s\n", ret);
	}
}





//void* my_memmove(void*arr2, void*arr1, int n)//my_memmoveԴ���ڱ�����֮ǰ���ص�������ֽڿ�����Ŀ����
//{
//	void*ret = arr2;
//	assert(arr2&&arr1);
//	if (arr2 < arr1)
//	{
//		while (n--)
//		{
//			*(char*)arr2 = *(char*)arr1;
//			++(char*)arr2;
//			++(char*)arr1;
//		}
//	}
//	else
//	{
//		while (n--)
//		{
//			*((char*)arr2 + n) = *((char*)arr1 + n);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(arr1+3, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}










//void* my_memcpy(void*arr2, void*arr1, int n)//my_memcpy�ڴ��ַ����ʼλ�ÿ�ʼ����n���ֽ�
//{
//	void*ret = arr2;
//	assert(arr2&&arr1);
//	while (n--)
//	{
//		*(char*)arr2 = *(char*)arr1;
//		++(char*)arr2;
//		++(char*)arr1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}













//void menu()//ͨѶ¼
//{
//	printf("***********************************\n");
//	printf("*******1.add       2.del    *******\n");
//	printf("*******3.search    4.modify *******\n");
//	printf("*******5.show      6.sort   *******\n");
//	printf("*******0.exit               *******\n");
//	printf("***********************************\n");
//}
//void test()
//{
//	int input = 0;
//	struct contact con;
//	Initcontact(&con);
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case add:
//			addcontact(&con);
//			break;
//		case del:
//			delcontact(&con);
//			break;
//		case search:
//			searchcontact(&con);
//			break;
//		case modify:
//			modifycontact(&con);
//			break;
//		case show:
//			showcontact(&con);
//			break;
//		case sort:
//			sortcontact(&con);
//			break;
//		case EXIT:
//			freecontact(&con);
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�������������ѡ��\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}







//int find(int arr[3][3], int k, int* a, int* b)//���Ͼ���
//{
//	int x = 0;
//	int y = *b - 1;
//	while (x<*a&&y>=0)
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
//			*a = x;
//			*b = y;
//			return 1;
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 5;
//	int x = 3;
//	int y = 3;
//	int ret = find(arr, k,&x, &y);
//	if (ret == 1)
//	{
//		printf("%d %d\n", x, y);
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("δ�ҵ�\n");
//	}
//	return 0;
//}







//int my_strlen(const char *arr)//my_strlen�ַ������Ⱥ���
//{
//	assert(arr);
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "avcd";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}







//char*my_strcpy(char*arr1, const char*arr2)//my_strcpy���������ַ�������
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
//	char arr1[] = "avcd";
//	char arr2[] = "avcd";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}






//char*my_strcat(char*arr1, const char*arr2)//my_strcat���������ַ�������
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
//	char arr1[30] = "avcd";
//	char arr2[] = "avcd";
//	my_strcat(arr1, arr2);
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
//	char arr1[] = "avcd";
//	char arr2[] = "avcd";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}








//char* my_strncpy(char*arr1, const char*arr2, int n)//my_strncpy����n���ַ�������
//{
//	assert(arr1&&arr2);
//	char*ret = arr1;
//	while (n-- && (*arr1++ = *arr2++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "avcd";
//	char arr2[] = "adce";
//	my_strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}






//char*my_strncat(char*arr1, const char*arr2, int n)//my_strncat����n���ַ�������
//{
//	assert(arr1&&arr2);
//	char*ret = arr1;
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
//	char arr1[30] = "avcd";
//	char arr2[] = "avce";
//	my_strncat(arr1, arr2,2);
//	printf("%s\n", arr1);
//	return 0;
//}






//int my_strncmp(char*arr1, char*arr2,int n)//my_strncmp�Ƚ������ַ�����n���ַ�����
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
//	char arr1[] = "avcd";
//	char arr2[] = "avce";
//	int ret = my_strncmp(arr1, arr2,4);
//	printf("%d\n", ret);
//	return 0;
//}




//char*my_strstr(char*arr1, char*arr2)//my_strstr�ж��ַ���str2�Ƿ���str1���Ӵ��ĺ���
//{
//	assert(arr1&&arr2);
//	char*s1 = arr1;
//	char*s2;
//	char*s3;
//	if (*arr2 == '\0')
//	{
//		return arr1;
//	}
//	while (s1)
//	{
//		s2 = s1;
//		s3 = arr2;
//		while ((*s2 == *s3) && (*s2&&*s3 != '\0'))
//		{
//			s2++;
//			s3++;
//		}
//		if (*s3 == '\0')
//		{
//			return s1;
//		}
//		s1++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdfdfh";
//	char arr2[] = "bcdf";
//	char*ret = my_strstr(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}









//int main()//5��֮��
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int sum = 0;
//	int i = 0;
//	int sn = 0;
//	for (i = 1; i <= k; i++)
//	{
//		sum = sum * 10 + n;
//		sn = sn + sum;
//	}
//	printf("%d\n", sn);
//	return 0;
//}











//void menu()//������
//{
//	printf("**************\n");
//	printf("****1.play****\n");
//	printf("****0.exit****\n");
//	printf("**************\n");
//}
//void game()
//{
//	int input = 0;
//	printf("����������:");
//	int i = rand() % 100 + 1;
//	while (1)
//	{
//		scanf("%d", &input);
//		if (input > i)
//		{
//			printf("�´���\n");
//		}
//		else if (input < i)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���!\n");
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
//			printf("�������������ѡ��\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}