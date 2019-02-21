//使用指针形参交换数据
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	a=1;
	b=2;
	switchint(&a,&b);
	cout<<a<<" "<<b;
	return 0;
}
void switchint(int *a,int *b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
}
