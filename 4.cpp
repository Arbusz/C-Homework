//交换数据
#include<iostream>
using namespace std;
void swap(int &x,int &y)
{ 
    int p;
    p=x;
    x=y;
    y=p;
}
int main()
{
    int a,b;
	cout<<"请输入a b的值"<<endl;
    cin>>a>>b;
    swap(a,b);
	cout<<"交换后a b的值分别为："<<endl;
    cout<<a<<"\t"<<b;
    cout<<endl;
    return 0;
}


