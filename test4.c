#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
	//����
	/*int arr[3][4];
	char ch[3][10];*/
	//��ʼ�� ������ͬʱ��ֵ
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//��ȫ��ʼ��
	//int arr[3][4] = { 1,2,3,4,5,6 };//����ȫ��ʼ��-���油0
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

	//��ά�����������д洢
	//��ӡ��ַ
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


//void bubble_sort(int arr[],int sz)//�β�arr������ָ��
//{
//	//��������ԭ������
//	// 
//	//int sz = sizeof(arr) / sizeof(arr[0]);//��������ֻ�����1
//	// 
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		int flag = 1;//�Ż�
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
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
//	int arr[] = {7,8,9,6,5,4,3,2,1,0 };//����Ϊ����-ð������
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);//���鴫�ε�ʱ�򣬴��ݵ���ʵ��������Ԫ�صĵ�ַ
//	
//	return 0;
//}