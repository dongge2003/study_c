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



////乘法表
//
//
//int main()
//{
//    int  i = 0, j = 0;
//    for (i = 1; i < 10; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%2d ", j, i, j * i);
//        }
//        printf("\n");
//    }
//    return 0;
//}


////1-2+3-4...+n的值
// 
// int main() 
//{
//    int n;
//    scanf("%d", &n);
//    int num = 0;
//    for (int i = 0; i <= n; i++)
//    {
//        if (i % 2 == 0)
//        {
//            num = num - i;
//            continue;
//        }
//        num = num + i;
//    }
//    printf("%d", num);
//    return 0;
//}



////计算：1+1/2+1/3+…+1/N的值
//
//int main()
//{
//    int n;
//    double sum = 0.0;       //必须用double,不然会丢失精度
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        sum += 1.0 / i;
//    }
//    printf("%.6lf\n", sum);     //因为float 有效数字只有6位，不够
//    return 0;
//}


////计算 1 + 1 / （1 - 3） + 1 / （1 - 3 + 5） + ... + 1 / (1 - 3 + 5 - ...((-1) ^ (n - 1)) * (2n - 1))的值
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d",&a);
//	double num = 0.0;//和
//	for (int i = 1;i <= a;i++)//计算和
//	{
//		int s = 0;//分母
//		for (int n = 1;n<=i;n++)//计算分母--1-3;1-3+5;1-3+5-7
//		{
//			if (n % 2 == 0)//偶数项
//			{
//				s -= (2 * n - 1);
//			}
//			else//奇数项
//			{
//				s += (2 * n - 1);
//			}
//		}
//		num = num + 1.0 / s;
//	}
//	printf("%.3f",num);
//
//	return 0;
//}



////计算 1+（1+2）+（1+2+3）+...+(1+2+3+...+n)
//
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	int num = 0;//总和
//	for (int i = 1;i<=a;i++)
//	{
//		int partsum = 0;//当前部分的和
//		//计算1+到i的和
//		for(int n = 1;n<=i;n++)
//		{
//			partsum += n;
//		}
//
//		num = num + partsum;
//	}
//	printf("%d",num);
//
//	return 0;
//}



////计算是几位数
//
//int weishu(int input)
//{
//	int wei = 0;
//	if (input == 0)
//	{
//		wei = 1;
//		return wei;
//	}
//		
//	else
//	{
//		while (input != 0)
//		{
//			input = input / 10;
//			wei++;
//
//		}
//		return wei;
//	}
//}
//int main()
//{
//	int input;
//	scanf("%d",&input);
//	//计算是几位数
//	weishu(input);
//	printf("是%d位数\n", weishu(input));
//
//	return 0;
//}



//// 计算一个整数的所有数位之和
//
//int main()
//{
//	int input;
//	scanf("%d",&input);
//
//	// 计算一个整数的所有数位之和
//	int sum = 0;
//	while (input != 0) 
//	{
//		sum += input % 10;  // 获取当前最低位数字并加到sum上
//		input /= 10;        // 移除最低位数字
//	}
//	printf("%d",sum);
//
//	return 0;
//}


////有一个数字魔法，给你一个正整数n，如果n为偶数，就将他变为n/2, 如果n为奇数，就将他变为乘3加1
////不断重复这样的运算，经过有限步之后，一定可以得到1
//
//int main()
//{
//	int input;
//	scanf("%d",&input);
//	int bushu = 0;
//
//	while (input != 1)
//	{
//		if (input % 2 == 0)
//		{
//			input = input / 2;
//			bushu++;
//		}
//		else
//		{
//			input = input * 3 + 1;
//			bushu++;
//		}
//
//	}
//	printf("%d",bushu);
//
//	return 0;
//}



