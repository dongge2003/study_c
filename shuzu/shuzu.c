#include <stdio.h>
#include <string.h>		//strlen

////数组-> 	type_t元素类型	arr_name	[const_n常量表达式]


//int main()
//{
//	int arr1[10] = {1,2,3,4};	//不完全初始化	剩下的元素默认初始化为0
//	char arr2[6] = {'a','b','c','d'};	
//	char arr3[8] ="abcd";	//
//	char arr4[] = "abcdef";
//
//	//int n = 5;
//	//int ch[n]; //n不为常量
//	
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";		//a b c d e f \0
//	printf("%d\n",sizeof(arr1));	//7		sizeof计算所占空间的大小\0也算
//	printf("%d\n",strlen(arr1));	//6		strlen求字符串的长度\0不算	
//
//
//	return 0;
//}
//strlen和sizeof没有什么关联
//strlen是求字符串长度-只能针对字符串长度 -库函数-使用得引用头文件
//sizeof 计算变量，数组，类型的大小-单位是字节 - 操作符


//int main()
//{
//	char arr1[]="abc";	//a b c \0
//	char arr2[] = {'a','b','c'};	//a b c
//	printf("%d\n", sizeof(arr1));	//4
//	printf("%d\n", sizeof(arr2));	//3
//	printf("%d\n", strlen(arr1));	//3
//	printf("%d\n", strlen(arr2));	//随机数-遇见\0停止
//
//	return 0;
//}



////一维数组
//
//
//
//int main()
//{
//	char arr[] = "abcdef";	//[a][b][c][d][e][f][\0]
//	printf("%c\n",arr[3]);	//d	[]下标引用操作符
//	int i = 0;
//	for (i = 0 ; i < strlen(arr) ; i++ )
//	{
//		printf("%c ",arr[i]);
//	}
//
//	int arr2[] = {1,2,3,4,5,6,7,9,10};
//	printf("\n%d\n",arr2[3]);		//4
//	int n = 0;
//	int sz = (sizeof(arr2) / sizeof arr2[0]);	//
//	for (n = 0 ; n < (sizeof(arr2) / sizeof arr2[0]) ; n++)
//	{
//		printf("%d ",arr2[n]);
//	}
//	return 0;
//}

  


////一维数组在内存中的存储
//
//
//int main()
//{
//	int arr[] = { 1 ,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for (i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]);
//	}
//	/*  & arr[0] = 0000004C5BF2F618
//		& arr[1] = 0000004C5BF2F61C
//		& arr[2] = 0000004C5BF2F620
//		& arr[3] = 0000004C5BF2F624
//		& arr[4] = 0000004C5BF2F628				//**数组在内存中的存储是连续的**
//		& arr[5] = 0000004C5BF2F62C
//		& arr[6] = 0000004C5BF2F630
//		& arr[7] = 0000004C5BF2F634
//		& arr[8] = 0000004C5BF2F638
//		& arr[9] = 0000004C5BF2F63C  */
//	return 0;
//}




//二维数组


//int main()
//{
//	//数组创建
//	int arr[3][4];	//[3][4]3行4列
//	char arr2[5][6];
//
//	return 0;
//}



//int main()
//{
//	//二维数组初始化
//	int arr[3][4] = { 1,2,3,4,5 };	//不完全初始化
//	int arr2[3][4] = { { 1,2 }, {4,5} };
//	int arr3[][3] = { {1,2,3},{2,3,4 },{3,4,5} };	//行可以省略，列不行
//
//	return 0;
//}


//int main()
//{
//	//二维数组的使用
//	char arr1[3][3] = { {'a','b','c'},{'a','b','c'},{'a','b','c'} };
//	//printf("%c\n",arr[2][2]);	//无效的
//	//printf("%c\n",arr[1][1]);	//d
//
//	//二维数组打印
//	int r1 = 0;
//	int l1 = 0;
//	for (r1=0 ; r1<3 ; r1++)
//	{
//		for (l1=0 ; l1<3 ; l1++)
//		{
//			printf("%c ",arr1[r1][l1]);
//		}
//		printf("\n");
//	}
//	/*  a b c
//		a b c
//		a b c  */
//
//	printf("\n");
//
//	int arr2[3][4] = { {1,2,3} , {4,5} };
//	int r2 = 0;
//	int l2 = 0;
//	for (r2 = 0; r2 < 3; r2++)
//	{
//		for (l2 = 0; l2 < 4; l2++)
//		{
//			printf("%d ", arr2[r2][l2]);
//		}
//		printf("\n");
//	}
//		/*1 2 3 0
//		  4 5 0 0
//		  0 0 0 0*/
//
//	return 0;
//}




