#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//void Print(int n)//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//{
//	if (n < 9)
//		printf("%d ", n);
//	else
//	{
//		Print(n / 10);
//		printf("%d ", n % 10);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}



//int Facto(int n)//�ݹ�ʵ����n�Ľ׳�
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Facto(n - 1);
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Facto(n);
//	printf("%d\n", ret);
//	return 0;
//}




//int main()//�ǵݹ�ʵ����n�Ľ׳�
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}





//int my_strlen(char* arr)//�ݹ�ʵ��strlen
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "busadioba";
//	int count = my_strlen(arr);
//	printf("%d\n", count);
//	return 0;
//}






int my_strlen(const char* arr)//�ǵݹ�ʵ��strlen
{
	assert(arr != NULL);
	int count = 0;
	while (*arr != '\0')
	{
		arr++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "busadioba";
	int count = my_strlen(arr);
	printf("%d\n", count);
	return 0;
}





//int my_strlen(char* arr)//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//
//}
//int main()
//{
//	char arr[] = "abcsdsf";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}





//int DigitSum(int n)// дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}




//int Power(int n, int k)//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//{
//	if (k < 0)
//		return (1.0 / (Power(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n*Power(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n,&k);
//	double ret = Power(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}





//int FindCount(int n)//�ݹ�ʵ�����n��쳲�������
//{
//	if (n <= 2)
//		return 1;
//	else
//		return FindCount(n - 1) + FindCount(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = FindCount(n);
//	printf("%d\n", ret);
//	return 0;
//}




//int main()//�ǵݹ�ʵ�����n��쳲�������
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	for (a = 1; a <= n; a++)
//	{
//		int tmp = b + c;
//		b = c;
//		c = tmp;
//	}
//	printf("%d\n", c);
//	return 0;
//}




//int step_time(int n)//������̨��
//{
//	if (n < 3)
//		return n;
//	else
//		return step_time(n - 1) + step_time(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("��Ҫ������:");
//	scanf("%d", &n);
//	int time = step_time(n);
//	printf("%d\n", time);
//	return 0;
//}




//void move(char a, int n, char c)//��ŵ������
//{
//	static int k = 1;
//	printf("%d: #%c---%c\n", k, a, c);
//	if (k++ % 3 == 0)
//		printf("\n");
//}
//void hanio(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//	    move(a, b, c);
//	}
//	else
//	{
//		hanio(n - 1, a, c, b);
//		move(a, b, c);
//		hanio(n - 1, b,a,c);
//	}
//}
//int main()
//{
//	char a = 'a';
//	char b = 'b';
//	char c = 'c';
//	int n = 0;
//	printf("���������:");
//	scanf("%d", &n);
//	hanio(n, a, b, c);
//	return 0;
//}




//void init(int arr[], int sz)//��ʼ�����顢������顢�����������Ԫ�ص�����
//{
//	int n = 0;
//	for (n = 0; n < sz; n++)
//	{
//		arr[n] = n;
//		printf("%d ", arr[n]);
//	}
//	printf("\n");
//}
//void empty(int arr[], int sz)
//{
//	int n = 0;
//	for (n = 0; n < sz; n++)
//	{
//		arr[n] = 0;
//		printf("%d", arr[n]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int n = 0;
//	int tmp = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//	for (n = 0; n < sz; n++)
//	{
//		printf("%d", arr[n]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//	/*empty(arr, sz);*/
//	reverse(arr, sz);
//	return 0;
//}




//int find_count(int n)//δ�ݹ�쳲�������
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		int i;
//		int a = 1;
//		int b = 1;
//		int tmp = 0;
//		for (i = 3; i <= n; i++)
//		{
//			tmp = a + b;
//			a = b;
//			b = tmp;
//		}
//		return tmp;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = find_count(n);
//	printf("%d\n", ret);
//	return 0;
//}




//int find_count(int n)//�ݹ�쳲�������
//{
//	if (n <= 2)
//		return 1;
//	else
//		return find_count(n - 1) + find_count(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = find_count(n);
//	printf("%d\n", ret);
//	return 0;
//}



//int Pow(int n, int k)//�ݹ�ʵ��n��k�η�
//{
//	if (k < 0)
//		return (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n*Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n,&k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}