////今年是2019年，KiKi想知道1~2019中有多少个包含数字9的数。包含数字的数是指有某一位是“9”的数，例如“2019”、“199”等。
////就是找余数为9的数
//
//int main() {
//	//n为符合要求的数字
//	int n = 0, i = 0;
//	for (i = 1; i <= 2019; i++) {
//		//个位、十位、百位取余结果若为9，则是我们需求的数字
//		if (i % 10 == 9 || (i / 10) % 10 == 9 || (i / 100) % 10 == 9) {
//			//符合情况，计数+1
//			n++;
//		}
//	}
//	printf("%d", n);
//
//}



////乐乐的班主任想统计一下班级里一共有多少人需要被请家长，三个成绩（语文，数学，外语）平均分低于60的将被请家长，
////共n+1行
////第一行，输入一个数n，代表小乐乐的班级中有n个同学。
////在接下来的n行中每行输入三个整数代表班级中一个同学的三科成绩（语文，数学，外语），用空格分隔。
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int yuwen, shuxue, yingyu;
//	int sum = 0;//被叫家长的人数
//	while (n != 0)
//	{
//		scanf("%d %d %d",&yuwen,&shuxue,&yingyu);
//		n--;
//		double ping = 0;
//		ping = (yuwen + shuxue + yingyu) / 3.0;
//			if (ping < 60.0)
//				sum++;
//	}
//
//	printf("%d",sum);
//
//
//	return 0;
//}



////水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153=1^3+5^3+3^3。 现在要求输出所有在m和n范围内的水仙花数。
////输入数据有多组，每组占一行，包括两个整数m和n（100 ≤ m ≤ n ≤ 999）。
//
//int main()
//{
//	int n, m;
//
//	//多组输入
//	while (scanf("%d %d",&n,&m) != EOF)
//	{
//		int cont = 0;
//		//有m-n个数,当m-n=0时,遍历完成,循环停止
//		while (m != n)
//		{
//			int a, b, c;
//			a = m / 100;//百位
//			b = (m / 10) % 10;//十位
//			c = m % 10;//个位
//			int shui = a * a * a + b * b * b + c * c * c;
//			if (shui == m)
//			{
//				printf("%d ", m);
//				cont++;
//			}
//				
//
//			m--;
//		}
//		if(cont == 0)
//
//		printf("no\n");
//
//	}
//
//
//	return 0;
//}



////变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）,（14和61）,（146和1),如果所有拆分后的乘积之和等于自身，则是一个Lily Number
////例如：
////655 = 6 * 55 + 65 * 5
////1461 = 1 * 461 + 14 * 61 + 146 * 1
////求出 5位数中的所有 Lily Number。
//
//int main()
//{
//	int i = 0;
//	//12345= 1*2345+ 12*345+ 123*45+ 1234*5
//	//遍历所有5位数
//	for (int i = 10000; i <= 99999; i++)
//	{
//		int num = 0;
//
//		//a*bcde
//		int a = i / 10000;
//		int bcde = i % 10000;
//		
//
//		//ab*cde
//		int ab = i / 1000;
//		int cde = i % 1000;
//		
//
//		//abc*de
//		int abc = i/100;
//		int de = i%100;
//		
//
//		//abcd*e
//		int abcd = i/10;
//		int e = i%10;
//		
//		num = a * bcde + ab * cde + abc * de + abcd * e;
//		if (num == i)
//			printf("%d ",i);
//
//	}
//
//
//	return 0;
//}




