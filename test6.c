#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

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

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//��������������Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]);
}

