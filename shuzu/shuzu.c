#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>		//strlen
#include <stdlib.h>     //malloc realloc free 动态内存分配

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


////试计算在区间1 到n 的所有整数中，数字x（0 ≤ x ≤ 9）共出现了多少次？11 1 4次
//
//int chai(int i, int shu) {
//	int count = 0;   // 用于记录目标数字出现的次数
//	
//	// 存入数组
//	int arr[10] = { 0 };
//	for (int n = 0; n < 10; n++) 
//	{
//		arr[n] = i % 10;
//		if (arr[n] == shu)
//			count++;
//		i /= 10;
//		if (i == 0)
//			break;
//	}
//	return count;
//}
//
//int main()
//{
//	int n;
//	int shu;
//	scanf("%d %d",&n,&shu);
//
//	int cont = 0;//次数
//	
//	for (int i =1; i <= n; i++)
//	{
//		if (i < 10)
//		{
//			if (i == shu)
//				cont++;
//		}
//		else
//		{
//			cont += chai(i, shu);
//			
//		}
//
//	}
//
//	printf("%d",cont);
//
//	return 0;
//}



////输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数。
//
//int main()
//{
//	int arr[10] = {0};
//
//	//把数输入数组中
//	for (int i = 0; i < 10; i++)
//	{
//		int input;
//		scanf("%d",&input);
//		arr[i] = input;
//	}
//	
//	printf("\n");
//	// 按逆序输出数组中的整数
//	for (int i = 9; i >= 0; i--) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//
//	return 0;
//}




////输入数字N，然后输入N个数，计算这N个数的和。
//
//#include <stdlib.h>  // 为了使用malloc和free函数
//
//int main() {
//    int N;
//
//    printf("请输入数字N：\n");
//    scanf("%d", &N);
//
//    int* arr = (int*)malloc(N * sizeof(int));  // 动态分配内存以存储N个int
//
//    if (arr == NULL) {
//        printf("内存分配失败！\n");
//        return 1;  // 返回错误码
//    }
//
//    printf("请输入%d个数：\n", N);
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    int sum = 0;  // 用于累加N个数的总和
//    for (int i = 0; i < N; i++) {
//        sum += arr[i];
//    }
//
//    printf("这%d个数的和是：%d\n", N, sum);
//
//    free(arr);  // 释放动态分配的内存
//
//    return 0;
//}



////输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//
//	int max= 0, min=100;
//	int cj = 0;
//
//	for (int i = 1;i <= n;i++)
//	{
//		
//		scanf("%d",&cj);
//
//		if (cj > max)
//			max = cj;
//
//		if (min > cj)
//			min = cj;
//
//	}
//	printf("%d",(max-min));
//
//	return 0;
//}




////键盘输入 n 个学生成绩，输出每组排在前五高的成绩。
//
////降序
//void paixu(int arr[],int sz)
//{
//	for (int i = 0;i < sz-1;i++)
//	{
//		for (int j = 0;j <sz -1 -i;j++)
//		{
//			if (arr[j] < arr[j+1])
//			{
//				int p = arr[j+1];
//				arr[j + 1] = arr[j];
//				arr[j] = p;
//			}
//		}
//
//	}
//
//}
//
//#define shuzudaxiao 100
//#define jiming 5
//int main()
//{
//	int n;
//	scanf("%d",&n);
//
//	int arr[shuzudaxiao] = {0};
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//排序
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组大小
//	paixu(arr,sz);
//
//	//打印前5名
//	for (int i = 0;i < jiming;i++)
//	{
//		printf("%d ",arr[i]);
//
//	}
//	
//
//	return 0;
//}



