#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	//strcmp strlen

////���������
//
//int main()
//{
//	//�ӷ� + 
//	int a = 10 + 20;
//	printf("%d\n",a);
//	
//	//���� -
//	int b = 30 - 10;
//	printf("%d\n", b);
//
//	//�˷� *
//	int c = 10 * 10;
//	printf("%d\n", c);
//
//	//���� /
//	int d = 100 / 10;
//	printf("%d\n", d);
//
//	//���� %
//	float e = 5 % 3;
//	printf("%f\n", e);
//
//	return 0;
//
//}



////�߼������:
//
//
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int c = 20;
//	int d = 0;
//	//�߼��� &&
//	if (a == 20 && c == 20)
//	{
//		printf("%d %d\n",a,c);
//	}
//
//	//�߼��� ||
//	if (a == 20 || b == 20)
//	{
//		printf("%d %d\n",a,b);
//	}
//
//	//�߼��� ��---�߼��ǲ�����(!)��C����������ȡ������ֵ��������0ֵת��Ϊ0��false������0ֵת��Ϊ1��true����
//	if (!d)
//	{
//		printf("d��Ϊ0\n");
//	}
//
//	return 0;
//}



////��ֵ�����
//
//
//int main()
//{	
//	//���� =
//	int a = 10;
//	printf("%d\n",a);
//
//	int i = 20;
//	int n = 30;
//	int m = 2;
//	//�ӵ� +=
//	i += n;		//i = i+n;
//	printf("%d\n", i);
//
//	//���� -=
//	n -= i;		//n = n-i;
//	printf("%d\n", n);
//
//	//�˵� *=  
//	n *= m;		
//	printf("%d\n", n);
//	 
//	//���� /=
//	n /= m;
//	printf("%d\n", n);
//
//	//��� %=
//	n %= m;
//	printf("%f\n", n);
//	printf("------------------------------------------");
//	//�����Լ�
//	int c = 0;
//	for (c = 0 ; c < 10; c++)	//�����ڼ�
//	{
//		printf("%d\n",c);
//	}
//	printf("------------------------------------------");
//	int d = 20;
//	for (d =20;d>0;--d)		//�ȼ�����
//	{
//		printf("%d\n",d);
//	}
//	
//	
//	return 0;
//}



////λ�����
//
//int main()
//{
//	int a = 5;	//������00000101 ->5
//	int b = 3;	//������00000011	->3
//
//	//��λ�� &
//	int yu = a & 3;	//00000001 ->1
//	printf("%d\n",yu);
//
//	//��λ�� |
//	int huo = a | b;	//00000111 ->7
//	printf("%d\n",huo);
//
//	//��λ��� ^
//	int yihuo = a ^ b;	//00000110
//	printf("%d\n",yihuo);
//
//	//��λȡ�� ~
//	int fan = ~a;	//11111010 -> -6
//	printf("%d\n",fan);
//
//	//���� <<
//	int zuo = a << b;	//����3λ 00101000 -> 40
//	printf("%d\n",zuo);
//
//	//���� >>
//	int you = a >> b;	//����3λ 00000000 -> 0
//	printf("%d\n", you);
//
//	return 0;
//}





////���������
//
//int main()
//{
//	//sizeof ���ر����Ĵ�С
//	int a = 20;
//	printf("%d\n",sizeof(a));
//
//	//&��������һ���������ʱ�����ر����ĵ�ַ *��������һ���������ʱ��ָ�������
//	int* b = &a;
//	printf("%d\n",b);
//
//	// ?: ��Ԫ���������
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
//	//��&&��&&��->���Ϊ0�ұ�û��		a = 1 b = 2 c = 3 d = 4
//	
//
//	i = a++ || ++b || d++;
//	//��||��||��->		a = 1  b = 3  c = 3  d = 4
//
//
//
//	printf("a = %d  b = %d  c = %d  d = %d ",a,b,c,d);
//
//	return 0;
//}




////�ṹ�� . ->
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
//	struct stu s1 = {"С��",20,"20240135"};
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




////��˺�С��
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
//	//00000000 00000000 00000000 00010100 ������(20)
//	//0x14 00 00 00 ʮ������(�ڴ�)
//	//00010100 00000000 00000000 00000000 ������(�ڴ�)
//
//	//�͵�ַ..........................�ߵ�ַ
//	//0x14 00 00 00 С��
//	//0x00 00 00 14 ���
//
//
//	//���ߵ�ǰ�������ֽ�����ʲô (����)
//	int g = 1;
//	char* p = (char*)&g;
//	if (*p == 1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//
//	//����
//	int ret = chek_sys();
//
//	return 0;
//}



//�������ʹ洢
//char(ASCII��)  shot  int  long

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
//	printf("%u",a);		//%u�޷���������
//
//	return 0;
//}

//4294967168(���)
// -128(ԭ����)
//1000 0000 0000 0000 0000 0000 1000 0000 ԭ
//1111 1111 1111 1111 1111 1111 0111 1111
//1111 1111 1111 1111 1111 1111 1000 0000
//��������
//1111 1111 1111 1111 1111 1111 1000 0000 ��
//1111 1111 1111 1111 1111 1111 1000 0000
//1111 1111 1111 1111 1111 1111 1000 0000


