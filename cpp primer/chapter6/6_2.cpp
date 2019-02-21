//累乘函数
#include <iostream>
using namespace std;
int fact(int val)
{
	int ret=val;
	while(val>1)
		ret*=--val;
	return ret;
}
int main()
{
	int i=0;
	cout<<"i的累乘是："<<fact(i)<<endl;
}
	