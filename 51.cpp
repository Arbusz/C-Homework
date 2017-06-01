#include<iostream>
using namespace std;
class Myarray
{
	private:
		int *alist;
		int length;
	public:
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

int main()
{

	Myarray m1(10); 
	m1.input();  
	m1.display(); 
	return 0;
}
