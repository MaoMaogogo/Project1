#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//�����鳤��
//int my_strlen(char* str)
//{
//	/*int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//
//
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);//�����ݹ�
//	else
//		return 0;
//
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//['b']['i']['t']['\0']
//	//
//	//ģ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//}

//��׳ˣ����������
// 
// ����
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//�ݹ�
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//���n��쳲���������ǰ������֮��=��������
//�ݹ������⣬Ч�ʵ�
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n-1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fen = Fib(n);
//
//	printf("%d\n", fen);
//	printf("count=%d\n", count);
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fen = Fib(n);
//
//	printf("%d\n", fen);
//	return 0;
//}

//��ŵ������

//������̨������