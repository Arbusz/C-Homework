#include<iostream>
using namespace std;
class counter
{
	private:
		int count;
	public:
		void increase()
		{
			count++;
		}
		void diease()
		{
			count--;
		}
		void print()
		{
			cout<<"当前计数器的值:  "<<count<<endl;
		}
};
int main()
	{
		counter c;
		cout<<"初始化"<<endl;
		c.print();
		c.increase();
		cout<<"计数器加一"<<endl;
		c.diease();
		cout<<"计数器减一"<<endl;
		c.print();
	}

