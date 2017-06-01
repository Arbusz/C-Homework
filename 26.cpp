#include<iostream>
#include<cstring>
using namespace std;
class String
{
	private:
		char* data;//用于保存字符
	public:
		String(const char* str=NULL);//普通构造函数
		String(const String &other);//拷贝构造函数
		~String();//析构函数
		void print();
};
String::String(const char* str)
{
	if(str)
	{
		data=new char[strlen(str)+1];
		strcpy(data,str);
	}
	else
	{
		data=new char[16];
		strcpy(data,"Oh,it's empty.");
	}
	cout<<data<<"Constructing"<<endl;
}
String::String(const String &other)
{
	if(other.data)
	{
		data=new char[strlen(other.data)+1];
		strcpy(data,other.data);
	}else
	{
		data=new char[16];
		strcpy(data,"Oh,it's empty.");
	}
	cout<<data<<"Copy Constructing"<<endl;
}
String::~String()
{
	cout<<data<<"Destructing"<<endl;
	delete []data;
}
void String::print()
{
	cout<<"data="<<data<<endl;
}


int main()
{
	String s1("fff");
	String s2(s1);
	String s3;
	s1.print();
	s2.print();
	s3.print();
	return 0;
}

