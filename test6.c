#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

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
//
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	//ppa为二级指针变量
//	int* *ppa=&pa;//pa也是个变量，&pa取出pa在内存中的起始地址,pa类型未int*
//	return 0;
//}


//指针数组 ---  数组
//
//int main()
//{
//	int arr[10];//整型数组 - 存放整型当代数组就是整型数组
//	char ch[5];//字符数组 - 存放的是字符
//	//指针数组 - 存放指针的数组
//	int* parr[5];//整型指针的数组
//
//	return 0;
//}