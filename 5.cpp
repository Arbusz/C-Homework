//神码玩意儿不太会
#include<iostream>
#include<ctime>
#include<cstdlib>
#define NUM 50
using namespace std;
int main()
{
    int i,j;
    double probability=1;
    for(i=1;i<=NUM;i++)
	probability=probability*((365+1-i)/365.0);
    cout<<"统计方法:"<<probability;
    //以下为仿真方法
    int total=1e5;
    int duplicateNumber=0;
    int a[366]={0};//存放生日
    int temp;
    srand(time(0));
    for(i=1;i<=total;i++)
    {
	for(j=1;j<=NUM;j++)
	{
	    temp=rand()%365+1;
	    if(a[temp])
	    {
		duplicateNumber++;
		break;
	    }
	    else
		a[temp]=1;
	}
	for(j=1;j<=365;j++)
	    a[j]=0;
    }
    cout<<"仿真方法:"<<(double)(total-duplicateNumber)/total;
    cout<<endl;

}

