//除法，分母为零抛出错误
#include <iostream>
using namespace std;
int main()
{
	int i,j;
	cin>>i>>j;
	if(j==0)
		throw overflow_error("分母不能为零")
	cout<<i/j<<endl;
}