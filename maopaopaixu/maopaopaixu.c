#include <stdio.h>

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0 ; i < sz-1 ; i++)	//sz-1 冒泡排序的趟数
//	{
//		//每一趟冒泡排序
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
//	//对arr进行排序--升序
//	/*  arr是数组，对arr进行传参，实际上传的是首元素的地址-- & arr[0]  */
//	bubble_sort(arr,sz);	//冒泡排序函数
//
//	int i = 0;
//	for (i = 0; i < sz; i++)	//遍历数组
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}
////当arr[]={0,1,2,3,4,5,6,7,8,9};	时，本身就有序，依然会走一遍冒泡排序




////优化
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)	
//	{
//		int flag = 1;	//假设一趟数组已经有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;	//本趟排序的数组不完全有序
//			}
//		}
//		if (flag == 1)	//有序直接跳出
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





//自作

void maopao(int arr[], int sz)
{
	//趟数
	int i = 0;
	for (i = 0;i < sz-1 ;i++)	//**
	{
		//每趟冒泡排序
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
	//降序排序
	int sz = sizeof(arr) / sizeof(arr[0]);	//排序趟数=sz-1
	maopao(arr,sz);

	//遍历
	for (int i =0;i < sz ;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}