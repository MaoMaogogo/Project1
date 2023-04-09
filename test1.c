#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0))||(y%400==0))
//		{
//			printf( "%d", y);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//}

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "welcome to bit!!!!!!!";
	char arr2[] = "#####################";
	int left = 0;
	int right = strlen(arr1) - 1;

	while(left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
	}
	return 0;
}