//百钱问题
#include<iostream>
using namespace std;
int main()
{
	int i=0;
    for(int a=0;a<=100;a++)
	for(int b=0;b<=50;b++)
	    for(int c=0;c<=20;c++)	    
	    {
//		int sum=a+2*b+5*c
		if (a+2*b+5*c==100)
		{
		    cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<endl;
			i++;
		}

	    }
	cout<<i<<endl;
    return 0;
}

