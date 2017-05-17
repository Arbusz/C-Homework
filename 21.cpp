#include<iostream>
using namespace std;
class Time
{
	private:
		int hour,minute, second;
	public:
		Time(int h=0,int m=0,int s=0)
		{
			if(h>=0&&h<24)
				hour=h;
			else hour=0;
			if(m>=0&&m,60)
				minute=m;
			else minute=m;
			if(s>=0&&s<60)
				second=0;
			else second=s;
		}
		void setTime()
		{
			int h,m,s;
			cout<<"输入修改时间";
			cin>>h>>m>>s;
			if(h<0||h>23||m<0||m>59||s<0||s>59)
				cout<<"时间设定错误"<<endl;
			else
			{
				hour=h;
				minute=m;
				second=s;
			}
		}
		~Time()
		{
		}
		void print()
		{
			cout<<"时间是： "<<hour<<":"<<minute<<":"<<second<<endl;
		}
};

int main()
{
	Time t;
	cout<<"初始时间是："<<endl;
	t.print();
	t.setTime();
	cout<<"修改后的时间是："<<endl;
	t.print();
}
