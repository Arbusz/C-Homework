#include<iostream>
#include<cmath>
using namespace std;
class Point
{
	private:
		double x,y;
		friend class Circle;
    public:
		Point():x(0),y(0){}
		Point(double xx,double yy):x(xx),y(yy){}
};
class Circle
{
	private:
		Point center;
		double radius;
	public:
		Circle():radius(0){}
		Circle(double a,double b,double r):center(a,b),radius(r){}
		void relation(Circle &c1)
		{
			double r=sqrt((c1.center.x-center.x)*(c1.center.x-center.x)+(c1.center.y-center.y)*(c1.center.y-center.y))-(c1.radius+radius);
			if(r>0)
				cout<<"两圆相离"<<endl;
			else if(r==0)
				cout<<"两圆相切"<<endl;
			else 
				cout<<"两圆相交"<<endl;
		}
};

int main()
{
	Circle c1(3,4,5),c2(2,1,6);
	c1.relation(c2);
	return 0;
}


