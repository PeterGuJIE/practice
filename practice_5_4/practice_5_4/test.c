#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ROW 10
#define COL 10
void Find_count(int n)//������λ��ż��λ
{
	int a = 0;
	printf("����Ϊ:");
	for (a = 30; a >= 0; a -= 2)
	{
		printf("%d ", (n >> a) & 1);
	}
	printf("\n");
	printf("ż��Ϊ:");
	for (a = 31; a >= 1; a -= 2)
	{
		printf("%d ", (n >> a) & 1);
	}
	printf("\n");
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Find_count(n);
	return 0;
}






//int main()//��������ֵ
//{
//	int a = 10;
//	int b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}





//void print(int *p, int sz)//������ӡ����
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}







//void prime(int n)//�����ж��ǲ�������
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			printf("��������\n");
//			break;
//		}
//		if (n%i != 0)
//		{
//			printf("������\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	prime(n);
//	return 0;
//}







//void is_year(n)//�����ж�����
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//	{
//		printf("������\n");
//	}
//	else
//		printf("��������\n");
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	is_year(n);
//	return 0;
//}







//void Swap(int a, int b)//��������
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("a = %d,b = %d\n", a, b);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	Swap(a, b);
//	return 0;
//}







//void print_table(int n)//�����˷���
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}








//void print(int n)//�ݹ��ӡÿһλ
//{
//	if (n < 9)
//		printf("%d ", n);
//	else
//	{
//		print(n / 10);
//		printf("%d ", n%10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}






//int main()//�ǵݹ�n�Ľ׳�
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum*i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}






//int find(int n)//�ݹ�n�Ľ׳�
//{
//	if (n == 1)
//		return n;
//	else
//		return n*find(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = find(n);
//	printf("%d\n", ret);
//	return 0;
//}









//int find(char* arr)////�ݹ�������鳤��
//{
//	if (*arr != '\0')
//		return 1 + find(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "iquweir";
//	int ret = find(arr);
//	printf("%d\n",ret);
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
//	char tmp = arr[0];
//	int ret = my_strlen(arr);
//	arr[0] = arr[ret - 1];
//	arr[ret - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		print(arr + 1);
//	}
//	arr[ret - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "weasdd";
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
//		return SUM(n / 10) + n % 10;
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
//	char i;
//	for (i = 'A'; i <= 'D'; i++)
//	{
//		if ((i != 'A') + (i == 'C') + (i == 'D') + (i == 'C') == 3)
//		{
//			printf("%c\n", i);
//		}
//	}
//	return 0;
//}





//int main()//����Ļ�ϴ�ӡ�������
//{
//	int arr[ROW][COL] = { 0 };
//	int i, j;
//	for (i = 0; i < ROW; i++)
//	{
//		arr[i][i] = 1;
//		arr[i][0] = 1;
//	}
//	for (i = 2; i < ROW; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			 arr[i][j] =  arr[i - 1][j - 1] +  arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}






//void comple(int a, int b, int c, int d, int e)//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
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
//						{
//							if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1)
//							{
//								if (120 == a*b*c*d*e)
//								{
//									printf("a=%d,b=%d,c=%d,d=%d,e=%d", a, b, c, d, e);
//								}
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
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	comple(a, b, c, d,e);
//	return 0;
//}








//int main()//BMIָ��
//{
//	int weight = 0;
//	int high = 0;
//	scanf("%d %d", &weight, &high);
//	double h = high / 100.0;
//	double BMI = weight / pow(h, 2);
//	printf("BMI = %.2lf\n", BMI);
//	return 0;
//}





//int main()//������
//{
//	double p = 3.1415926;
//	double r = 0;
//	scanf("%lf", &r);
//	double V = 4 * p*pow(r, 3)/3;
//	printf("%.3lf", V);
//	return 0;
//}






//int main()//�ҳ������
//{
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	int x = a > b ? a : b;
//	int y = c > d ? c : d;
//	printf("%d\n", x > y ? x : y);
//	return 0;
//}








//void Swap(char*e1, char*e2,int width)//�Լ���д��ð������
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
//void bubble_shot(void*base, int sz, int width, int(*cmp)(const void*e1,const void*e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j*width , (char*)base + (j + 1)*width)>0)
//			{
//				Swap((char*)base + j*width , (char*)base + (j + 1)*width,width);
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
//	double arr[] = {12.5,6.6, 8.5, 6.9, 8.7, 2.4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_shot(arr,sz,sizeof(arr[0]),cmp_double);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%lf ",arr[i]);
//	}
//	return 0;
//}