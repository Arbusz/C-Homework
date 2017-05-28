#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class String
{
	private:
		string s;
		int m;
	public:
		String operator()(int,int);//重载（）
		String operator + (String &s1);
		bool operator < (String &s1);
		friend ostream& operator << (ostream& out, String& s1);
		friend istream& operator >> (istream& in,String& s1);
};

String String::operator()(int a,int b)
{
	String temp;
	temp.s.assign(s,a,b);
	return temp;
}

String String::operator + (String &s1)
{
	String temp;
	temp.s=s+s1.s;
	return temp;
}

bool String::operator <(String &s1)
{
    return s<s1.s;
}
istream& operator >> (istream& in, String &s1)
{
	in>>s1.s;
	return in;
}

ostream& operator << (ostream& out,String &s1)
{
	out<<s1.s<<endl;
	return out;
}

int main()
{
	String s1,s2;
	cin>>s1;
	cout<<s1;
	cin>>s2;
	cout<<s2;
	String s3=s1+s2;
	cout<<s3;
	String s4=s1(2,4);
	cout<<s4;
	if(s1<s2)
        cout<<"s2"<<endl;
	else
        cout<<"s1"<<endl;
}
