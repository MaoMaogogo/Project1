#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int is_prime(int n)
//{
//	//2到n-1之间的数字
//	int j = 0;
//	for(j=2;j<n;j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}


//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	for(i=100;i<=200;i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//判断闰年返回1
//不是返回0
//int is_leap_year(int x)
//{
//	if((x%4==0)&&(x%100!=0)||(x%400==0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}



int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//找不到
}


//找key
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int  key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//数组的大小
	//       数组大小     数组第一个下标大小
	// 
	//找到了就返回找到的位置的下标
	//找到返回-1
	int ret = binary_search(arr,key,sz);

	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}