////输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//
//#include <stdlib.h>
//
//#define MAX_SIZE 2000
//
//int main() {
//    int n, m;
//
//    // 读取输入的 n 和 m
//    scanf("%d %d", &n, &m);
//
//    int* arr1 = (int*)malloc(n * sizeof(int));
//    int* arr2 = (int*)malloc(m * sizeof(int));
//
//    // 读取第一个升序排列的序列
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr1[i]);
//    }
//
//    // 读取第二个升序排列的序列
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &arr2[i]);
//    }
//
//    // 创建一个合并后的数组
//    int* arr3 = (int*)malloc((n + m) * sizeof(int));
//    int i = 0, j = 0, k = 0;
//
//    // 归并两个序列
//    while (i < n && j < m) {
//        if (arr1[i] <= arr2[j]) {
//            arr3[k++] = arr1[i++];
//        }
//        else {
//            arr3[k++] = arr2[j++];
//        }
//    }
//
//    // 将剩余的元素放到合并后的数组中
//    while (i < n) {
//        arr3[k++] = arr1[i++];
//    }
//    while (j < m) {
//        arr3[k++] = arr2[j++];
//    }
//
//    // 打印合并后的数组
//    for (int i = 0; i < n + m; i++) {
//        printf("%d ", arr3[i]);
//    }
//    printf("\n");
//
//    // 释放动态分配的内存
//    free(arr1);
//    free(arr2);
//    free(arr3);
//
//    return 0;
//}



////输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
//
//#include <stdlib.h> // malloc 和 free 的头文件
//
//// 检查所有元素是否相同
//int check_same(int input, int arr[]) {
//    for (int i = 1; i < input; i++) {
//        if (arr[i] != arr[0]) {
//            return 0; // 如果有一个元素不同，则返回 0
//        }
//    }
//    return 1; // 所有元素都相同，返回 1
//}
//
//// 检查是否按从大到小排序
//int big_small(int input, int arr[]) {
//    for (int i = 1; i < input; i++) {
//        if (arr[i] > arr[i - 1]) {
//            return 0; // 如果有一个元素不符合规则，则返回 0
//        }
//    }
//    return 1; // 符合从大到小的排序，返回 1
//}
//
//// 检查是否按从小到大排序
//int small_big(int input, int arr[]) {
//    for (int i = 1; i < input; i++) {
//        if (arr[i] < arr[i - 1]) {
//            return 0; // 如果有一个元素不符合规则，则返回 0
//        }
//    }
//    return 1; // 符合从小到大的排序，返回 1
//}
//
//int main() {
//    int input;
//    // 读入数组长度
//    printf("请输入数组长度: ");
//    scanf("%d", &input);
//
//    // 动态分配内存
//    int* arr = (int*)malloc(input * sizeof(int));
//    if (arr == NULL) {
//        return 1; // 如果分配失败，返回错误代码
//    }
//
//    // 读入数组元素
//    printf("请输入数组元素: ");
//    for (int i = 0; i < input; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    // 检查数组状态
//    int same = check_same(input, arr);
//    int desc = big_small(input, arr);
//    int asc = small_big(input, arr);
//
//    // 判断结果
//    if (same || desc || asc) {
//        printf("sorted\n");
//    }
//    else {
//        printf("unsorted\n");
//    }
//
//    // 释放内存
//    free(arr);
//
//    return 0;
//}




//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//5
//1 6 9 22 30
//8

//#include <stdlib.h>
//int main()
//{	
//	//
//	int input;
//	scanf("%d",&input);
//
//	//动态内存
//	int* arr = (int*)malloc(input * sizeof(int));		//多分配一块用于插入
//	if (arr == NULL)
//	{
//		return 1;
//	}
//
//	//输入元素
//	for (int i = 0;i < input;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//
//	//输入插入元素
//	int insert;
//	scanf("%d",&insert);
//
//	//判断插入大于几个元素
//	int cont = 0;
//	while (cont < input && insert > arr[cont]) //不越界比
//	{
//		cont++;
//	}
//	//printf("%d",cont);
//
//	//多分配一块内存
//	int new_input = input + 1;	// additional_size 为要增加的元素个数
//	int* new_arr = (int*)realloc(arr, new_input * sizeof(int));
//	if (new_arr == NULL) 
//	{
//		free(arr);
//		printf("内存重新分配失败\n");
//		return 1;
//	}
//
//
//	// 插入元素比所有现有元素都大
//	if (cont == input)
//	{ 
//		new_arr[cont] = insert;
//	}
//	// 插入元素在数组中间
//	else 
//	{ 
//		for (int i = new_input - 1; i > cont; i--) 
//		{
//			new_arr[i] = new_arr[i - 1];
//		}
//		new_arr[cont] = insert;
//	}
//	
//
//	//打印新数组
//	for (int i = 0;i < new_input;i++)
//	{
//		printf("%d ",new_arr[i]);
//	}
//
//
//	//释放内存
//	free(new_arr);
//
//	return 0;
//}




