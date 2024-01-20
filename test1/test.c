#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//打印输出
// 
//int main()  
//{
//	printf("hello world\n");
//}



//全局变量  局部变量   
// 
// %d打印整形
//int a = 10; //全局变量 全部代码
//int main()
//{
//	int b = 20; //局部变量 当前函数
//	printf("%d\n", a);
//	printf("%d\n", b);
//}



// 加法
// 
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int mum = 0;
//	scanf("%d%d", &num1,&num2);//scanf输入符号   &取地址符号
//	mum = num1 + num2;
//	printf("%d", mum);
//}




//字面常量   3   8.34242   10100
// 
//int main()
//{
//	const int num = 10;//num变量  const常属性  const num 常数性的变量
//	printf("%d\n", num);
//	int num = 28;//报错num是常量了 不能变了
//	printf("%d\n", num);
//
//}



//枚举常量enum:性别  颜色  星期   
// 
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,
//};

//int main()
//{
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}




//字符
// 
//字符串：“jfajfajjf”由双引号引起的字符     “”空字符串   打印字符串是%s
//int main()
//{
//	char arr1[] = "abc";//数组    // arr1有4个元素abc0
//	char arr2[] = { 'a', 'b', 'c' };	//arr2有3个元素abc
//	char arr3[] = { 'a', 'b', 'c',0 };	//arr3有4个元素abc0
//	char arr4[] = { 'a', 'b', 'c','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	printf("%s\n", arr4);
//	/*输出结果：
//	arr1			abc
//	arr2			abc烫烫烫烫烫烫烫烫烫烫烫烫烫烫蘟bc
//	arr3			abc
//	arr4			abc
//	*/
//	return 0;
//}

/*	arr1有‘a’‘b’‘c’‘\0’    \0的值是0
	\0 是字符串结束的标志
	arr2没有\0，所以后面有：烫烫烫烫烫烫烫烫烫烫烫烫烫烫蘟bc
	\0 的ASCII码值是0
	所以后面加0或者\0都结束了
	*/




//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', 'd'};
//	printf("%d\n", strlen(arr1)); //strlen--strlen length--计算字符串的长度
//	printf("%d\n", strlen(arr2));
//	/*
//	输出结果：3
//			  3
//	*/
//
//	return 0;
//}






//转义字符

/*
转义字符					意义										ASCII码值（十进制）
  \a	        响铃(BEL)													007
  \b			退格(BS) ，将当前位置移到前一列								008
  \f			换页(FF)，将当前位置移到下页开头							012
  \n			换行(LF) ，将当前位置移到下一行开头							010
  \r			回车(CR) ，将当前位置移到本行开头							013
  \t			水平制表(HT) （跳到下一个TAB位置）							009
  \v			垂直制表(VT)												011
  \\			代表一个反斜线字符''\'										092	​	​
  \'			代表一个单引号（撇号）字符									039
  \"			代表一个双引号字符											034
  \0			空字符(NULL)												000
  \ddd			1到3位八进制数所代表的任意字符							三位八进制
  \xhh	1		到2位十六进制所代表的任意字符							二位十六进制
*/


//int main()
//{
//	printf("c:\test\32\test.ac\n");
//	//c:      est⸮    est.ac
//	printf("c:\\test\\32\\test.ac\n");
//	//c:\test\32\test.ac
//
//		return 0;
//}


//int main()
//{
//	//strlen--strlen length--计算字符串的长度
//	printf("%d\n",strlen("c:\test\32\test.ac\n"));//15
//	printf("%d\n", strlen("c:\\test\\32\\test.ac\n"));//19
//	//----\32是转义字符10进制是24 ----24的ASCII码值对应的是--->
//	return 0;
//}







//注释           快捷键： ctrl+k+c

///*
//int main()
//{
//	/*						//不能嵌套					
//	int a = 10;
//	*/
//}
//*/






//选择语句

//int main()
//{
//	int a = 0;
//	printf("你会坚持吗？\n");
//	printf("1-会，2-不会\n");
//	scanf("%d\n", &a);
//		if (a = 1)
//			printf("你会成功的！\n");
//		else
//			printf("你不会成功！\n");
//
//			return 0;
//}





//循环语句

