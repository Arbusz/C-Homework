#include<iostream>
#include<cmath>
using namespace std;
class Rational
{
	private:
		int num;//分子
		int den;//分母
	public:
		Rational (int n=0,int d=0):num(n),den(d){}
		int getnum()
		{
		return num;
		}
		int getden()
		{
		return den;
		}
		void setRational(int n,int d)
		{
			num=n;
			den=d;
		}
		void simple();
		Rational operator + (const Rational &r2)
		{
			Rational r;
			r.num=num*r2.den+den*r2.num;
			r.den=den*r2.den;
			simple();
			return r;
		}

		Rational operator - (const Rational &r2)
		{
			Rational r;
			r.num=num*r2.den-den*r2.num;
			r.den=den*r2.den;
			simple();
			return r;
		}

		Rational operator * (const Rational &r2)
		{
			Rational r;
			r.num=num*r2.num;
			r.den=den*r2.den;
			simple();
			return r;
		}

		Rational operator / (const Rational &r2)
		{
			Rational r;
			r.num=num*r2.den;
			r.den=den*r2.num;
			simple();
			return r;
		}

		bool operator > (const Rational& r2) const
		{
			return num*r2.den > den*r2.num;
		}

		bool operator <= (const Rational& r2) const
		{
			return num*r2.den <= den*r2.num;
		}

		bool operator == (const Rational& r2) const
		{
			return num*r2.den == den*r2.num;
		}

		friend ostream& operator << (ostream& out, const Rational& r2);

};

void Rational::simple()
{
	int j=0;
	for (int i=0;i<=num&&i<=den;i++)
		if(num%i==0&&den%i==0)
			j=i;
	num=num/j;
	den=den/j;
}

ostream & operator << (ostream& out,Rational &r3)
{
	out<<r3.getnum()<<"/"<<r3.getden();
	return out;
}

int main()
{
	Rational r0,r1(1,2),r2(1,3);
	r0=r1+r2;
	cout<<r0.getnum();
	return 0;
}
