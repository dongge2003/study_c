#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//���0-100������
//int main()
//{
//	int a = 1;
//	int b;
//	
//	while (a < 100 )
//	{
//		b = a % 2;
//		if (b == 1)
//		{												//else�ͽ�ԭ��
//			printf("%d\n", a);
//			a++;
//		}
//		else
//			a++;
//	}
//	return 0;
//}


//���0-100�������򵥷���
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


//switch���	
// 
// 
//int main()
//{
//	int day = 0;
//	scanf_s("%d",&day);
//	switch (day)
//	{
//		case 1:									//case������ǳ��� ����ǰ�涨��һ��a=1��Ȼ����case 1��
//				printf("����һ"); break;
//		case 2:
//				printf("���ڶ�"); break;			//break  ����break����Switch��䣬�����������ִ��
//		case 3:
//				printf("������"); break;
//		case 4:
//				printf("������"); break;
//		case 5:
//				printf("������"); break;
//		case 6:
//				printf("������"); break;
//		case 7:
//				printf("������"); break;
//	}
//
//	return 0;
//}


//��һ�����幤���գ�����������Ϣ��
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
//			printf("������"); 
//			break;
//		case 6:		
//		case 7:
//			printf("��Ϣ��"); 
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
//			printf("������"); 
//			break;
//		case 6:		
//		case 7:
//			printf("��Ϣ��"); 
//			break;
//		default:					//	defaultû��ѡ��ʱ��deafault����default���Է�ǰ��				
//			printf("�������");
//	}
//	
//	return 0;
//}


//��ѭ��
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



//��ӡ1������������1000
// 
//int main()
//{
//	int a = 1;
//	int i = 1;
//	while (i < 1000)
//	{
//		printf("%d\n",a);			//��ӡ1������������1000
//		i++;
//		a++;
//	}
//
//	return 0;
//}


//forѭ��
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



////����n�Ľ׳�
//
//int main()
//{
//	int n = 0;
//	printf("�㼸�Ľ׳ˣ�\n");
//	scanf_s("%d",&n);
//	int i = 0;
//	int a = 1;
//	for ( i = 1; i <= n ; i++)
//	{
//		a = a * i;	//a=1 ,2 ,6 ,24, 120
//	}
//	printf("����%d",a);
//	return 0;
//
//}



////����1��+2��.....+10!
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
//		printf("��Ϊ%d\n",sum);//1 3 9 33 153
//		printf("�׳�Ϊ%d\n", a);//1 2 6 24 120
//	return 0;
//}



////�˷���
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


////1-2+3-4...+n��ֵ
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



////���㣺1+1/2+1/3+��+1/N��ֵ
//
//int main()
//{
//    int n;
//    double sum = 0.0;       //������double,��Ȼ�ᶪʧ����
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        sum += 1.0 / i;
//    }
//    printf("%.6lf\n", sum);     //��Ϊfloat ��Ч����ֻ��6λ������
//    return 0;
//}


////���� 1 + 1 / ��1 - 3�� + 1 / ��1 - 3 + 5�� + ... + 1 / (1 - 3 + 5 - ...((-1) ^ (n - 1)) * (2n - 1))��ֵ
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d",&a);
//	double num = 0.0;//��
//	for (int i = 1;i <= a;i++)//�����
//	{
//		int s = 0;//��ĸ
//		for (int n = 1;n<=i;n++)//�����ĸ--1-3;1-3+5;1-3+5-7
//		{
//			if (n % 2 == 0)//ż����
//			{
//				s -= (2 * n - 1);
//			}
//			else//������
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



////���� 1+��1+2��+��1+2+3��+...+(1+2+3+...+n)
//
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	int num = 0;//�ܺ�
//	for (int i = 1;i<=a;i++)
//	{
//		int partsum = 0;//��ǰ���ֵĺ�
//		//����1+��i�ĺ�
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



////�����Ǽ�λ��
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
//	//�����Ǽ�λ��
//	weishu(input);
//	printf("��%dλ��\n", weishu(input));
//
//	return 0;
//}



//// ����һ��������������λ֮��
//
//int main()
//{
//	int input;
//	scanf("%d",&input);
//
//	// ����һ��������������λ֮��
//	int sum = 0;
//	while (input != 0) 
//	{
//		sum += input % 10;  // ��ȡ��ǰ���λ���ֲ��ӵ�sum��
//		input /= 10;        // �Ƴ����λ����
//	}
//	printf("%d",sum);
//
//	return 0;
//}


////��һ������ħ��������һ��������n�����nΪż�����ͽ�����Ϊn/2, ���nΪ�������ͽ�����Ϊ��3��1
////�����ظ����������㣬�������޲�֮��һ�����Եõ�1
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