////有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
////6
////1 2 3 4 5 9
////4
//
//// 删除所有在数组中出现的指定元素 delete，并返回新数组的长度
//int deleteElements(int arr[], int length, int delete) 
//{
//	int newLength = 0;
//	for (int i = 0; i < length; i++) 
//	{
//		if (arr[i] != delete) 
//		{
//			arr[newLength++] = arr[i];
//		}
//	}
//	return newLength;
//}
//
//int main() 
//{
//	int input;
//	scanf("%d", &input);
//
//	// 动态内存分配
//	int* arr = (int*)malloc(input * sizeof(int));
//	if (arr == NULL) 
//	{
//		return 1;
//	}
//
//	// 输入数组
//	for (int i = 0; i < input; i++) 
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	// 输入删除元素
//	int delete;
//	scanf("%d", &delete);
//
//	// 删除所有指定元素，并获得新数组的长度
//	int newLength = deleteElements(arr, input, delete);
//
//	// 打印数组
//	for (int i = 0; i < newLength; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	// 释放动态内存
//	free(arr);
//
//	return 0;
//}





////输入n个整数的序列，要求对这个序列进行去重操作,只保留该数第一次出现的位置，删除其余位置。
////5
////10 12 93 12 75
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL)
//	{
//		return 1;
//	}
//
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//
//	//repeat重复
//	for (int i = 0; i < n; i++) 
//	{
//		for (int j = i + 1; j < n; j++) 
//		{
//			if (arr[i] == arr[j])
//				arr[j] = 0;
//		}
//	}
//
//	for (int i = 0;i < n;i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ",arr[i]);
//	}
//
//
//	free(arr);
//
//	return 0;
//}




////给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次，
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//
//	int* arr = (int*)malloc(n * sizeof(int));
//
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//
//	int input;
//	scanf("%d",&input);
//
//	int cont = 0;
//	for (int i = 0;i < n;i++)
//	{
//		if (arr[i] == input)
//			cont++;
//	}
//
//	printf("%d", cont);
//
//
//	free(arr);
//	return 0;
//}





////输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分。浮点数表示，范围0.0~100.0
//
//int main()
//{
//	float arr[5][5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%f", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		float num = 0;
//		for (int j = 0; j < 5; j++)
//		{
//			num = arr[i][j] + num;
//			printf("%.1f ", arr[i][j]);
//		}
//		printf("总成绩是:%.1f", num);
//		printf("\n");
//	}
//
//
//
//	return 0;
//}




////个n行m列的矩阵，现在他想知道第x行第y列的值是多少
////2 3
////1 2 3
////4 5 6
////1 2
//
//int main()
//{
//	int n, m;
//	scanf("%d %d",&n,&m);
//
//	int arr[10][10];
//	for (int i = 0;i<n;i++)
//	{
//		for (int j = 0;j<m;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//
//	//查x,y
//	int x, y;
//	scanf("%d %d", &x, &y);
//	
//	printf("%d,%d 的值为:%d",x,y,arr[x-1][y-1]);
//
//
//	return 0;
//}





