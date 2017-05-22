#include<iostream>
#include<cstdlib>
using namespace std;
class Rational
{
	public:
		Rational(int N=1,int M=1);//构造函数
		Rational R_add(Rational &A);//加
		Rational R_sub(Rational &A);//减
		Rational R_mul(Rational &A);//乘
		Rational R_div(Rational &A);//除
		void print(); //以简分数形式显示
	private:
		void simple();
		int m;
		int n;
};
Rational::Rational(int N,int M)
{
	if(M==0)
	{
		cout<<"分母不能为0"<<endl;
		exit(0);
	}
	n=N;
	m=M;
}
Rational Rational::R_add(Rational &A)
{
	n=A.m*n+A.n*m;
	m=A.m*m;
	simple();
}
/*Rational Rational::R_sub(Rational& A)
{
	n=A.m*n+A.n*m;
	if(n>=0)
	{
		m=A.m*m;
		simple();
	}
	else 
		cout<<"error";
}*/
Rational Rational::R_mul(Rational &A)
{
	n=A.n*n;
	m=A.m*m;
//	simple();
}
Rational Rational::R_div(Rational &A)
{
	n*=A.m;
	m*=A.n;
}
void Rational::simple()
{
	int num=1;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0&&m%i==0)
			num=i;
	}
	n=n/num;
	m=m/num;
}
void Rational::print()
{
	simple();
	cout<<n<<"/"<<m<<endl;
}


int main()
{
	Rational a(1,2);
	Rational b(1,3);
//	a.print();
//	b.print();
//	a.R_add(b);
//	a.print();
//	a.R_sub();
//	a.print();
	a.R_mul(b);
	a.print();
//	a.R_div(b);
//	a.print();


	return 0;
}
