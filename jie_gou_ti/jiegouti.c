#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ṹ�� -- һЩֵ�Ľ��

//�ṹ�������

//����һ��ѧ��
//����
//����
//�绰
//�Ա�

////struct�ṹ��ؼ���  student�ṹ���ǩ   struct student�ṹ������
//struct student
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}s1,s2,s3; //s1 s2 s3��ȫ�ֱ���	

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;	//typedef �����������
//
//int main()
//{
//	//struct student s1;	//s�Ǿֲ�����
//
//	struct stu s1;
//	stu s2;	//typedef�������
//
//
//
//	return 0;
//}




//�ṹ������Ķ���ͳ�ʼ��


//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;	
//
//int main()
//{
//	struct stu s1 = {"����" , 20 ,"15022868413" , "��"};	//��ʼ��
//	stu s2 = {"����" , 20 , "11345683894" , "Ů"};
//
//	return 0;
//}


//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct t
//{
//	char ch[10];
//	struct s s1;	//�ṹ���Ա���������ṹ��
//	char* pc;
//
//};
//
//
//int main()
//{
//	char arr2[] = {"hello world!"};
//	struct t t1 = { "hehe" , {100 , 'd' , "hello c!" , 3.14} ,arr2}; //�ṹ������ṹ��ĳ�ʼ��ҲҪ{}
//	printf("%s\n", t1.ch);		//hehe
//	printf("%d\n", t1.s1.a);	//100
//	printf("%s\n", t1.s1.arr);	//hello c!
//	printf("%s\n", t1.pc);		//hello world!
//
//	return 0;
//}





//ͼ�����ϵͳ

#define _CRT_SECURE_NO_WARNINGS //vs2022������ȡ��scanf�Ĳ���ȫ����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NAME_LENGTH 100 //�������֡�ISBN���ַ�������󳤶�

// �鼮�ṹ��
typedef struct Book 
{
    char title[MAX_NAME_LENGTH]; //�鼮��
    char author[MAX_NAME_LENGTH]; //�鼮����
    char publisher[MAX_NAME_LENGTH]; //�鼮������
    char ISBN[MAX_NAME_LENGTH]; //�鼮ISBN��
    int isBorrowed; // 0: δ���, 1: �ѽ��
} Book;

// ����ڵ�ṹ��
typedef struct BookNode 
{
    Book book;
    struct BookNode* next;
} BookNode;

// ���ļ�¼�ṹ��
typedef struct BorrowRecord 
{
    char ISBN[MAX_NAME_LENGTH]; //�鼮ISBN��
    char borrower[MAX_NAME_LENGTH]; //������
    char borrow_time[MAX_NAME_LENGTH]; //����ʱ��
    char return_time[MAX_NAME_LENGTH]; //�黹ʱ��
    struct BorrowRecord* next; //ָ����һ�����ļ�¼��ָ��,�γ�����
} BorrowRecord;

// ȫ�ֱ���
BookNode* bookList = NULL; // �鼮�����ͷָ��, ���ڴ洢�����鼮��Ϣ
BorrowRecord* recordList = NULL; // ���ļ�¼�����ͷָ��, ���ڴ洢���н��ļ�¼��Ϣ

// ��ȡ��ǰʱ���ַ�������
void getCurrentTime(char* buffer) 
{
    time_t t = time(NULL); //��ȡ��ǰ������ʱ��
    struct tm* tm_info = localtime(&t); //��ʱ�� t ת��Ϊ����ʱ�䣬������ָ�� tm �ṹ��ָ�룬�ýṹ�������ں�ʱ�����Ϣ��
    strftime(buffer, MAX_NAME_LENGTH, "%Y-%m-%d %H:%M:%S", tm_info);//�� tm_info �е�ʱ���ʽ��Ϊ "%Y-%m-%d %H:%M:%S" ��ʽ���ַ������洢�� buffer �С�
}

// ����鼮����
void addBook() 
{
    BookNode* newBookNode = (BookNode*)malloc(sizeof(BookNode));
    printf("����������: ");
    scanf("%s", newBookNode->book.title);
    printf("����������: ");
    scanf("%s", newBookNode->book.author);
    printf("�����������: ");
    scanf("%s", newBookNode->book.publisher);
    printf("������ISBN��: ");
    scanf("%s", newBookNode->book.ISBN);
    newBookNode->book.isBorrowed = 0;
    newBookNode->next = bookList;
    bookList = newBookNode;
    printf("�鼮��ӳɹ�!\n");
}

