#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//结构体 -- 一些值的结合

//结构体的声明

//描述一个学生
//名字
//年龄
//电话
//性别

////struct结构体关键字  student结构体标签   struct student结构体类型
//struct student
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}s1,s2,s3; //s1 s2 s3是全局变量	

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;	//typedef 定义符号名称
//
//int main()
//{
//	//struct student s1;	//s是局部变量
//
//	struct stu s1;
//	stu s2;	//typedef定义过了
//
//
//
//	return 0;
//}




//结构体变量的定义和初始化


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
//	struct stu s1 = {"张三" , 20 ,"15022868413" , "男"};	//初始化
//	stu s2 = {"李四" , 20 , "11345683894" , "女"};
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
//	struct s s1;	//结构体成员包含其他结构体
//	char* pc;
//
//};
//
//
//int main()
//{
//	char arr2[] = {"hello world!"};
//	struct t t1 = { "hehe" , {100 , 'd' , "hello c!" , 3.14} ,arr2}; //结构体包含结构体的初始化也要{}
//	printf("%s\n", t1.ch);		//hehe
//	printf("%d\n", t1.s1.a);	//100
//	printf("%s\n", t1.s1.arr);	//hello c!
//	printf("%s\n", t1.pc);		//hello world!
//
//	return 0;
//}





//图书管理系统

#define _CRT_SECURE_NO_WARNINGS //vs2022中用来取消scanf的不安全错误

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NAME_LENGTH 100 //定义名字、ISBN等字符串的最大长度

// 书籍结构体
typedef struct Book 
{
    char title[MAX_NAME_LENGTH]; //书籍名
    char author[MAX_NAME_LENGTH]; //书籍作者
    char publisher[MAX_NAME_LENGTH]; //书籍出版商
    char ISBN[MAX_NAME_LENGTH]; //书籍ISBN码
    int isBorrowed; // 0: 未借出, 1: 已借出
} Book;

// 链表节点结构体
typedef struct BookNode 
{
    Book book;
    struct BookNode* next;
} BookNode;

// 借阅记录结构体
typedef struct BorrowRecord 
{
    char ISBN[MAX_NAME_LENGTH]; //书籍ISBN码
    char borrower[MAX_NAME_LENGTH]; //借阅人
    char borrow_time[MAX_NAME_LENGTH]; //借阅时间
    char return_time[MAX_NAME_LENGTH]; //归还时间
    struct BorrowRecord* next; //指向下一个借阅记录的指针,形成链表
} BorrowRecord;

// 全局变量
BookNode* bookList = NULL; // 书籍链表的头指针, 用于存储所有书籍信息
BorrowRecord* recordList = NULL; // 借阅记录链表的头指针, 用于存储所有借阅记录信息

// 获取当前时间字符串函数
void getCurrentTime(char* buffer) 
{
    time_t t = time(NULL); //获取当前的日历时间
    struct tm* tm_info = localtime(&t); //将时间 t 转换为本地时间，并返回指向 tm 结构的指针，该结构包含日期和时间的信息。
    strftime(buffer, MAX_NAME_LENGTH, "%Y-%m-%d %H:%M:%S", tm_info);//将 tm_info 中的时间格式化为 "%Y-%m-%d %H:%M:%S" 格式的字符串并存储在 buffer 中。
}

// 添加书籍函数
void addBook() 
{
    BookNode* newBookNode = (BookNode*)malloc(sizeof(BookNode));
    printf("请输入书名: ");
    scanf("%s", newBookNode->book.title);
    printf("请输入作者: ");
    scanf("%s", newBookNode->book.author);
    printf("请输入出版社: ");
    scanf("%s", newBookNode->book.publisher);
    printf("请输入ISBN号: ");
    scanf("%s", newBookNode->book.ISBN);
    newBookNode->book.isBorrowed = 0;
    newBookNode->next = bookList;
    bookList = newBookNode;
    printf("书籍添加成功!\n");
}

