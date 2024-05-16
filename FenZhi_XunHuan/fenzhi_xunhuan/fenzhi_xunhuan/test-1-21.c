#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//输出0-100的奇数
//int main()
//{
//	int a = 1;
//	int b;
//	
//	while (a < 100 )
//	{
//		b = a % 2;
//		if (b == 1)
//		{												//else就近原则
//			printf("%d\n", a);
//			a++;
//		}
//		else
//			a++;
//	}
//	return 0;
//}


//输出0-100的奇数简单方法
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d\t", a);
//		a = a + 2;
//	}
//	return 0;
//
//}


//switch语句	
// 
// 
//int main()
//{
//	int day = 0;
//	scanf_s("%d",&day);
//	switch (day)
//	{
//		case 1:									//case后必须是常量 不能前面定义一个a=1，然后用case 1：
//				printf("星期一"); break;
//		case 2:
//				printf("星期二"); break;			//break  遇见break跳出Switch语句，否则继续往下执行
//		case 3:
//				printf("星期三"); break;
//		case 4:
//				printf("星期四"); break;
//		case 5:
//				printf("星期五"); break;
//		case 6:
//				printf("星期六"); break;
//		case 7:
//				printf("星期天"); break;
//	}
//
//	return 0;
//}


//周一到周五工作日，周六周天休息日
//int main()
//{
//	int day = 0;
//	scanf_s("%d",&day);
//	switch (day)
//	{
//		case 1:	
//		case 2:		
//		case 3:		
//		case 4:	
//		case 5:
//			printf("工作日"); 
//			break;
//		case 6:		
//		case 7:
//			printf("休息日"); 
//			break;
//	}
//	
//	return 0;
//}
//



//int main()
//{
//	int day = 0;
//	scanf_s("%d",&day);
//	switch (day)
//	{
//		case 1:	
//		case 2:		
//		case 3:		
//		case 4:	
//		case 5:
//			printf("工作日"); 
//			break;
//		case 6:		
//		case 7:
//			printf("休息日"); 
//			break;
//		default:					//	default没有选项时用deafault并且default可以放前面				
//			printf("输入错误");
//	}
//	
//	return 0;
//}


//死循环
// 
//int main()
//{
//	int i = 1;
//	while (1)
//	{
//		printf("haha");     
//	}
//
//	return 0;
//}



//打印1——————1000
// 
//int main()
//{
//	int a = 1;
//	int i = 1;
//	while (i < 1000)
//	{
//		printf("%d\n",a);			//打印1——————1000
//		i++;
//		a++;
//	}
//
//	return 0;
//}


//for循环
//for(1;2;3)

//int main()
//{
//	int i = 0;
//	for (i=1 ; i < 100; i++)
//	{
//		printf("%d\n",i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)		//=  ==
//			continue;
//		printf("%d\n",i);
//	}
//
//	return 0;
//}



////计算n的阶乘
//
//int main()
//{
//	int n = 0;
//	printf("算几的阶乘？\n");
//	scanf_s("%d",&n);
//	int i = 0;
//	int a = 1;
//	for ( i = 1; i <= n ; i++)
//	{
//		a = a * i;	//a=1 ,2 ,6 ,24, 120
//	}
//	printf("等于%d",a);
//	return 0;
//
//}



////计算1！+2！.....+10!
//
//int main()
//{
//		int n = 5;
//		int i = 0;
//		int a = 1;
//		int sum = 0;
//		for ( i = 1; i <= n ; i++)
//		{
//			a = a * i;	
//			sum = sum + a;
//		}
//		printf("和为%d\n",sum);//1 3 9 33 153
//		printf("阶乘为%d\n", a);//1 2 6 24 120
//	return 0;
//}



int main()
{



	return 0;
}