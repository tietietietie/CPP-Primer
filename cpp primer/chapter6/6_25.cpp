//mian函数接受实参
#include <iostream>
#include <string>
using namespace std;
int main(int argc,char *argv[])
{
	string s;
	for(i=1;i!=argc;++i)
	{
		s+=argc[i];
		s+=" ";
	}
	cout<<s<<endl;
}
