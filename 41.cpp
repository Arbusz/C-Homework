#include<iostream>
#include<cmath>
using namespace std;
class Point
{
	public:
		Point(int a=0,int b=0):x(a),y(b){}
		void setPoint(int a,int b)
		{
			x=a;
			y=b;
		}
		double operator - (const Point &m);
		friend ostream& operator << (ostream& out,Point& m);
	private:
		int x,y;
};
double Point::operator - (const Point &m)
{
	return double(sqrt((x-m.x)*(x-m.x)+(y-m.y)*(y-m.y)));
}

ostream& operator << (ostream& out,Point& m)
{
	out<<"["<<m.x<<","<<m.y<<"]";
	return out;
}

int main()
{
	Point p1(2,1), p2;
	double d=p1-p2;
	cout<<p1<<"->"<<p2<<"="<<d<<endl;
	return 0;
}

