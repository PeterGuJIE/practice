#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()//ͨѶ¼���հ�
{
	printf("********************************\n");
	printf("*******1.add       2.del    ****\n");
	printf("*******3.search    4.modify ****\n");
	printf("*******5.show      6.sort   ****\n");
	printf("***********  0.exit  ***********\n");
	printf("********************************\n");
}
void test()
{
	int input = 0;
	contact con;
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
			savecontact(&con);
			exitcontact(&con);
			printf("�˳�����\n");
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}






//void find(int n)//������λ��ż��λ
//{
//	int i = 0;
//	printf("����λ:");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ:");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("d", &n);
//	find(n);
//	return 0;
//}






//void print(int arr[], int sz)//������ӡ����
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}



//int main()//��������ֵ
//{
//	int a = 20;
//	int b = 10;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;
//}




//int prime(int n)//�����ж��ǲ�������
//{
//	int i = 0;
//	for (i = 2; i < n - 1; i++)
//	{
//		if (n%i == 0)
//		{
//			break;
//		}
//	}
//	if (n == i)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = prime(n);
//	if (ret == 1)
//	{
//		printf("������");
//	}
//	else
//		printf("��������");
//	return 0;
//}






//int prime(int n)//�����ж�����
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = prime(n);
//	if (ret == 1)
//	{
//		printf("������");
//	}
//	else
//		printf("��������");
//	return 0;
//}



//void swap(int a, int b)//��������
//{
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d", a, b);
//}
//int main()
//{
//	int a = 20;
//	int b = 0;
//	swap(a, b);
//	return 0;
//}





//int main()//�����˷���
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}





//void SUM(int n)//�ݹ��ӡÿһλ
//{
//	if (n < 9)
//	{
//		printf("%d ",n); 
//	}
//	else
//	{
//		SUM(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	SUM(n);
//	return 0;
//}








//int find(int n)//�ݹ�n�Ľ׳�
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





//int my_strlen(char*arr)//�ݹ��ַ�����������
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//void print(char arr[])
//{
//	int len = my_strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		print(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "ascad";
//	print(arr);
//	printf("%s\n", arr);
//	return 0;
//}





//int SUM(int n)//�ݹ�ÿλ֮��
//{
//	if (n < 9)
//	{
//		return n; 
//	}
//	else
//	{
//		return SUM(n / 10) + n % 10;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = SUM(n);
//	printf("%d\n", sum);
//	return 0;
//}







//int main()//�Ų�ȷ��ɱ������
//{
//	char n = 0;
//	for (n = 'a'; n <= 'd'; n++)
//	{
//		if ((n != 'a') + (n == 'c') + (n == 'd') + (n == 'c') ==3)
//		{
//			printf("%c\n", n);
//		}
//	}
//	return 0;
//}






//void comple(char a, char b, char c, char d, char e)//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//{
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1)
//						{
//							if (a*b*c*d*e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	char a = 'a';
//	char b = 'b';
//	char c = 'c';
//	char d = 'd';
//	char e = 'e';
//	comple(a, b, c, d, e);
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
//			if (i == j)
//			{
//				arr[i][j] = 1;
//				arr[i][0] = 1;
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





//int main()//������
//{
//	double d = 3.1415926;
//	float f = 0.0;
//	scanf("%f", &f);
//	double V = 4 * d*pow(f, 3) / 3;
//	printf("%0.2lf\n", V);
//	return 0;
//}








//int main()//�ҳ������
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	int x = a > b ? a : b;
//	int y = c > d ? c : d;
//	printf("%d\n", x > y ? x : y);
//	return 0;
//}





//void swap(char*e1, char*e2, int width)//�Լ���д��ð������
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//}
//void my_qsort(void*base, int sz, int width, int (*cmp)(const void*e1, const void*e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j*width, (char*)base + (j+1)*width)>0)
//			{
//				swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//int cmp_float(const void*e1, const void*e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//int main()
//{
//	float f[] = { 8.0, 9.0, 5.0, 10.0, 12.0, 2.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	my_qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%0.2f ", f[i]);
//	}
//	return 0;
//}







//int main()//һ��������ֻ�����������ǳ���һ��
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}









//int main()//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ
//{
//	int a = 20;
//	int b = a;//��
//	int c = a;//��
//	while (c>1)
//	{
//		b = b + c / 2;
//		c = c / 2 + c % 2;
//	}
//	printf("%d\n", b);
//	return 0;
//}





//void leftmove(char arr1[], int n)//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
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
//	for (i = 0; i < len; i++)
//	{
//		leftmove(arr1, 1);
//		if (0 == strcmp(arr1, arr2))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdf";
//	char arr2[] = "bcdfa";
//	int ret = move(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}






//int count(int n)//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum = sum + ((n >> i) & 1)*(int)pow(2, 31 - i);
//	}
//	return sum;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int ret = count(n);
//	printf("%u\n", ret);
//	return 0;
//}