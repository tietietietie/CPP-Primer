//反复比较string，输出最短
#include <iostream>
#include <string>
using namespace std;
int main()
{
	do
	{
		cout<<"请输入两个字符串"<<endl;
		string str1,str2,rsp;
		cin>>str1>>str2;
		if(str1<=str2)
			cout<<"较短的字符串为："<<str1<<endl;
		else
			cout<<"较短的字符串为："<<str2<<endl;
		cout<<"是否继续？（yes/no)"<<endl;
		cin>>rsp;
	}
	while(!rsp.empty()&&rsp!="no");
}