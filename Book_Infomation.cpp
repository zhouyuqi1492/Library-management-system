/*图书信息管理模块 && 图书购入模块 */ 
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;

const int maxn = 20;

typedef struct Book_Info
{
	string ID;//图书检索码 
	string Name;//图书名称 
	string Publish;//出版社名称 
	string Auther;//作者名称 
	string Type;//图书类型 
	int State;//是否可借阅的状态 
	int Appointment_Num;//图书预约数量 
	string Last_Borrow;//上位借书者 
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

