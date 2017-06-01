#include<iostream>
using namespace std;
class Myarray
{
	public:
		int *alist;
		int length;
		Myarray(int len);
		~Myarray();
		void input();
		void display();
};

Myarray::Myarray(int len)
{
	cout<<"Constructing"<<endl;
	alist=new int[len+1];
	length=len;
}

Myarray::~Myarray()
{
	if(alist)
	{
		delete []alist;
		length =0;
	}
	cout<<"Distructing"<<endl;
}

void Myarray::input()
{
	if(alist)
	{
		cout<<"Please input"<<length<<"numbers"<<endl;
		for(int i=0;i<length;i++)
			cin>>alist[i];
	}
}

void Myarray::display()
{
	for(int i=0;i<length;i++)
		cout<<alist[i]<<" ";
	cout<<endl;
}

class Averarray: public Myarray//类averarray继承自myarray，  
{  
	public:  
		double average;  
		Averarray(int leng):Myarray(leng)
		{  

			cout<<"Averarray Constructing"<<endl;  
			average=0;  
		}	  

		~Averarray()  
		{  
			cout<<"Averarray Destructing"<<endl;  
		}  

		 void getAver()  
		{  
			for(int i=0; i<length; i++)  
			{  
				average+=alist[i];  
			}  
			cout<<"Average="<<average/length<<endl;  
		}  

};

int main()
{	
	Averarray a1(10);
	a1.input();
	a1.getAver();
	return 0;
}