////二维数组在内存中的存储
//
//
//int main()
//{
//	int arr1[2][2] = { {1,2},{3,4} };
//	int r1 = 0;
//	int l1 = 0;
//	for (r1 = 0; r1 <2 ;r1++)
//	{
//		for (l1 = 0; l1 < 2;l1++)
//		{
//			printf("&arr1[%d][%d] = %p\n",r1,l1,&arr1[r1][l1]);
//		}
//	}
//	/*  & arr1[0][0] = 000000EBCAD7FA68
//		& arr1[0][1] = 000000EBCAD7FA6C
//		& arr1[1][0] = 000000EBCAD7FA70
//		& arr1[1][1] = 000000EBCAD7FA74  */
//
//	/*二维数组在内存中也是连续的*/
//
//	int n = 0;
//	for (n=0;n<2;n++)
//	{
//		printf("第一行%d ", arr1[0][n]);
//	}
//	printf("\n");
//	for (n = 0; n < 2; n++)
//	{
//		printf("第二行%d ", arr1[1][n]);
//	}
//
//	return 0;
//}



////数组作为函数参数--冒泡排序
//
//
//void maopao(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)	//**
//	{
//		//每趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)	 //***
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//
//		}
//
//	}
//
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	//降序排序
//	int sz = sizeof(arr) / sizeof(arr[0]);	//排序趟数=sz-1
//	maopao(arr, sz);
//
//	//遍历
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}




////查找数组元素
//
//
//int cha_arr(int arr[],int i,int sz)
//{
//	for (int n =0;n<sz;n++)
//	{
//		if (arr[n] == i)
//		{
//			return 1;
//			
//		}	
//	}
//	return 0;
//}
//
//int main()
//{	
//	int arr[] = {1,2,3,4,5,6};
//	printf("查？\n");
//	int i;
//	scanf_s("%d",&i);
//	int sz =sizeof(arr)/sizeof(arr[0]);
//	cha_arr(arr,i,sz);
//	int a=cha_arr(arr, i, sz);
//	if (a == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



////数组元素求和
//
//int qiu_he(int* arr,int sz)		//函数qiu_he的第一个参数应该是一个指向整数的指针，因为你需要传递一个整数数组。在C语言中，数组是通过指针传递给函数的。
									//应该将qiu_he函数定义中的参数类型从int arr更改为int* arr，这样才表示一个指向整数的指针。
//{
//	int num = 0;
//	int i = 0;
//	for (i =0;i<sz;i++)
//	{
//		num = num + arr[i];
//	}
//	return num;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,3,5,6,7,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qiu_he(arr,sz);
//	int sum = qiu_he(arr, sz);
//	printf("%d\n",sum);
//	return 0;
//}



////求数组元素的平均值
//
////返回类型应为float或double，不然会丢失小数点后的结果.
//float ping_jun(int* arr,int sz)
//{
//	float num = 0;
//	for (int i =0;i<sz;i++)
//	{
//		num = num + arr[i];
//	}
//	return num / sz;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	float a = ping_jun(arr,sz);
//	printf("%f\n",a);
//	return 0;
//}



////数组元素反转
//
//void fan_zhuan(char* arr,int sz)
//{
//	int n = sz / 2;
//	char tmp = 0;
//	for (int i = 0;i <= n;i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr[sz-i-1];
//		arr[sz - i-1] = tmp;
//	}
//
//}
//
//void bian_li(char* arr,int sz)
//{
//	for (int a = 0;a < sz ;a++)
//	{
//		printf("%c ",arr[a]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	char arr[] = {'a','b','d','e','f'};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	fan_zhuan(arr,sz);
//	bian_li(arr, sz);
//
//	return 0;
//}


