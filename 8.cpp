#include<iostream>
using namespace std;
void print(int a,int b);
int main()
{
	int h,m;
	cout<<"Enter the number of hours: ";
	cin>>h;
	cout<<"Enter the number of minutes: ";
	cin>>m;
	print(h,m);
}
void print(int a, int b)
{
	cout<<"Time: "<<a<<":"<<b<<endl;
}