//char -128..127
//int main()
//{
//	char a = 128;
//	printf("%u",a);		//%u�޷���������
//
//	return 0;
//}

//4294967168(���)




//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;
//	printf("n��ֵΪ: %d\n",n);
//	printf("*pfloat��ֵΪ: %f\n",*pfloat);
//
//	*pfloat = 9.0;
//	printf("num��ֵΪ: %d\n",n);
//	printf("*pfloat��ֵΪ: %f\n", *pfloat);
//
//
//	return 0;
//}
//
////n��ֵΪ: 9
////*pfloat��ֵΪ: 0.000000
////num��ֵΪ : 1091567616
////* pfloat��ֵΪ : 9.000000



////�����п��ܰ�����СдӢ����ĸ�������ַ����ո�ͻ��з���ͳ�Ʊ����� ����ʱ���ո�ͻ��з����������ڡ�
//
//int main()
//{
//	char s[1000];
//	int cont = 0;
//	printf("�������\n");
//
//	gets(s);
//	//gets ��һ�����ڶ�ȡ��׼���루stdin���ĺ����������ȡһ��������ֱ�����з����ļ���������EOF������������洢��һ���ַ�������
//	//����ͬ��������ȡ����ĺ�����gets ���Զ����������еĿո񣬲������з��滻Ϊ�ַ�����ֹ�� \0
//
//	int get = strlen(s);
//
//	for (int i = 0; i < get; i++)	//strlen��ȡ�ַ�������
//	{
//		//����
//		if (s[i] >= '0' && s[i] <= '9')
//		{
//			cont++;
//		}
//
//		//��д��ĸ
//		if (s[i] >= 'A' && s[i] <= 'Z')
//		{
//			cont++;
//		}
//
//		//Сд��ĸ
//		if (s[i] >= 'a' && s[i] <= 'z')
//		{
//			cont++;
//		}
//
//	}
//	
//	//printf("�� %d �ַ�\n", get);
//	printf("�� %d �ַ�\n",cont);
//
//	return 0;
//}



////�и����ϵͳ��¼���û���������Ϊ���û�����admin�����룺admin�����û������û��������룬�ж��Ƿ��¼�ɹ���
//
//int main()
//{
//	char username[100];
//	char password[100];
// 
//	printf("�������û���������,�м��ÿո��");
//	scanf("%s %s",username,password);//ʹ�� scanf ������ȡ�ַ������Ҳ���Ҫʹ�õ�ַ����� &��ֱ�������������ݸ� scanf��
//
//	//strcmp�Ƚ��ַ���
//	//string.h��ͷ�ļ�,int strcmp(const char *str1, const char *str2);
//	//��� str1 �� str2 ��ͬ���򷵻��㡣
//	//��� str1 С�� str2���򷵻�һ����ֵ��
//	//��� str1 ���� str2���򷵻�һ����ֵ��
//	// strcmp �����ִ�Сд�ģ����� "admin" �� "Admin" ����Ϊ�ǲ�ͬ���ַ���
//	
//	//��¼�ɹ�
//	if (strcmp(username, "admin") == 0  && strcmp(password, "admin") == 0)
//		printf("Login Success!\n");
//	//��¼ʧ��
//	else
//		printf("Login Fail!\n");
//	
//
//
//
//	return 0;
//}





////����maxn�ǵ����г��ִ���������ĸ�ĳ��ִ�����minn�ǵ����г��ִ������ٵ���ĸ�ĳ��ִ��������maxn-minn��һ����������ô��С�����Ϊ���Ǹ�Lucky Word
//
//int main()
//{
//	int maxn = 0, minn = 0;
//	//Lucky Word
//
//	char arr[100];
//	scanf("%s",arr);//�����ַ�����&
//	int lenth = strlen(arr);
//	
//	//ͳ����ĸ���ִ���
//
//
//
//	return 0;
//}



////����max(ab,b,c)/max(a,bc,c)+max(a,b,bc)
//
//float get_max(float x, float y, float z)
//{
//    float max = x;//����max��ʼֵ��x
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
//    //��ȡ���ֵ
//    int ab = a + b;
//    int bc = b + c;
//    float max1 = get_max(ab, b, c);
//    float max2 = get_max(a, bc, c);
//    float max3 = get_max(a, b, bc);
//
//    //����
//    float result = max1 / (max2 + max3);
//    printf("%.2f", result);
//
//
//    return 0;
//}




//���[a,b]�������ж��ٸ�����λ֮��Ϊ5�ı���
//˵����14��19����λ��Ϊ5��10����������

int main()
{
	//����������
	int a, b;
	scanf("%d %d",&a,&b);

	
	for (int i = a;i <= b;i++)
	{
		int tmp = i;
		int sum = 0;
		//ȡ��13
		while (tmp == 0)
		{
			sum += tmp % 10;
			tmp /= 10;
		}

		if()

	}



	return 0;

}





