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
			cout<<"destructing"<<endl;
		}
		Time operator + (int x);
		Time operator - (int y);
		Time& operator ++ ();
		Time& operator -- ();
		friend ostream& operator << (ostream&, Time& T);
		void setTime(Time& T);
};

void Time::setTime(Time& T)
{
	if(T.second<0)
	{
		second+=60;
		minute--;
		if(minute<60)
			{
				minute+=60;
				hour--;
				if(hour<0)
					hour+=24;
			}
	}
}

ostream& operator << (ostream& out, Time& T)
{
	out<<T.hour<<":"<<T.minute<<":"<<T.second<<endl;
	return out;
}

Time Time::operator + (int x)
{
	second+=x;
	minute=minute+second/60;
	second=second%60;
	hour=hour+minute/60;
	minute=minute%60;
	hour=hour%24;
}

Time Time::operator - (int y)
{
	second-=y;
	if(second<0)
	{minute--;
		if(minute<0)
			hour--;
	}
	setTime(*this);
	return *this;
}

Time & Time::operator ++ ()
{
	this->second+=1;
	if(this->second>=60)
	{
        this->second+=1;
        this->minute=this->minute+this->second/60;
        this->second=this->second%60;
        this->hour=this->hour+this->minute/60;
        this->minute=this->minute%60;
        this->hour=this->hour%24;
	};
	return *this;
}

Time & Time::operator--()
{
    second-=1;
	if(second,0)
	{minute--;
		if(minute<0)
			hour--;
	}
	setTime(*this);
	return *this;
}

int main()
{
	Time t(21,12,34);
	t++;
	cout<<t<<endl;
}