// 查询书籍函数
void searchBook() 
{
    char keyword[MAX_NAME_LENGTH];
    printf("请输入书名或作者进行查询: ");
    scanf("%s", keyword);

    BookNode* cur = bookList; // 指向书籍链表的当前节点
    int found = 0;
    // 遍历书籍链表 
    while (cur != NULL)
    {
        if (strstr(cur->book.title, keyword) != NULL || strstr(cur->book.author, keyword) != NULL) //strstr 用于在一个字符串中查找另一个字符串,这里用来判断书籍名或者作者是否包含关键字
        {
            printf("书名: %s, 作者: %s, 出版社: %s, ISBN号: %s, 状态: %s\n",cur->book.title, cur->book.author, cur->book.publisher, cur->book.ISBN,cur->book.isBorrowed ? "已借出" : "未借出");
            found = 1;
        }
        cur = cur->next;
    }

    if (found != 1) 
    {
        printf("未找到符合条件的书籍。\n");
    }
}

// 借阅书籍函数
void borrowBook() 
{
    char ISBN[MAX_NAME_LENGTH];
    char borrower[MAX_NAME_LENGTH];
    printf("请输入借阅书籍的ISBN号: ");
    scanf("%s", ISBN);

    BookNode* cur = bookList; // 指向书籍链表的当前节点
    while (cur != NULL) 
    {
        // 判断当前节点的书籍ISBN与用户输入的ISBN是否匹配，且该书籍是否未被借出
        if (strcmp(cur->book.ISBN, ISBN) == 0 && !cur->book.isBorrowed) 
        {
            cur->book.isBorrowed = 1; // 更新书籍状态为已借出

            // 创建新的借阅记录节点
            BorrowRecord* newRecord = (BorrowRecord*)malloc(sizeof(BorrowRecord));
            strcpy(newRecord->ISBN, ISBN); //strcpy 用于将源字符串复制到目标字符串。
            printf("请输入借阅人姓名: ");
            scanf("%s", borrower);
            strcpy(newRecord->borrower, borrower);
            getCurrentTime(newRecord->borrow_time);
            strcpy(newRecord->return_time, "未归还");
            newRecord->next = recordList;
            recordList = newRecord;

            printf("借阅成功!\n");
            return;
        }
        cur = cur->next;
    }
    printf("未找到符合条件的书籍或该书籍已被借出。\n");
}

// 归还书籍函数
void returnBook() 
{
    char ISBN[MAX_NAME_LENGTH];
    printf("请输入归还书籍的ISBN号: ");
    scanf("%s", ISBN);

    BookNode* cur = bookList; //指向书籍链表的当前节点
    while (cur != NULL) 
    {
        // 检查当前节点的书籍ISBN是否与用户输入的ISBN号匹配，且该书籍已被借出
        if (strcmp(cur->book.ISBN, ISBN) == 0 && cur->book.isBorrowed) 
        {
            cur->book.isBorrowed = 0;// 更新书籍状态为未借出

            // 遍历借阅记录链表，找到对应的借阅记录
            BorrowRecord* rec = recordList;
            while (rec != NULL) 
            {
                // 检查借阅记录的ISBN是否匹配，且归还时间为"未归还"
                if (strcmp(rec->ISBN, ISBN) == 0 && strcmp(rec->return_time, "未归还") == 0) 
                {
                    // 更新归还时间为当前时间
                    getCurrentTime(rec->return_time);
                    printf("归还成功!\n");
                    return;
                }
                rec = rec->next;
            }
        }
        cur = cur->next;
    }
    printf("未找到该书籍或该书籍未被借出。\n");
}

// 打印所有借阅记录函数
void printRecords()
{
    BorrowRecord* cur = recordList;
    while (cur != NULL)
    {
        printf("ISBN号: %s, 借阅人: %s, 借阅时间: %s, 归还时间: %s\n",cur->ISBN, cur->borrower, cur->borrow_time, cur->return_time);
        cur = cur->next;
    }
}

// 主函数
int main() 
{
    int choice;
    while (1) 
    {
        printf("\n图书馆管理系统\n");
        printf("1. 添加书籍\n");
        printf("2. 查询书籍\n");
        printf("3. 借阅书籍\n");
        printf("4. 归还书籍\n");
        printf("5. 查看借阅记录\n");
        printf("0. 退出系统\n");
        printf("请输入你的选择: ");
        scanf("%d", &choice);

        switch (choice) 
        {
        case 1:
            addBook(); //添加书籍
            break;
        case 2:
            searchBook(); //查询书籍
            break;
        case 3:
            borrowBook(); //借阅书籍
            break;
        case 4:
            returnBook(); //归还书籍
            break;
        case 5:
            printRecords(); //查看借阅记录
            break;
        case 0:
            printf("退出系统\n");
            return 0;
        default:
            printf("无效的选择\n");
        }
    }
    return 0;
}