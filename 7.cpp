//光年与天文单位之间的换算
#include<iostream>
using namespace std;
int distance(double ly);
int main()
{
	double ly,au;
	cout<<"Enter the number of light years: ";
	cin>>ly;
	au=distance(ly);
	cout<<ly<<" light years = "<<au<<" astronomical units."<<endl;

}
int distance(double ly)
{
	return 63240*ly;
}
