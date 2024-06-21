#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数


//相加
//int jia(int x, int y)
//{
//	int sum = 0;
//	sum = x + y;
//	return sum;
//}
//
//int mian()
//{
//	int a = 1;
//	int b = 3;
//	int hhh =jia(a, b);
//		printf("%d\n", hhh);
//	return 0;
//}
//


//// 取最大值
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	int max = get_max(a, b);
//		printf("%d",max);
//
//}




////交换
//
//
//void swap1(int x, int y)
//{
//	int temp1 = 0;
//	temp1 = x;
//	x = y;
//	y = temp1;
//
//}
//
//
//
//void swap2(int *x , int *y)
//{
//	int temp2 = 0;
//	temp2 = *x;
//	*x = *y;
//	*y = temp2;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n",a,b);
//	swap1(&a,&b);
//	printf("a=%d,b=%d\n", a, b);
//	swap2(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


////闰年平年
//
// 
//
//int is_year(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0 || i%400 == 0)	//闰年判定
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int year = 0;
//	for(year = 1; year <= 2025;year++)
//	{
//		//返回值1闰年，0平年
//		if (is_year(year) == 1)
//			printf("%d是润年\n", year);
//		else
//			printf("%d是平年\n",year);
//	}
//
//}







////二分查找
//
//int binary_search(int arr[], int sz,int k)
//{
////算法的实现
//	int left = 0;
//	int right = sz-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;	//中间元素下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,sz, k);
//		if (ret == -1)
//		{
//			printf("找不到数字\n");
//		}
//		else
//		{
//			printf("找到了下标是%d\n",ret);
//		}
//
//	return 0;
//
//}




////函数的链式访问
//
//
//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n",len);
//	//2
//	printf("%d\n",strlen("abc"));
//
//	return 0;
//}




////下面打印出的值
//
//
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));	//4321
//	//printf返回值是打印字符的个数
//	// 
//	//printf("%d",printf("%d",2))      直接打印43	 printf("%d",43)返回值是2   432
//	//printf("%d",2)				  printf("%d",2)返回值是1    4321
//
//	return 0;
//}




////函数的声明与定义
//
//
//
//
//int Add(int ,int );		//函数的声明
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n",sum);
//	return 0;
//}
////函数放下面，函数未声明时会报错，
//
//
////函数的定义
//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}





////头文件和源文件的函数的定义与声明,定义声明引用构成一个模块
//
//
//#include "Add.h"	//引用自己的头文件用"头文件"	引用库函数用<>	
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int num = 0;
//	num = Add(a,b);
//	printf("%d\n",num);
//	return 0;
//}




//
////函数的递归-自己调用自己
//
//
//
//int main()
//{
//	printf("hehe");
//	main();				//如递归所有控件路径，函数将导致运行时堆 "栈溢出"
//
//}





////输入1234，打印1 2 3 4
//
//
//
//void mon(int i)
//{
//	if (i >9)
//	{
//		mon(i / 10);
//		printf("%d ", i % 10);
//	}
//	else
//	{
//		printf("%d ", i);
//	}
//		
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d",&num);	//1234
//	mon(num);
//
//	return 0;
//}
//
//





////函数三数找最大值
//
//
//
//int max_of_three(int x, int y, int z)
//{
//	if (x > y && x > z)
//	{
//		return x;
//	}
//	else if (y > z && y > x)
//	{
//		return y;
//	}
//		return z;
//}
//
//
//int main()
//{
//	int a ,b,c;
//	scanf_s("%d%d%d",&a,&b,&c);
//	printf("最大值是%d", max_of_three(a, b, c)); 
//
//	return 0;
//}
//





////不用库函数求字符串长度
//
//
//int string_length(char str[])
//{
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//
//}
//
//int main()
//{
//	char str[100];	 // 定义了一个足够大的字符数组来存储输入的字符串
//	printf("请数入一串字符\n");
//	scanf_s("%s",str,100);	// 需要提供缓冲区大小
//	printf("%d\n", string_length(str));
//
//	return 0;
//}


//int my_strlen(char* str)
//{
//	int cont = 0;
//	while (*str != '\0')
//	{
//		cont++;
//		str++;
//	}
//	return cont;
//}
//
//
//int main()
//{
//	char arr[100];
//	printf("请输入字符\n");
//	scanf_s("%s",&arr,100);
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//
//	return 0;
//}



