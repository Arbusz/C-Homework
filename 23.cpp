#include<iostream>
using namespace std;
class Time
{
	private:
		int hour;
		int minute;
		int second;
	public:
	Time(int h=0,int m=0,int s=0)
	{
		if(h>=0&&h<24)
			hour=h;
		else hour=0;
		if(m>=0&&m<60)
			minute=m;
		else minute=0;
		if(s>=0&&s<60)
			second=s;
		else second=0;
	}
	~Time()
	{
		cout<<"descruting"<<endl;
	}
	void setHour(int Hour)
	{
		cout<<"输入修改后的时"<<endl;
		cin>>Hour;
		hour=Hour;
	}
	void setMinute(int Minute)
	{
		cout<<"输入修改后的分"<<endl;
		cin>>Minute;
		minute=Minute;
	}
	void setSecond(int Second)
	{
		cout<<"输入修改后的秒"<<endl;
		cin>>Second;
		second=Second;
	}
	void print()
	{
		cout<<hour<<":"<<minute<<":"<<second<<endl;
	}
	void setTime()
	{
		int ho,mi,se;
		cout<<"输入修改的时间:"<<endl;
		cin>>ho>>mi>>se;
		hour=ho;
		minute=mi;
		second=se;
	}
	void tick()
	{
		if(second==59)
		{
			if(minute==59)
			{
				if(hour==23)
				{
					second=0;
					minute=0;
					hour=0;
				}
				else
				{
					second=0;
					minute=0;
					hour++;
				}
			}
			else
			{
				second=0;
				minute++;
			}
		}
		else
		{
			second++;
		}
		cout<<"当前时间："<<hour<<":"<<minute<<":"<<second<<endl;
	}
};
int main()
{
	Time t;
	cout<<"初试时间为："<<endl;
	t.print();
	t.setTime();
	cout<<"修改后的时间为："<<endl;
	t.print();
	return 0;
}
