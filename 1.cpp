//1.cpp
#include<iostream>
using namespace std;
int main()
{
    int a,b;
	float d;
	char c;

	cin>>a>>b>>c;
	switch(c)
	{
		case'+':d=a+b;break;
		case'-':d=a-b;break;
		case'*':d=a*b;break;
		case'/':d=a*1.0/b;break;
	}
    cout<<a<<c<<b<<"="<<d<<endl;
    return 0;
}