////有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
////（注：本题有多组输入）
//
//#define NUM_SCORES 7
//
//// 获取数组中的最高值
//int getMax(int arr[], int size) {
//    int max = arr[0];
//    for (int i = 1; i < size; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//
//// 获取数组中的最低值
//int getMin(int arr[], int size) {
//    int min = arr[0];
//    for (int i = 1; i < size; i++) {
//        if (arr[i] < min) {
//            min = arr[i];
//        }
//    }
//    return min;
//}
//
//// 计算去掉最高分和最低分后的平均值
//double calculateAverage(int arr[], int size) {
//    int max = getMax(arr, size);
//    int min = getMin(arr, size);
//    int sum = 0;
//    int count = 0;
//
//    for (int i = 0; i < size; i++) {
//        if (arr[i] != max && arr[i] != min) {
//            sum += arr[i];
//            count++;
//        }
//    }
//
//    return (double)sum / count;
//}
//
//int main() {
//    int scores[NUM_SCORES];
//
//    while (1) {
//        int input_count = 0;
//
//        printf("请输入7个分数（百分制），用空格分隔：");
//        for (int i = 0; i < NUM_SCORES; i++) {
//            if (scanf("%d", &scores[i]) == 1) {
//                input_count++;
//                if (scores[i] < 0 || scores[i] > 100) {
//                    printf("输入错误，请输入0到100之间的成绩。\n");
//                    return -1;
//                }
//            }
//            else {
//                break;
//            }
//        }
//
//        // 当输入不足7个分数时跳出循环
//        if (input_count < NUM_SCORES) {
//            break;
//        }
//
//        double average = calculateAverage(scores, NUM_SCORES);
//        printf("计算后的平均成绩是：%.2lf\n", average);
//    }
//
//    return 0;
//}



////将一个四位数，反向输出。1234->4321
//
//
//int main()
//{
//	int input;
//	scanf("%d",&input);
//
//	int arr[4] = {0};
//	for (int i = 0;i < 4;i++)
//	{
//		arr[i] = input % 10;
//		input /= 10;//去除最后一位数字
//	}
//
//	for (int n = 0; n < 4;n++)
//	{
//		printf("%d",arr[n]);
//	}
//
//	return 0;
//}



////输入一个数转化为6进制 7->11 13->21 
//
//#define jingzhi 6
//#define weishu 32
//int main()
//{
//	int input;
//	scanf("%d",&input);
//
//	//数为0,6进制也为0
//	if (input == 0)
//		printf("0\n");
//	
//	//数不为0,计算6进制
//	int arr[weishu] = {0};//初始化
//	int i = 0;//数组的索引
//	while (input != 0)
//	{	
//		arr[i] = input % jingzhi;
//		input /= jingzhi;
//		//知道了倒的6进制序列
//		//printf("%d ",arr[i]);
//		i++;
//	}
//	
//	//将倒的六进制正过来
//	//找到一个非0的值开始打印,并且不会停止
//	int star = 0;
//	for (int n = weishu-1;n >= 0;n--)
//	{
//		if (arr[n] != 0 || star)
//		{
//			printf("%d", arr[n]);
//			star = 1;
//		}
//		
//	}
//	
//
//	return 0;
//}



////第一天，骑士收到一枚金币；之后两天（第二天和第三天），每天收到两枚金币；之后三天（第四、五、六天），每天收到三枚金币；之后四天（第七、八、九、十天），每天收到四枚金币……；这种工资发放模式会一直这样延续下去：当连续N天每天收到N枚金币后，骑士会在之后的连续N + 1天里，每天收到N + 1枚金币。
////请计算在前K天里，骑士一共获得了多少金币。
//
//int main()
//{
//	int k;
//	scanf("%d",&k);
//
//	int day = 0,sum = 0;
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			sum += i;
//			day++;
//
//			if (day == k)
//			{
//				printf("%d",sum);
//				break;
//			}
//		}
//	}
//
//
//
//	return 0;
//}




////回文数-> 121 363 1221
//
//int main()
//{
//	int n;//1 <= n <= 100000
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (i < 10)
//		{
//			printf("%d\n", i);
//		}
//
//		else if (i < 100)
//		{
//			if (i/10 == i%10)
//				printf("%d\n",i);
//		}
//
//		else if (i < 1000)
//		{
//			if (i/100 == i%10)
//				printf("%d\n",i);
//		}
//
//		else if (i < 10000)
//		{
//			if (i/1000 == i%10 && i/100%10 == i/10%10 )
//				printf("%d\n", i);
//		}
//
//		else if (i < 100000)
//		{
//			if (i % 10 == i / 10000 && i / 1000 % 10 == i / 10 % 10)
//				printf("%d\n", i);
//		}
//
//	}
//	return 0;
//}



//

int main()
{


	return 0;
}