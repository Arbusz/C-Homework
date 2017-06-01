#include<iostream>
using namespace std;

class Myarray//定义一个基类MyArray,基类中可以存放一组数组
{
public:
    int *alist;
    int length;

    Myarray( int len);
    ~Myarray();
    void input();
    void display();
};

Myarray::Myarray(int len)
{
    cout<<"Constructing"<<endl;
    length=len;
    alist=new int[length+1];
}

Myarray::~Myarray()
{
    if(alist!=NULL)
    {
        delete []alist;
        length=0;
        cout<<"Destructing"<<endl;
    }
}

void Myarray::input()
{
    if(alist!=NULL)
    {
        cout<<"Input"<<length<<" numbers for Myarray"<<endl;
        for(int i=0; i<length; i++)
        {
            cin>>alist[i];
        }
    }
}

void Myarray::display()
{
    cout<<"Display elements of Myarray"<<endl;
    for(int i=0; i<length; i++)
    {
        cout<<alist[i]<<" ";
    }
    cout<<endl;
}

class Averarray:virtual public Myarray//类averarray继承自myarray，
{
	public:
		double aver;
		Averarray(int n):Myarray(n)
		{

			cout<<"Averarray Constructing"<<endl;
			aver=0;
		}

		~Averarray()
		{
			cout<<"Averarray Destructing"<<endl;
		}

		 void getAver()
		{
			for(int i=0; i<length; i++)
			{
				aver+=alist[i];
			}
			cout<<"Aver="<<aver/length<<endl;
		}

};

class Revarray:virtual public Myarray//类Revarray继承自myarray，
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
	    cout<<"After reverse"<<endl;
	    display();
	}
	void display()
	{
		for(int i=0; i<length; i++)
	        cout<<alist[i]<<" ";
	        cout<<endl;
	}
};

class Nawarray:public Averarray,public Revarray
{
	public:
	    Nawarray(int length):Averarray(length),Revarray(length),Myarray(length)
	    {
	        cout<<"Nawarray Constructing"<<endl;
	    }
	    ~Nawarray()
	    {
	        cout<<"Nawarray Destructing"<<endl;
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

    Nawarray n1(10);
    n1.input();
    n1.display();
    return 0;
}


