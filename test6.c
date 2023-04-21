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

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//数组名是数组首元素的地址
	printf("%p\n", &arr[0]);
}