//int main()
//{
//	int a = 0;
//	printf("开始敲代码!\n");
//	while (a<200000)
//	{
//		printf("敲一行代码！");
//		printf("%d\n",a);
//		a++;
//	}
//	printf("好工作！\n");
//
//	return 0;
//}






//函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//
//int mian()
//{
//	int a = 29;
//	int b = 30;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}






//数组
//一种相同类型元素的集合

//int main()
//{
//	//int arr[10];//定义一个存放10个整形的数组
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", arr[4]);
//	//结果为5
//	int i = 1;
//	while (i<10)
//	{
//		printf("d\n",arr[i]);
//		i++;
//	}
//
//	return 0;
//}




//判断符

//int main()
//{
//	int a = 0;
//	int b = 0;				//c语言除了0都为真		
//	int e = 20;						
//	int f = 30;
//	int c = a && b;			//&&逻辑与
//	int g = a && e;
//	int d = a || b;			//||逻辑或
//	int h = a || e;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", g);
//	printf("%d\n", h);
//	return 0;
//}
//







//三目操作符

//int main()
//{
//	int a = 10;
//	int b = 31;
//	int max = 0;
//	max = (a > b ? a : b);//a>b成立所以吧a的值赋给max，不成立把b的值赋给max
//
//	/*if (a > b)
//		max = a;	等效与这个
//	else
//		max = b;*/
//
//	printf("%d\n", max);
//
//	return 0;
//}







//1+2+3+......+100累加

//int main()
//{
//	int i = 0;
//	int mun = 0;
//	while (i < 100)
//	{
//		i++;
//		mun = mun + i;
//	}
//	printf("1加到100=%d\n", mun);
//	return 0;
//}





//static修饰局部变量
// 局部变量的生命周期变长
// 
//void test()
//{
//	int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}
//输出结果：
//		a = 2
//		a = 2			a一出他的生命周期就没了，在回来又重新附值
//		a = 2
//		a = 2
//		a = 2


//void test()
//{
//	static int a = 1;//加了个static     a是一个静态的局部变量
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//}
//输出结果：
//a = 2			a保留了它的值	
//a = 3
//a = 4
//a = 5
//a = 6			





//static修饰全局变量
// 全局变量的作用域 --让静态的全局变量内部只能在源文件内部使用，出了源文件就没法使用了。





//static修饰函数
//在创一个源文件，里创一个函数，用extern调用外部函数可以使用，如果用static修饰了，就不能调用外部函数了。





//#define 定义标识符常亮
//#define Max 100
//#define 可以定义宏——带参数

////函数法
//Max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
////宏法
//#define MAX(X,Y)（X>Y?X:Y）
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("%d\n", max);
//	//宏
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}






//指针

//int main()
//{
//	//int a = 20；//
//
//	printf("%p\n", &a);//%p是打印地址符号
//	//a的地址是0000001F3C6FFAA4
//
//	int* p = &a; //           把a的地址存放在p里     p的类型是int*
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	
//	*p=20;//             *--解引用操作符
//	printf("a=%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	double a = 3.14;
//	double* p = &a;
//	printf("%p\n",p);
//	printf("%p\n", &a);
//	*p = 50.3765;
//	printf("%f\n", p);
//	printf("%zd\n", sizeof(p));//指针在32位是4   64位是8
//	return 0;
//}






//结构体

//书+价格+书名
//名字，身高

//struct Book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//
//};//***分号不可缺少
//
//int main()
//{
//	//创建结构体类型
//	struct Book b1 = { "c语言程序设计" ,55};	
//	printf("书名：%s\n",b1.name);					//.		.操作符——结构体变量.成员
//	printf("价格：%d元\n",b1.price);
//	b1.price = 15;
//	printf("两个月后\n");
//	printf("<<c语言程序设计>>修改后的价格是:%d元\n\n", b1.price);
//
//	//利用指针打印；
//	printf("利用指针打印:\n");
//	struct Book* a = &b1;
//	printf("书名：%s\n", (*a).name);
//	printf("价格：%d\n\n", (*a).price);
//	
//	//更简便的利用指针打印
//	printf("更简便的利用指针打印:\n");			
//	printf("书名：%s\n",a->name);					//->	->操作符——结构体指针->成员
//	printf("价格：%d\n", a->price);
//
//	return 0;
//}






//






















