////求n得阶乘
//
//
//int jiecheng(int i)
//{
//	int sum = 1;
//	for (int n = i;n >= 1;n--)
//	{
//		sum = sum * n;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n;
//	printf("求几的阶乘？\n");
//	scanf("%d",&n);
//	int len = jiecheng(n);
//	printf("%d\n",len);
//
//	return 0;
//}





////把数拆分
//
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	
//	while (a != 0)
//	{
//		int n = a;
//		n %= 10;
//
//		printf("%d ",n);
//		a /= 10;
//	}
//	return 0;
//}



////求出[a,b]区间内有多少个数数位之和为5的倍数
//
//int judge_five(int number)
//{
//	number %= 5;
//	if (number == 0)
//		return 1;
//	else
//		return 0;
//
//	//是5的倍数返回1,不是返回0
//}
//
//int sum_five(int a,int b)
//{
//	int cont = 0;//用来记次数
//
//	//遍历
//	for (int i = a;i <= b;i++)
//	{
//		//判断两数相加
//		int num = 0;
//		int ii = i;
//
//		//拆数
//		while (ii != 0)
//		{
//			int n = ii;
//			n %= 10;
//			ii /= 10;
//
//			//相加
//			num += n;d
//		}
//
//		if (judge_five(num) == 1)
//			cont++;
//
//	}
//	return cont;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d %d",&a,&b);
//
//	int cont = sum_five(a,b);
//
//	printf("%d",cont);
//
//	return 0;
//}




////对于一个数，把他所有位上的数字进行加和，得到新的数。如果这个数字是个位数的话，那么他就满足条件。
//
//void separate_number_add(int i)
//{
//	int num = 0;
//	while (i != 0)
//	{
//		int n = i;
//		n %= 10;
//		i /= 10;
//		num += n;
//
//	}
//	if (num < 10)
//		printf("%d", num);
//	else
//		separate_number_add(num);
//}
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//
//	separate_number_add(n);
//
//	return 0;
//}





////请统计某个给定范围[L, R]的所有整数中，数字2出现的次数。
//#define key_number 2;
//
//int Statistical_times(int a, int b)
//{
//	int cont = 0;//统计次数
//	//遍历
//	for (int i = a;i <= b;i++)
//	{
//		//拆数
//		int ii = i;
//		while (ii != 0)
//		{
//			int n = ii;
//			n %= 10;
//			ii /= 10;
//
//			//判断
//			int key = key_number;
//			if (n == key)
//				cont++;	
//
//		}
//	}
//
//	return cont;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d %d",&a,&b);
//
//	Statistical_times(a,b);
//	printf("%d",Statistical_times(a, b));
//	return 0;
//}




////1.每条短信收费0.1元
////2.每条短息的字数不超过60字，如果超过60字，将按照0.2元的价格收费。
////牛牛这个月发了 n 条短信，请问牛牛一共要缴多少短信费
//
//double SMS_charges(int n,int exceed_60)
//{
//	int not_exceed_60 = n - exceed_60;
//	double sum = 0.0;
//	sum = not_exceed_60 * 0.1 + exceed_60 * 0.2;
//
//	return sum;
//}
//
//int main()
//{
//	//n条短信
//	int n;
//	scanf("%d", &n);
//
//	//第n条短信的字数,并统计短信超过60字的条数
//	int arr[20] = {0};
//	int exceed_60 = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (scanf("%d", &arr[i]) == EOF)
//		{
//			break;
//		}
//
//		if (arr[i] > 60)
//		{
//			exceed_60++;
//		}
//	}
//	double SMScharges = SMS_charges(n, exceed_60);
//	printf("%.1lf",SMScharges);
//
//	return 0;
//}





////一共有n条台阶,每次可以选择走一阶或者走两阶，一共有多少种走法？
////走完n级的台阶，
////f(n) = f(n - 1) + f(n - 2)
//
//int climbStairs(int n) {
//    if (n == 1) {
//        return 1;
//    }
//    if (n == 2) {
//        return 2;
//    }
//
//    int prev1 = 1;
//    int prev2 = 2;
//    int current = 0;
//
//    // 通过递推关系式计算第n阶的走法数
//    for (int i = 3; i <= n; i++) {
//        current = prev1 + prev2;
//        prev1 = prev2;
//        prev2 = current;
//    }
//
//    return current;
//}
//
//int main() {
//    int n;
//    printf("请输入台阶数: ");
//    scanf("%d", &n);
//
//    int totalWays = climbStairs(n);
//    printf("共有 %d 种走法\n", totalWays);
//
//    return 0;
//}



int main()
{

	return 0;
}