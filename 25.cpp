#include<iostream>
using namespace std;
class PGroup
{
	private:
		int* p;
	public:
		PGroup()
		{
			p=new int[10];
		}
		~PGroup()
		{
			delete []p;
			cout<<"distructing"<<endl;
		}
		void input()
		{
			for(int i=0;i<=9;i++)
			{
				cin>>p[i];
			}
		}
		void print()
		{
			for(int i=0;i<=9;i++)
				cout<<p[i]<<endl;
		}
};
int main()
{
	PGroup i;
	i.input();
	i.print();
	return 0;
}
