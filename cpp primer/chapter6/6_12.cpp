//switch two int by引用形参
#include <iostream>
using namespace std;
void switchint(int &a,int &b)
int main()
{
	int a=1,b=2;
	switchint(a,b);
	cout<<a<<" "<<b<<endl;
}
void switchint(int &a,int &b)
{
	temp=a;
	a=b;
	b=temp;
}
/* 使用引用形参更方便，因为不需要取地址和解引用操作 */
