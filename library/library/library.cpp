// library.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/*图书信息管理模块 && 图书购入模块 */
/*图书分类：教育，文艺，人文，童书，经管，励志，科技，生活...*/
/*出版社：北京邮电大学出版社，清华大学出版社，机械工业出版社...*/
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>
#include<algorithm>
#include<cstdio>
#include<fstream> 
using namespace std;

typedef struct Book_Info
{
	string ID;//图书检索码  XX(图书类型）XXX(出版社)XXX(出版社书序号)XXX(图书流水号) 
	string Name;//图书名称 
	string Publish;//出版社名称 
	string Author;//作者名称 
	string Type;//图书类型 
	int State;//是否可借阅的状态 ,1为可借阅 
	int Appointment_Num;//图书预约数量 
	string Last_Borrow;//最近借书者 
	string Intro;
	int Reservations;
}Book_Info;

typedef struct Book
{
	vector<Book_Info> Info;
	int Book_Num;
	string ISBN;//书籍ID除去后三位流水号 
}Book;

const int maxn = 20;
map<string, int> BookType;//图书类型映射
map<string, int> BookPublish;//图书出版商映射 
map<string, int> PublishBookNum;//出版社出版图书
vector<Book> All_Book;

void Init_Map()
{
	string Type[100] = { "教育","文艺","人文","童书","经管","励志","科技","生活" };
	string Publish[500] = { "北京邮电大学出版社","清华大学出版社","机械工业出版社" };
	for (int i = 0; Type[i] != ""; i++)
	{
		BookType[Type[i]] = i;
	}
	for (int i = 0; Publish[i] != ""; i++)
	{
		BookPublish[Publish[i]] = i;
	}
	for (int i = 0; i < All_Book.size(); i++)
	{
		PublishBookNum[All_Book[i].Info[1].Publish]++;
	}
}

class Book_Management
{
private:
	vector<Book_Info> Data;
public:
	Book_Management();
	void Book_Init();
	string Code_Form(string Type, string Publish, string Name);//书籍编码生成 
	void Book_Purchase();//图书购入 
	void Book_Remove(Book Old_Book);//图书清理 
	void FindBookById(string ID);//按ID查找图书 
	void FindBookByName(string Name);//按图书名字查找图书 
	void FindBookByType(string Type);//按图书类型查找 
	void FindBookByAuthor(string Author);//按作者名称查找 
};

Book_Management::Book_Management()
{

}

Book_Management::~Book_Management()
{

}

void Book_Management::Book_Init()
{
	string information;
	string ISBN, lastISBN;
	Book book;
	Book::iterator it;
	Book_Info book_info;
	ifstream OpenFile("Book_Info.txt", ios::in);//打开数据库文件
	while (OpenFile.getline(information))
	{
		stringstream ss(information);
		ss >> book_info.ID;
		ss >> book_info.Name;
		ss >> book_info.Author;
		ss >> book_info.Publish;
		ss >> book_info.Intro;
		ss >> book_info.State;
		ss >> book_info.Last_Borrow;
		ss >> book_info.Reservations;
		for (int i = 0; i<8; i++)
			ISBN[i] = book_info.ID[i];
		if (ISBN == lastISBN)
		{
			it = All_Book.end();
			it->Book_Num++;
			it->Info.push_back(book_info);
		}
		else
		{
			book.ISBN = ISBN;
			book.Info.push_back(book_info);
			book.Book_Num++;
			All_Book.push_back(book);
		}
		lastISBN = ISBN;
		ss.clear();
	}
	printf("图书信息初始化完成\n");
}

void Book_Management::Book_Purchase()
{
	string Name, Publish, Author, Type, Intro;
	string ISBN;
	string judge;
	int NBook;
	Book book;
	Book_Info book_info;
	cout << "购入的图书是否有库存（YES/NO）";
	cin >> judge;
	if (judge == "YES")
	{
		int num;
		cout << "请输入图书的ISBN:";
			cin >> ISBN;
		for (int i = 0; i<All_Book.size(); i++)
		{
			if (All_Book[i].ISBN == ISBN)
			{
				cout << "请输入购买图书数目:";
				cin >> NBook;
				All_Book[i].Book_Num += NBook;
				break;
			}
		}
	}
	else
	{
		string id;
		cout << "请输入买入图书的名称：";
		cin >> book_info.Name;
		cout << "请输入该图书的出版社名称：";
		cin >> book_info.Publish;
		cout << "请输入该图书的类型";
		cin >> book_info.Type;
		cout << "请输入该图书的简介";
		cin >> book_info.Intro;
		cout << "请输入购买图书数目:";
		cin >> book.Book_Num;
		/*********************************************************************/
		ISBN = Code_Form(Type, Publish, Name);
		book.ISBN = ISBN;
		book.Info.push_back(book_info);
		All_Book.push_back(book);
		/**********************************************************************************************************
		*************************************************************************************************************
		**************************************************************************************************************/
	}
	printf("购入图书信息录入成功\n");
}

string Book_Management::Code_Form(string Type, string Publish, string Name)//Name用于流水号最后三位
{
	string ID;
	char* something;
	int num;//单本图书的数目
	/*********************************图书类型部分编号**********************/
	if (BookType.find(Type) != BookType.end())
	{
		if (BookType[Type] < 10)
		{
			itoa(BookType[Type], something, 10);
			ID += "0" + *something;
		}
		else
		{
			ID += *itoa(BookType[Type], something, 10);
		}
	}
	else
	{
		int num = BookType.size();
		BookType[Type] = num;
		if (BookType[Type] < 10)
		{
			itoa(BookType[Type], something, 10);
			ID += "0" + *something;
		}
		else
		{
			ID += *itoa(BookType[Type], something, 10);
		}
	}
	//********************出版社部分编号*********************************/
	if (BookPublish.find(Publish) != BookPublish.end())
	{
		if (BookPublish[Publish] < 10)
		{
			itoa(BookPublish[Publish], something, 10);
			ID += "00" + *something;
		}
		else if (BookPublish[Publish] >= 10 && BookPublish[Publish]<100)
		{
			ID += "0" + *itoa(BookPublish[Publish], something, 10);
		}
		else
		{
			ID += *itoa(BookPublish[Publish], something, 10);
		}
		PublishBookNum[Publish]++;
	}
	else
	{
		int num1 = BookPublish.size();
		BookPublish[Publish] = num1;
		PublishBookNum[Publish] = 1;
		if (BookPublish[Publish] < 10)
		{
			itoa(BookPublish[Publish], something, 10);
			ID += "00" + *something;
		}
		else if (BookPublish[Publish] >= 10 && BookPublish[Publish]<100)
		{
				ID += "0" + *itoa(BookPublish[Publish], something, 10);
		}
		else
		{
			ID += *itoa(BookPublish[Publish], something, 10);
		}
	}
	/******************************出版社图书数目部分编号*****************************/
	if (PublishBookNum[Publish] < 10)
	{
		itoa(PublishBookNum[Publish], something, 10);
		ID += "00" + *something;
	}
	else if (PublishBookNum[Publish] >= 0 && PublishBookNum[Publish] < 100)
	{
		itoa(PublishBookNum[Publish], something, 10);
		ID += "0" + *something;
	}
	else
	{
		ID += *something;
	}
	return ID;
}

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

