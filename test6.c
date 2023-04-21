#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//未越界
//for (vp = &values[N_VALUES]; vp > &values[0];)
//{
//	*--vp=0；
//}

//合法但是越界了
//for (vp = &values[N_VALUES-1]; vp >= &values[0];vp--)
//{
//	*vp=0；
//}

//int main()

//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组名是数组首元素的地址
//	printf("%p\n", &arr[0]);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p==%p\n", &arr[i], p + i);//首元素可以用*（p+i）表示
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}

//交换
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名
//	//[]是一个操作符2和arr是俩个操作数
//	// a+b
//	// b+a
//	// 
//	// 系统运算时arr[2]--->*(arr+2)
//	// 
//	//arr[2] =*(arr+2)= *(p + 2)==*(2+p)==*(2+arr)=2[arr]
//	//2[arr]==*(2+arr)
//	return 0;
//}


