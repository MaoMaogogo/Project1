#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//δԽ��
//for (vp = &values[N_VALUES]; vp > &values[0];)
//{
//	*--vp=0��
//}

//�Ϸ�����Խ����
//for (vp = &values[N_VALUES-1]; vp >= &values[0];vp--)
//{
//	*vp=0��
//}

//int main()

//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��������������Ԫ�صĵ�ַ
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
//		//printf("%p==%p\n", &arr[i], p + i);//��Ԫ�ؿ�����*��p+i����ʾ
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}

//����
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������
//	//[]��һ��������2��arr������������
//	// a+b
//	// b+a
//	// 
//	// ϵͳ����ʱarr[2]--->*(arr+2)
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
//	int* pa = &a;//pa��ָ�������һ��ָ��
//	//ppaΪ����ָ�����
//	int* *ppa=&pa;//paҲ�Ǹ�������&paȡ��pa���ڴ��е���ʼ��ַ,pa����δint*
//	return 0;
//}


//ָ������ ---  ����
//
//int main()
//{
//	int arr[10];//�������� - ������͵������������������
//	char ch[5];//�ַ����� - ��ŵ����ַ�
//	//ָ������ - ���ָ�������
//	int* parr[5];//����ָ�������
//
//	return 0;
//}