////从n行m列的方阵队列中找到身高最高的人的位置
//
//int main()
//{
//	printf("几行几列\n");
//	int n, m;
//	scanf("%d %d",&n,&m);
//
//	int arr[50][50];
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//
//	int max = 0;
//	int x = 0, y = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				x = i;
//				y = j;
//			}
//		}
//	}
//
//	printf("%身高最高为: d\n",max);
//	printf("位置在: %d %d",x+1,y+1);
//
//	return 0;
//}



////得到了两个n行m列的矩阵，他想知道两个矩阵是否相等,当两个矩阵对应数组元素都相等时两个矩阵相等
//
//int main()
//{
//	printf("判断下面两个矩阵是否相等\n");
//	int n, m;
//	scanf("%d %d",&n,&m);
//
//	int arr1[50][50];
//	int arr2[50][50];
//
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf("%d",&arr1[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//
//	int judge = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//				judge = 1;
//			else
//				judge = 0;
//		}
//	}
//
//	if (judge == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//
//	return 0;
//}




////输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和
//
//int main()
//{
//	int n, m;
//	scanf("%d %d",&n,&m);
//
//	int arr[50][50];
//	int num = 0;
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf("%d",&arr[i][j]);
//			if (arr[i][j] > 0)
//			{
//				num += arr[i][j];
//			}
//		}
//	}
//
//	printf("大于零元素之和为:%d",num);
//
//	return  0;
//}





////给你一个整数n，按要求输出n∗n的回型矩阵
////1  2  3  4		
////12 13 14 5
////11 16 15 6
////10 9  8  7
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//
//	int arr[50][50];
//
//	int k = 1;//起始值
//	int minrow = 0, mincol = 0;
//	int maxrow =n-1 , maxcol = n-1;
//	while (k <= n*n)
//	{
//		//向右移动
//		for (int i = mincol;i <= maxcol;i++)
//		{
//			arr[minrow][i] = k;
//			k++;
//		}
//		minrow++;
//
//		//向下移动
//		for (int i = minrow ;i <= maxrow;i++)
//		{
//			arr[i][maxcol] = k;
//			k++;
//		}
//		maxcol--;
//
//		//向左移动
//		for (int i = maxcol;i >= mincol;i--)
//		{
//			arr[maxrow][i] = k;
//			k++;
//		}
//		maxrow--;
//
//		//向上移动
//		for (int i = maxrow;i >= minrow;i--)
//		{
//			arr[i][mincol] = k;
//			k++;
//		}
//		mincol++;
//
//
//	}
//
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < n;j++)
//		{
//			printf("%d\t", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}






////给你一个整数n，输出n∗n的蛇形矩阵。-------------------------------------------------------------------------------------------------------
////1  2  6  7
////3  5  8  13
////4  9  12 14
////10 11 15 16
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//
//	int arr[50][50];
//
//	int k = 1;
//	int cishu = 0;
//	while (k <= n*n)
//	{
//		//第一个
//		arr[0][0] = k;
//		k++;
//		cishu++;
//
//		//左下
//		for (int i = 0;i < cishu;i++)
//		{
//			arr[][] = k;
//		}
//
//	}
//
//
//}




////第一行包含两个整数m和n，表示图像的行数和列数，用单个空格隔开。之后m行，每行n个整数0或1，表示第一幅黑白图像上各像素点的颜色，。之后m行，每行n个整数0或1，
//
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//
//	int arr1[50][50];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0;j < n;j++)
//		{
//			scanf("%d",&arr1[i][j]);
//		}
//	}
//
//	printf("第二个数组\n");
//
//	int arr2[50][50];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//
//	float cont = 0.0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				cont++;
//			}
//		}
//	}
//
//	printf("准确度: %.2f\n",100.0*cont/(n*m));
//
//	return 0;
//}





//想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。

int main()
{
	int n;
	scanf("%d",&n);

	int arr[50][50];

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	//判断
	int row = 2;
	int col = 1;
	int chek = 1;
	for (int i = 0;i < n-1;i++)
	{
		for (int j = 0;j < n;j++)
		{

		}


	}
    

    return 0;
}