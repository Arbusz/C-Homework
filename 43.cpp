//关于集合的处理
#include<iostream>
using namespace std;
class Set
{
	private:
		int num[100];
		int len;
	public:
		Set(){len=0;}
		Set(int arry[],int n);
		void initSet();
		void Rec()
        {
            for(int i=0;i<len;i++)
                for(int j=i+1;j<len;j++)
                    if(num[i]==num[j])
                    {
                        for(int k=j;k<len-1;k++)
                            num[k]=num[k-1];
                        len--;
                        j--;
                    }
        };
		void print()
		{
            cout<<"集合元素的个数为："<<len<<endl;
            for(int i=0;i<len;i++)
                cout<<num[i]<<endl;
        };
		Set operator = (const Set &A2);

friend bool Appe(Set &A,int n);

friend void Dele(Set &A,int n);

friend Set operator + (const Set &A2);

friend Set operator * (const Set &A2);

friend Set operator -= (Set &A1,const Set &A2);
};

Set::Set(int arry[],int n)
{
	len = n;
	for(int i=0;i<len;i++)
	num[i]=arry[i];
	Rec();
}

void Set::initSet()
{
	cout<<"请输入集合元素的个数："<<endl;
	cin>>len;
	cout<<"请输入集合的各个元素："<<endl;
	for(int i=0;i<len;i++)
		cin>>num[i];
	Rec();
}



bool Appe(Set &A,int n)
{
	if(A.len==100)
	{
		cout<<"集合已满，无法添加"<<endl;
		return false;
	}
	else
	{
		A.num[len+1]=n;
		A.Rec();
		return true;
	}
}

void Dele(Set &A,int n)
{
	for(int i=0;i<len;i++)
		if(A.num[i]==n)
		{
			for(int j=i;j<A.len-1;j++)
				A.num[j]=A.num[j+1];
			A.len--;
			break;
		}
}


Set operator + (const Set &A2)
{
	Set A3;
	A3.len=100;
	for(int i=0;i<len;i++)
		A3.num[i]=num[i];
	for(int i=0;i<A2.len;i++)
		A3.num[len+1]=A2.num[i];
	A3.Rec();
	return A3;
}

Set operator * (const Set &A2)
{
	Set A3;
	for(int i=0;i<len;i++)
		for(int j=0;j<A2.len;j++)
			if(num[i]==A2.num[j])
			{
				A3.num[len++]=num[i];
				break;
			}
	return A3;
}

Set & Set::operator = (const Set &A2)
{
	len=A2.len;
	for(int i=0;i<len;i++)
		num[i]=A2.num[i];
	Rec();
	return this;
}

Set operator -= (Set &A1,const Set &A2)
{
	for(int i=0;i<A1.len;i++)
		for(int j=0;j<A2.len;j++)
			if(A1.num[i]==A2.num[j])
			{
				for(int k=i;k<A1.len-1;k++)
					A1.num[i]=A1.num[i+1];
				A1.len--;
			}
}

int main()
{}
