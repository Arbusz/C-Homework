#include<iostream>
using namespace std;
class Array
{
	private:
		int data[10];
	public:
		Array()
		{
			for(int i=0;i<=9;i++)
				data[i]=0;
		}	;//数组初始化为0
		int& getData(int i)
		{
			return data[i];
		};//返回下标为i的数组元素引用
		void print()
		{
			for(int i=0;i<=9;i++)
				cout<<data[i]<<endl;
		};//打印出所有数组元素的值
		void input()
		{
			cout<<"Please input 10 numbers"<<endl;
			for(int i=0;i<=9;i++)
				cin>>data[i];
		};//对所有数组元素进行输入
};
/*Array::Array()
{	for(int i=0;i<=9;i++)
			data[i]=0;
}
int& Array::getData(int i)
{
	return data[i];
}
void Array::print()
{
	for(int i=0;i<=9;i++)
		cout<<data[i]<<endl;
}
void Array::input()
{
	cout<<"Please input 10 numbers"<<endl;
	for(int i=0;i<=9;i++)
		cin>>data[i];
}

*/
int main()
{
	Array a;
	a.print();
	a.input();
	int i;
	cout<<"Please input one number"<<endl;
	cout<<a.getData(i)<<endl;
	return 0;
}
