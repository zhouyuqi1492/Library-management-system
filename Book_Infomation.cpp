/*图书信息管理模块 && 图书购入模块 */ 
/*图书分类：教育，文艺，人文，童书，经管，励志，科技，生活...*/
/*出版社：北京邮电大学出版社，清华大学出版社，机械工业出版社...*/
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;

const int maxn = 20;
map<string, int> BookType;//图书类型映射
map<string, int> BookPublish;//图书出版商映射 

typedef struct Book_Info
{
	string ID;//图书检索码  XX(图书类型）XXX(出版社)XXX(出版社书序号)XXX(图书流水号) 
	string Name;//图书名称 
	string Publish;//出版社名称 
	string Auther;//作者名称 
	string Type;//图书类型 
	int State;//是否可借阅的状态 ,1为可借阅 
	int Appointment_Num;//图书预约数量 
	string Last_Borrow;//最近借书者 
	string Intro;
 }Book_Info;
 
typedef struct Book
{
	vector<Book> Info;
	int Book_Num;
}Book;
 
class Book_Management
{
	private:
		vector<Book_Info> Data;
	public:
		Book_Management();
		void Book_Init(); 
		void Book_Purchase(Book New_Book);//图书购入 
		void Book_Remove(Book Old_Book);//图书清理 
		void FindBookById(string ID);//按ID查找图书 
		void FindBookByName(string Name);//按图书名字查找图书 
		void FindBookByType(string Type);//按图书类型查找 
		void FindBookByAuthor(string Author);//按作者名称查找 
};

Book_Management::Book_Init()
{
	 
 } 
 
 Book_Management::Book_Purchase()
 {
 	string Name, Publish, Auther, Type, Intro;
	int NBook; 
 	cout<<"请输入买入图书的名称："; 
 	cin>>Name;
 	cout<<"请输入该图书的出版社名称：";
 	cin>>Publish;
 	cout<<"请输入该图书的类型";
	cin>>Type;
	cout<<"请输入该图书的购入数量" ;
	cin>>NBook;
	cout<<"请输入该图书的简介";
	cin>>Intro； 
  } 
 
 
 
 
 
