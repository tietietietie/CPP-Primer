//编写函数比较两个数的值（int 和 int*)
#include <iostream>
using namespace std;
int compare(int ,const int*)
int main()
{
	int a=5,b=2;
	cout<<compare(a,&b)<<endl;
	return 0;
}

int compare(int a,const int*b)
{
	if(a>*b)
		return a;
	else
		return *b;  //return (a>*b)?a:*b;
}
