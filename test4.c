#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
	//创建
	/*int arr[3][4];
	char ch[3][10];*/
	//初始化 创建的同时赋值
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//完全初始化
	//int arr[3][4] = { 1,2,3,4,5,6 };//不完全初始化-后面补0
	//int arr[3][4] = {{1,2},{2,3},{3,4}};
	//int arr[][4] = {{1,2},{2,3},{3,4}};

	//int arr[][4] = {{1,2},{2,3},{3,4}};
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	//二维数组在数组中存储
	//打印地址
	//int arr[][4] = { {1,2},{3,4},{5,6} };
	//int i = 0;
	//int j = 0;

	//int* p = &arr[0][0];
	//for (i = 0; i < 12; i++)
	//{
	//	printf("%d ", *p);
	//	p++;
	//}


	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
	//	}
	//}
//	return 0;
//}


//void bubble_sort(int arr[],int sz)//形参arr本质是指针
//{
//	//计算数组原生个数
//	// 
//	//int sz = sizeof(arr) / sizeof(arr[0]);//放在这里只会等于1
//	// 
//	//确定套数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一套冒泡排序的过程
//		int j = 0;
//		int flag = 1;//优化
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0;i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = {7,8,9,6,5,4,3,2,1,0 };//排序为升序-冒泡排序
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);//数组传参的时候，传递的其实是数组首元素的地址
//	
//	return 0;
//}