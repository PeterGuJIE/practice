#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include"contact.h"
void menu()
{
	printf("***********************************\n");
	printf("********1.add     2.del      ******\n");
	printf("********3.search  4.modify   ******\n");
	printf("********5.show    6.sort     ******\n");
	printf("********0.exit               ******\n");
	printf("***********************************\n");
}
void test()
{
	int input = 0;
	struct contact con;
	initcontact(&con);
	do
	{
		menu();
		printf("��ѡ��:");
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
			modifycontact(&con);
			break;
		case show:
			showcontact(&con);
			break;
		case sort:
			sortcontact(&con);
			break;
		case EXIT:
			printf("�˳�����\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}







//void menu()
//{
//	printf("************\n");
//	printf("***1.play***\n");
//	printf("***0.exit***\n");
//	printf("************\n");
//}
//void game()
//{
//	char mine[ROWS][COLS] = { 0 };
//	char show[ROWS][COLS] = { 0 };
//	initboard(mine, ROWS, COLS, '0');
//	initboard(show, ROWS, COLS, '*');
//	displayboard(mine, ROW, COL);
//	displayboard(show, ROW, COL);
//	setmine(mine, ROW, COL);
//	displayboard(mine, ROW, COL);
//	firstmove(mine, show, ROW, COL);
//	moveboard(mine, show, ROW, COL);
//
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
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}









//int main()//�ֽ��ַ���Ϊһ���ַ���
//{
//	char arr[] = "sad@sd.sa";
//	char*p = "@.";
//	//char buf[1024] = { 0 };
//	//strcpy(buf, arr);
//	char*ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}









//int main()//��дתСд
//{
//	char arr[] = "I AM A STUDENT";
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}











//void*my_memcpy(void*arr2, void*arr1, int n)//my_memcpy���� n���ֽڵ��洢��
//{
//	assert(arr1&&arr2);
//	char*ret = arr2;
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
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int arr2[20] = { 0 };
//
//	my_memcpy(arr2, arr1, 20);
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}






//void*my_memmove(void*arr2, void*arr1, int n)//�ڴ濽���ĺ���
//{
//	assert(arr2&&arr1);
//	char*ret = arr2;
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
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	my_memmove(arr + 2, arr, 20);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}








//int my_memcmp(void*arr1, void*arr2, int n)//my_memcmp�Ѵ洢�� str1�ʹ洢�� str2��ǰ n���ֽڽ��бȽ�
//{
//	assert(arr1&&arr2);
//	while (n--)
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
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 1, 2, 3, 4 ,5};
//	int ret = my_memcmp(arr1, arr2, 16);
//	printf("%d\n", ret);
//	return 0;
//}








//int cmp_double(const void*e1, const void*e2)//ð�ݺ�����
//{
//	return (int)(*(double*)e1 - *(double*)e2);
//}
//int main()
//{
//	double d[] = { 2.3, 5.8, 5.7, 9.8, 6.5 };
//	int sz = sizeof(d) / sizeof(d[0]);
//	qsort(d, sz, sizeof(d[0]), cmp_double);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%0.2lf ", d[i]);
//	}
//	return 0;
//}









//void init(int arr[], int sz)//�������㡢��ӡ���֡������û�
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void  Reverse(int arr[], int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//	while (i < j)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*init(arr, sz);*/
//	Reverse(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}









//int main()//�������黥����
//{
//	char arr1[] = "sadd";
//	char arr2[] = "sdaw";
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("%s\n%s", arr1, arr2);
//	return 0;
//}







//int find(int arr[], int k,int len)//���±�
//{
//	
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]>k)
//		{
//			right--;
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
//	int k = 3;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = find(arr, k,sz);
//	printf("%d\n", ret);
//	return 0;
//}





//int main()//��д����ģ��������������ĳ���
//{
//	char guess[20] = { 0 };
//	char password[] = "5201314";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", guess);
//		if (strcmp(guess, password) == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��¼ʧ��\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�˳�����\n");
//	}
//	return 0;
//}






//int main()//ѭ����ӡ�����ϵ���ĸ
//{
//	printf("������:");
//	while (1)
//	{
//		char n = 0;
//		scanf("%c", &n);
//		if (n >= 'a'&&n <= 'z')
//		{
//			printf("%c\n", n - 32);
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






//int find(int a, int b)//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//{
//	int c = a^b;
//	int count = 0;
//	int i = 0;
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
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = find(a, b);
//	printf("%d\n", ret);
//	return 0;
//}








//void find(int n)//���һ��������ÿһλ
//{
//	if (n < 9)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		find(n / 10);
//		printf("%d ", n%10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	find(n);
//	return 0;
//}







//void find(int n)//��ȡһ�������������������е�ż��λ������λ
//{
//	int i = 0;
//	printf("����Ϊ:");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", ((n >> i) & 1));
//	}
//	printf("\n");
//	printf("ż��Ϊ:");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", ((n >> i) & 1));
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	find(n);
//	return 0;
//}








//int Find(int n)//дһ���������ز����������� 1 �ĸ���
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
//	int count = Find(n);
//	printf("%d\n", count);
//	return 0;
//}






//void swap(char*left, char*right, int width)//ð�ݺ���������
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		*right++; 
//		*left++;
//	}
//}
//void my_qsort(void*d, int sz, int width, int(*cmp)(void*e1, void*e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - 1-i; j++)
//		{
//			if (cmp((char*)d + j*width, (char*)d + (j + 1)*width)>0)
//			{
//				swap((char*)d + j*width, (char*)d + (j + 1)*width, width);
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
//	double d[] = { 2.3, 5.4, 5.7, 9.8, 6.5 };
//	int sz = sizeof(d) / sizeof(d[0]);
//	my_qsort(d, sz, sizeof(d[0]), cmp_double);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%0.2lf ", d[i]);
//	}
//	return 0;
//}









//void left_move(char*arr1, int n)//ʵ��һ�����������������ַ����е�k���ַ�
//{
//	int len = strlen(arr1);
//	int i = 0;
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
//int main()
//{
//	char arr1[] = "abcd";
//	int n = 3;
//	left_move(arr1, n);
//	printf("%s\n", arr1);
//	return 0;
//}






//void left_move(char*arr1, int n)//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
//{
//	int len = strlen(arr1);
//	int i = 0;
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
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(arr1, 1);
//		if (0 == strcmp(arr1, arr2))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "bcda";
//	int ret = move(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}