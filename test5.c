#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 3;
//	int b = 5;
//	short s = 5;
//	sizeof(s = a + 3);
//	a + b;//ֵ���ԣ���������int
//	return 0;
//
//}

���������ȼ�
int main()
{
	int a = 4;
	int b = 5;
	//int c=a+b*7//���ȼ�����˳��
	int c = a + b + 7;//
}
int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();
	printf("%d\n", answer);
	return 0;
}