#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	//strcmp strlen

////算数运算符
//
//int main()
//{
//	//加法 + 
//	int a = 10 + 20;
//	printf("%d\n",a);
//	
//	//减法 -
//	int b = 30 - 10;
//	printf("%d\n", b);
//
//	//乘法 *
//	int c = 10 * 10;
//	printf("%d\n", c);
//
//	//除法 /
//	int d = 100 / 10;
//	printf("%d\n", d);
//
//	//求余 %
//	float e = 5 % 3;
//	printf("%f\n", e);
//
//	return 0;
//
//}



////逻辑运算符:
//
//
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int c = 20;
//	int d = 0;
//	//逻辑与 &&
//	if (a == 20 && c == 20)
//	{
//		printf("%d %d\n",a,c);
//	}
//
//	//逻辑或 ||
//	if (a == 20 || b == 20)
//	{
//		printf("%d %d\n",a,b);
//	}
//
//	//逻辑非 ！---逻辑非操作符(!)在C语言中用来取反布尔值。它将非0值转换为0（false），将0值转换为1（true）。
//	if (!d)
//	{
//		printf("d不为0\n");
//	}
//
//	return 0;
//}



////赋值运算符
//
//
//int main()
//{	
//	//等于 =
//	int a = 10;
//	printf("%d\n",a);
//
//	int i = 20;
//	int n = 30;
//	int m = 2;
//	//加等 +=
//	i += n;		//i = i+n;
//	printf("%d\n", i);
//
//	//减等 -=
//	n -= i;		//n = n-i;
//	printf("%d\n", n);
//
//	//乘等 *=  
//	n *= m;		
//	printf("%d\n", n);
//	 
//	//除等 /=
//	n /= m;
//	printf("%d\n", n);
//
//	//余等 %=
//	n %= m;
//	printf("%f\n", n);
//	printf("------------------------------------------");
//	//自增自减
//	int c = 0;
//	for (c = 0 ; c < 10; c++)	//先用在加
//	{
//		printf("%d\n",c);
//	}
//	printf("------------------------------------------");
//	int d = 20;
//	for (d =20;d>0;--d)		//先减在用
//	{
//		printf("%d\n",d);
//	}
//	
//	
//	return 0;
//}



////位运算符
//
//int main()
//{
//	int a = 5;	//二进制00000101 ->5
//	int b = 3;	//二进制00000011	->3
//
//	//按位与 &
//	int yu = a & 3;	//00000001 ->1
//	printf("%d\n",yu);
//
//	//按位或 |
//	int huo = a | b;	//00000111 ->7
//	printf("%d\n",huo);
//
//	//按位异或 ^
//	int yihuo = a ^ b;	//00000110
//	printf("%d\n",yihuo);
//
//	//按位取反 ~
//	int fan = ~a;	//11111010 -> -6
//	printf("%d\n",fan);
//
//	//左移 <<
//	int zuo = a << b;	//左移3位 00101000 -> 40
//	printf("%d\n",zuo);
//
//	//右移 >>
//	int you = a >> b;	//右移3位 00000000 -> 0
//	printf("%d\n", you);
//
//	return 0;
//}





////杂项运算符
//
//int main()
//{
//	//sizeof 返回变量的大小
//	int a = 20;
//	printf("%d\n",sizeof(a));
//
//	//&（当用于一个运算对象时）返回变量的地址 *（当用于一个运算对象时）指针解引用
//	int* b = &a;
//	printf("%d\n",b);
//
//	// ?: 三元条件运算符
//	int c = 10, d = 20;
//	int max;
//	max = (c > d) ? c : d;
//	printf("max = %d\n",max);
//
//	return 0;
//}



////
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	// = a++ && ++b && d++;
//	//假&&真&&真->左边为0右边没算		a = 1 b = 2 c = 3 d = 4
//	
//
//	i = a++ || ++b || d++;
//	//假||真||真->		a = 1  b = 3  c = 3  d = 4
//
//
//
//	printf("a = %d  b = %d  c = %d  d = %d ",a,b,c,d);
//
//	return 0;
//}




////结构体 . ->
//
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	struct stu s1 = {"小明",20,"20240135"};
//	
//	//.
//	printf("%d\n",s1.age);
//	printf("%s\n", s1.id);
//	printf("%s\n", s1.name);
//
//	//->
//	struct stu* ps = &s1;
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	printf("%s\n", ps->name);
//
//	return 0;
//}




////大端和小端
//
//int chek_sys()
//{
//	int a = 1;
//	int* p = (char*) & a;
//	return *p;
//}
//
//int main()
//{
//	int a = 20;
//	//00000000 00000000 00000000 00010100 二进制(20)
//	//0x14 00 00 00 十六进制(内存)
//	//00010100 00000000 00000000 00000000 二进制(内存)
//
//	//低地址..........................高地址
//	//0x14 00 00 00 小端
//	//0x00 00 00 14 大端
//
//
//	//告诉当前机器的字节序是什么 (代码)
//	int g = 1;
//	char* p = (char*)&g;
//	if (*p == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//
//	//函数
//	int ret = chek_sys();
//
//	return 0;
//}



