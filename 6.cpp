//摄氏温度与华氏温度之间的换算
#include<iostream>
using namespace std;
int main()
{
	cout<<"Please enter a Celsius value: ";
	double c,f;
	cin>>c;
	f=1.8*c+32.0;
	cout<<c<<" degrees Celsius is "<<f<<" degrees Fahrenheit."<<endl;
	return 0;
}
