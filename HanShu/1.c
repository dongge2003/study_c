#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����


//���
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


//// ȡ���ֵ
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
//	//������ʹ��
//	int max = get_max(a, b);
//		printf("%d",max);
//
//}




////����
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


////����ƽ��
//
// 
//
//int is_year(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0 || i%400 == 0)	//�����ж�
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
//		//����ֵ1���꣬0ƽ��
//		if (is_year(year) == 1)
//			printf("%d������\n", year);
//		else
//			printf("%d��ƽ��\n",year);
//	}
//
//}







////���ֲ���
//
//int binary_search(int arr[], int sz,int k)
//{
////�㷨��ʵ��
//	int left = 0;
//	int right = sz-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;	//�м�Ԫ���±�
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
//			printf("�Ҳ�������\n");
//		}
//		else
//		{
//			printf("�ҵ����±���%d\n",ret);
//		}
//
//	return 0;
//
//}




////��������ʽ����
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




////�����ӡ����ֵ
//
//
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));	//4321
//	//printf����ֵ�Ǵ�ӡ�ַ��ĸ���
//	// 
//	//printf("%d",printf("%d",2))      ֱ�Ӵ�ӡ43	 printf("%d",43)����ֵ��2   432
//	//printf("%d",2)				  printf("%d",2)����ֵ��1    4321
//
//	return 0;
//}




////�����������붨��
//
//
//
//
//int Add(int ,int );		//����������
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
////���������棬����δ����ʱ�ᱨ��
//
//
////�����Ķ���
//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}





////ͷ�ļ���Դ�ļ��ĺ����Ķ���������,�����������ù���һ��ģ��
//
//
//#include "Add.h"	//�����Լ���ͷ�ļ���"ͷ�ļ�"	���ÿ⺯����<>	
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
////�����ĵݹ�-�Լ������Լ�
//
//
//
//int main()
//{
//	printf("hehe");
//	main();				//��ݹ����пؼ�·������������������ʱ�� "ջ���"
//
//}





////����1234����ӡ1 2 3 4
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





////�������������ֵ
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
//	printf("���ֵ��%d", max_of_three(a, b, c)); 
//
//	return 0;
//}
//





////���ÿ⺯�����ַ�������
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
//	char str[100];	 // ������һ���㹻����ַ��������洢������ַ���
//	printf("������һ���ַ�\n");
//	scanf_s("%s",str,100);	// ��Ҫ�ṩ��������С
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
//	printf("�������ַ�\n");
//	scanf_s("%s",&arr,100);
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//
//	return 0;
//}



////��n�ý׳�
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
//	printf("�󼸵Ľ׳ˣ�\n");
//	scanf("%d",&n);
//	int len = jiecheng(n);
//	printf("%d\n",len);
//
//	return 0;
//}





////�������
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



////���[a,b]�������ж��ٸ�����λ֮��Ϊ5�ı���
//
//int judge_five(int number)
//{
//	number %= 5;
//	if (number == 0)
//		return 1;
//	else
//		return 0;
//
//	//��5�ı�������1,���Ƿ���0
//}
//
//int sum_five(int a,int b)
//{
//	int cont = 0;//�����Ǵ���
//
//	//����
//	for (int i = a;i <= b;i++)
//	{
//		//�ж��������
//		int num = 0;
//		int ii = i;
//
//		//����
//		while (ii != 0)
//		{
//			int n = ii;
//			n %= 10;
//			ii /= 10;
//
//			//���
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




////����һ��������������λ�ϵ����ֽ��мӺͣ��õ��µ����������������Ǹ�λ���Ļ�����ô��������������
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





////��ͳ��ĳ��������Χ[L, R]�����������У�����2���ֵĴ�����
//#define key_number 2;
//
//int Statistical_times(int a, int b)
//{
//	int cont = 0;//ͳ�ƴ���
//	//����
//	for (int i = a;i <= b;i++)
//	{
//		//����
//		int ii = i;
//		while (ii != 0)
//		{
//			int n = ii;
//			n %= 10;
//			ii /= 10;
//
//			//�ж�
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




////1.ÿ�������շ�0.1Ԫ
////2.ÿ����Ϣ������������60�֣��������60�֣�������0.2Ԫ�ļ۸��շѡ�
////ţţ����·��� n �����ţ�����ţţһ��Ҫ�ɶ��ٶ��ŷ�
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
//	//n������
//	int n;
//	scanf("%d", &n);
//
//	//��n�����ŵ�����,��ͳ�ƶ��ų���60�ֵ�����
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





////һ����n��̨��,ÿ�ο���ѡ����һ�׻��������ף�һ���ж������߷���
////����n����̨�ף�
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
//    // ͨ�����ƹ�ϵʽ�����n�׵��߷���
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
//    printf("������̨����: ");
//    scanf("%d", &n);
//
//    int totalWays = climbStairs(n);
//    printf("���� %d ���߷�\n", totalWays);
//
//    return 0;
//}



int main()
{

	return 0;
}