//整形类型存储
//char(ASCII码)  shot  int  long

	/*
	char(1)
	unsigned char
	signed char

	short(2)
	unsigned short
	signed short

	int(4)
	unsigned int
	signed int

	long(8)
	unsigned long
	signed long
	*/



//int main()
//{
//	char a = -128;
//	printf("%u",a);		//%u无符号型整数
//
//	return 0;
//}

//4294967168(输出)
// -128(原反补)
//1000 0000 0000 0000 0000 0000 1000 0000 原
//1111 1111 1111 1111 1111 1111 0111 1111
//1111 1111 1111 1111 1111 1111 1000 0000
//整形提升
//1111 1111 1111 1111 1111 1111 1000 0000 补
//1111 1111 1111 1111 1111 1111 1000 0000
//1111 1111 1111 1111 1111 1111 1000 0000


//char -128..127
//int main()
//{
//	char a = 128;
//	printf("%u",a);		//%u无符号型整数
//
//	return 0;
//}

//4294967168(输出)




//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;
//	printf("n的值为: %d\n",n);
//	printf("*pfloat的值为: %f\n",*pfloat);
//
//	*pfloat = 9.0;
//	printf("num的值为: %d\n",n);
//	printf("*pfloat的值为: %f\n", *pfloat);
//
//
//	return 0;
//}
//
////n的值为: 9
////*pfloat的值为: 0.000000
////num的值为 : 1091567616
////* pfloat的值为 : 9.000000



////标题中可能包含大、小写英文字母、数字字符、空格和换行符。统计标题字 符数时，空格和换行符不计算在内。
//
//int main()
//{
//	char s[1000];
//	int cont = 0;
//	printf("输入标题\n");
//
//	gets(s);
//	//gets 是一个用于读取标准输入（stdin）的函数，它会读取一整行输入直到换行符或文件结束符（EOF），并将结果存储在一个字符数组中
//	//。不同于其他读取输入的函数，gets 会自动处理输入中的空格，并将换行符替换为字符串终止符 \0
//
//	int get = strlen(s);
//
//	for (int i = 0; i < get; i++)	//strlen获取字符串长度
//	{
//		//数字
//		if (s[i] >= '0' && s[i] <= '9')
//		{
//			cont++;
//		}
//
//		//大写字母
//		if (s[i] >= 'A' && s[i] <= 'Z')
//		{
//			cont++;
//		}
//
//		//小写字母
//		if (s[i] >= 'a' && s[i] <= 'z')
//		{
//			cont++;
//		}
//
//	}
//	
//	//printf("有 %d 字符\n", get);
//	printf("有 %d 字符\n",cont);
//
//	return 0;
//}



////有个软件系统登录的用户名和密码为（用户名：admin，密码：admin），用户输入用户名和密码，判断是否登录成功。
//
//int main()
//{
//	char username[100];
//	char password[100];
// 
//	printf("请输入用户名和密码,中间用空格格开");
//	scanf("%s %s",username,password);//使用 scanf 函数读取字符串并且不需要使用地址运算符 &。直接用数组名传递给 scanf：
//
//	//strcmp比较字符串
//	//string.h的头文件,int strcmp(const char *str1, const char *str2);
//	//如果 str1 和 str2 相同，则返回零。
//	//如果 str1 小于 str2，则返回一个负值。
//	//如果 str1 大于 str2，则返回一个正值。
//	// strcmp 是区分大小写的，所以 "admin" 和 "Admin" 被认为是不同的字符串
//	
//	//登录成功
//	if (strcmp(username, "admin") == 0  && strcmp(password, "admin") == 0)
//		printf("Login Success!\n");
//	//登录失败
//	else
//		printf("Login Fail!\n");
//	
//
//
//
//	return 0;
//}





////假设maxn是单词中出现次数最多的字母的出现次数，minn是单词中出现次数最少的字母的出现次数，如果maxn-minn是一个质数，那么笨小猴就认为这是个Lucky Word
//
//int main()
//{
//	int maxn = 0, minn = 0;
//	//Lucky Word
//
//	char arr[100];
//	scanf("%s",arr);//输入字符不用&
//	int lenth = strlen(arr);
//	
//	//统计字母出现次数
//
//
//
//	return 0;
//}



////计算max(ab,b,c)/max(a,bc,c)+max(a,b,bc)
//
//float get_max(float x, float y, float z)
//{
//    float max = x;//假设max初始值是x
//    if (y > max)
//        max = y;
//    if (z > max)
//        max = z;
//    return max;
//
//}
//
//
//
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    //获取最大值
//    int ab = a + b;
//    int bc = b + c;
//    float max1 = get_max(ab, b, c);
//    float max2 = get_max(a, bc, c);
//    float max3 = get_max(a, b, bc);
//
//    //计算
//    float result = max1 / (max2 + max3);
//    printf("%.2f", result);
//
//
//    return 0;
//}




//求出[a,b]区间内有多少个数数位之和为5的倍数
//说明：14和19的数位和为5和10，符合条件

int main()
{
	//输入下上限
	int a, b;
	scanf("%d %d",&a,&b);

	
	for (int i = a;i <= b;i++)
	{
		int tmp = i;
		int sum = 0;
		//取数13
		while (tmp == 0)
		{
			sum += tmp % 10;
			tmp /= 10;
		}

		if()

	}



	return 0;

}





