
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



//��n�ý׳�


int jiecheng(int i)
{
	int sum = 0;
	for (i = 1; i <= i; i++)
	{
		sum = i * (i + 1);
	}
	return sum;
}

int main()
{
	int n;
	printf("�󼸵Ľ׳ˣ�\n");
	scanf_s("%d",&n);
	int len = jiecheng(n);
	printf("%d\n",len);

	return 0;
}