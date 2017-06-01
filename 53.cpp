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


class Revarray: public Myarray//类Revarray继承自myarray，
{
public:
	Revarray(int n):Myarray(n)
    {
		cout<<"Revarray Constructing"<<endl;
    }
    ~Revarray()
    {
        cout<<"Revarray Destructing"<<endl;
    }
    void Reverse()
    {
        cout<<"The original Revarray"<<endl;
        display();
        for(int i=0; i<(length)/2; i++)
        {
            int temp=alist[i];
            alist[i]=alist[length-1-i];
	        alist[length-1-i]=temp;
	    }
		cout<<"The recent Revarray"<<endl;
	    display();
	}
	void display()
	{
		for(int i=0; i<length; i++)
	        cout<<alist[i]<<" ";
	        cout<<endl;
	}
};

int main()
{
	Revarray r1(10);
	r1.input();
    r1.Reverse();
	return 0;
}