////������2019�꣬KiKi��֪��1~2019���ж��ٸ���������9�������������ֵ�����ָ��ĳһλ�ǡ�9�����������硰2019������199���ȡ�
////����������Ϊ9����
//
//int main() {
//	//nΪ����Ҫ�������
//	int n = 0, i = 0;
//	for (i = 1; i <= 2019; i++) {
//		//��λ��ʮλ����λȡ������Ϊ9�������������������
//		if (i % 10 == 9 || (i / 10) % 10 == 9 || (i / 100) % 10 == 9) {
//			//�������������+1
//			n++;
//		}
//	}
//	printf("%d", n);
//
//}



////���ֵİ�������ͳ��һ�°༶��һ���ж�������Ҫ����ҳ��������ɼ������ģ���ѧ�����ƽ���ֵ���60�Ľ�����ҳ���
////��n+1��
////��һ�У�����һ����n������С���ֵİ༶����n��ͬѧ��
////�ڽ�������n����ÿ������������������༶��һ��ͬѧ�����Ƴɼ������ģ���ѧ��������ÿո�ָ���
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int yuwen, shuxue, yingyu;
//	int sum = 0;//���мҳ�������
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



////ˮ�ɻ�������ָһ����λ�������ĸ�λ���ֵ������͵����䱾�����磺153=1^3+5^3+3^3�� ����Ҫ�����������m��n��Χ�ڵ�ˮ�ɻ�����
////���������ж��飬ÿ��ռһ�У�������������m��n��100 �� m �� n �� 999����
//
//int main()
//{
//	int n, m;
//
//	//��������
//	while (scanf("%d %d",&n,&m) != EOF)
//	{
//		int cont = 0;
//		//��m-n����,��m-n=0ʱ,�������,ѭ��ֹͣ
//		while (m != n)
//		{
//			int a, b, c;
//			a = m / 100;//��λ
//			b = (m / 10) % 10;//ʮλ
//			c = m % 10;//��λ
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



////����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�����1461 ���Բ�ֳɣ�1��461��,��14��61��,��146��1),������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number
////���磺
////655 = 6 * 55 + 65 * 5
////1461 = 1 * 461 + 14 * 61 + 146 * 1
////��� 5λ���е����� Lily Number��
//
//int main()
//{
//	int i = 0;
//	//12345= 1*2345+ 12*345+ 123*45+ 1234*5
//	//��������5λ��
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




////��7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
////��ע�������ж������룩
//
//#define NUM_SCORES 7
//
//// ��ȡ�����е����ֵ
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
//// ��ȡ�����е����ֵ
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
//// ����ȥ����߷ֺ���ͷֺ��ƽ��ֵ
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
//        printf("������7���������ٷ��ƣ����ÿո�ָ���");
//        for (int i = 0; i < NUM_SCORES; i++) {
//            if (scanf("%d", &scores[i]) == 1) {
//                input_count++;
//                if (scores[i] < 0 || scores[i] > 100) {
//                    printf("�������������0��100֮��ĳɼ���\n");
//                    return -1;
//                }
//            }
//            else {
//                break;
//            }
//        }
//
//        // �����벻��7������ʱ����ѭ��
//        if (input_count < NUM_SCORES) {
//            break;
//        }
//
//        double average = calculateAverage(scores, NUM_SCORES);
//        printf("������ƽ���ɼ��ǣ�%.2lf\n", average);
//    }
//
//    return 0;
//}



////��һ����λ�������������1234->4321
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
//		input /= 10;//ȥ�����һλ����
//	}
//
//	for (int n = 0; n < 4;n++)
//	{
//		printf("%d",arr[n]);
//	}
//
//	return 0;
//}



////����һ����ת��Ϊ6���� 7->11 13->21 
//
//#define jingzhi 6
//#define weishu 32
//int main()
//{
//	int input;
//	scanf("%d",&input);
//
//	//��Ϊ0,6����ҲΪ0
//	if (input == 0)
//		printf("0\n");
//	
//	//����Ϊ0,����6����
//	int arr[weishu] = {0};//��ʼ��
//	int i = 0;//���������
//	while (input != 0)
//	{	
//		arr[i] = input % jingzhi;
//		input /= jingzhi;
//		//֪���˵���6��������
//		//printf("%d ",arr[i]);
//		i++;
//	}
//	
//	//������������������
//	//�ҵ�һ����0��ֵ��ʼ��ӡ,���Ҳ���ֹͣ
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



////��һ�죬��ʿ�յ�һö��ң�֮�����죨�ڶ���͵����죩��ÿ���յ���ö��ң�֮�����죨���ġ��塢���죩��ÿ���յ���ö��ң�֮�����죨���ߡ��ˡ��š�ʮ�죩��ÿ���յ���ö��ҡ��������ֹ��ʷ���ģʽ��һֱ����������ȥ��������N��ÿ���յ�Nö��Һ���ʿ����֮�������N + 1���ÿ���յ�N + 1ö��ҡ�
////�������ǰK�����ʿһ������˶��ٽ�ҡ�
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




////������-> 121 363 1221
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