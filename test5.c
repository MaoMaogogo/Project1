#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 3;
//	int b = 5;
//	short s = 5;
//	sizeof(s = a + 3);
//	a + b;//值属性，类型属性int
//	return 0;
//
//}

操作符优先级
int main()
{
	int a = 4;
	int b = 5;
	//int c=a+b*7//优先级决定顺序
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