// ��ѯ�鼮����
void searchBook() 
{
    char keyword[MAX_NAME_LENGTH];
    printf("���������������߽��в�ѯ: ");
    scanf("%s", keyword);

    BookNode* cur = bookList; // ָ���鼮����ĵ�ǰ�ڵ�
    int found = 0;
    // �����鼮���� 
    while (cur != NULL)
    {
        if (strstr(cur->book.title, keyword) != NULL || strstr(cur->book.author, keyword) != NULL) //strstr ������һ���ַ����в�����һ���ַ���,���������ж��鼮�����������Ƿ�����ؼ���
        {
            printf("����: %s, ����: %s, ������: %s, ISBN��: %s, ״̬: %s\n",cur->book.title, cur->book.author, cur->book.publisher, cur->book.ISBN,cur->book.isBorrowed ? "�ѽ��" : "δ���");
            found = 1;
        }
        cur = cur->next;
    }

    if (found != 1) 
    {
        printf("δ�ҵ������������鼮��\n");
    }
}

// �����鼮����
void borrowBook() 
{
    char ISBN[MAX_NAME_LENGTH];
    char borrower[MAX_NAME_LENGTH];
    printf("����������鼮��ISBN��: ");
    scanf("%s", ISBN);

    BookNode* cur = bookList; // ָ���鼮����ĵ�ǰ�ڵ�
    while (cur != NULL) 
    {
        // �жϵ�ǰ�ڵ���鼮ISBN���û������ISBN�Ƿ�ƥ�䣬�Ҹ��鼮�Ƿ�δ�����
        if (strcmp(cur->book.ISBN, ISBN) == 0 && !cur->book.isBorrowed) 
        {
            cur->book.isBorrowed = 1; // �����鼮״̬Ϊ�ѽ��

            // �����µĽ��ļ�¼�ڵ�
            BorrowRecord* newRecord = (BorrowRecord*)malloc(sizeof(BorrowRecord));
            strcpy(newRecord->ISBN, ISBN); //strcpy ���ڽ�Դ�ַ������Ƶ�Ŀ���ַ�����
            printf("���������������: ");
            scanf("%s", borrower);
            strcpy(newRecord->borrower, borrower);
            getCurrentTime(newRecord->borrow_time);
            strcpy(newRecord->return_time, "δ�黹");
            newRecord->next = recordList;
            recordList = newRecord;

            printf("���ĳɹ�!\n");
            return;
        }
        cur = cur->next;
    }
    printf("δ�ҵ������������鼮����鼮�ѱ������\n");
}

// �黹�鼮����
void returnBook() 
{
    char ISBN[MAX_NAME_LENGTH];
    printf("������黹�鼮��ISBN��: ");
    scanf("%s", ISBN);

    BookNode* cur = bookList; //ָ���鼮����ĵ�ǰ�ڵ�
    while (cur != NULL) 
    {
        // ��鵱ǰ�ڵ���鼮ISBN�Ƿ����û������ISBN��ƥ�䣬�Ҹ��鼮�ѱ����
        if (strcmp(cur->book.ISBN, ISBN) == 0 && cur->book.isBorrowed) 
        {
            cur->book.isBorrowed = 0;// �����鼮״̬Ϊδ���

            // �������ļ�¼�����ҵ���Ӧ�Ľ��ļ�¼
            BorrowRecord* rec = recordList;
            while (rec != NULL) 
            {
                // �����ļ�¼��ISBN�Ƿ�ƥ�䣬�ҹ黹ʱ��Ϊ"δ�黹"
                if (strcmp(rec->ISBN, ISBN) == 0 && strcmp(rec->return_time, "δ�黹") == 0) 
                {
                    // ���¹黹ʱ��Ϊ��ǰʱ��
                    getCurrentTime(rec->return_time);
                    printf("�黹�ɹ�!\n");
                    return;
                }
                rec = rec->next;
            }
        }
        cur = cur->next;
    }
    printf("δ�ҵ����鼮����鼮δ�������\n");
}

// ��ӡ���н��ļ�¼����
void printRecords()
{
    BorrowRecord* cur = recordList;
    while (cur != NULL)
    {
        printf("ISBN��: %s, ������: %s, ����ʱ��: %s, �黹ʱ��: %s\n",cur->ISBN, cur->borrower, cur->borrow_time, cur->return_time);
        cur = cur->next;
    }
}

// ������
int main() 
{
    int choice;
    while (1) 
    {
        printf("\nͼ��ݹ���ϵͳ\n");
        printf("1. ����鼮\n");
        printf("2. ��ѯ�鼮\n");
        printf("3. �����鼮\n");
        printf("4. �黹�鼮\n");
        printf("5. �鿴���ļ�¼\n");
        printf("0. �˳�ϵͳ\n");
        printf("���������ѡ��: ");
        scanf("%d", &choice);

        switch (choice) 
        {
        case 1:
            addBook(); //����鼮
            break;
        case 2:
            searchBook(); //��ѯ�鼮
            break;
        case 3:
            borrowBook(); //�����鼮
            break;
        case 4:
            returnBook(); //�黹�鼮
            break;
        case 5:
            printRecords(); //�鿴���ļ�¼
            break;
        case 0:
            printf("�˳�ϵͳ\n");
            return 0;
        default:
            printf("��Ч��ѡ��\n");
        }
    }
    return 0;
}