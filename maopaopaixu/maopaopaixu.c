#include <stdio.h>

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0 ; i < sz-1 ; i++)	//sz-1 ð�����������
//	{
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0 ; j < sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = {10,9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr��������--����
//	/*  arr�����飬��arr���д��Σ�ʵ���ϴ�������Ԫ�صĵ�ַ-- & arr[0]  */
//	bubble_sort(arr,sz);	//ð��������
//
//	int i = 0;
//	for (i = 0; i < sz; i++)	//��������
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}
////��arr[]={0,1,2,3,4,5,6,7,8,9};	ʱ�������������Ȼ����һ��ð������




////�Ż�
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)	
//	{
//		int flag = 1;	//����һ�������Ѿ�����
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;	//������������鲻��ȫ����
//			}
//		}
//		if (flag == 1)	//����ֱ������
//		{
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,9,8,7,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);	
//	int i = 0;
//	for (i = 0; i < sz; i++)	
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}





//����

void maopao(int arr[], int sz)
{
	//����
	int i = 0;
	for (i = 0;i < sz-1 ;i++)	//**
	{
		//ÿ��ð������
		int j = 0;
		for (j = 0;j < sz-i-1 ;j++)	 //***
		{
			if (arr[j] < arr[j+1])
			{
				int tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}

		}

	}

}


int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	//��������
	int sz = sizeof(arr) / sizeof(arr[0]);	//��������=sz-1
	maopao(arr,sz);

	//����
	for (int i =0;i < sz ;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}