//交换两个int类型指针
#include iostream
using namespace std;
void change(int *&,int *&)
int main()
{
	int *p,*q;
	int a=0,b=1;
	p=&a;q=&b;
	change(p,q);
	cout<<*p<<" "<<*q;
}

void change(int *&p,int *&q)
{
	int *temp;
	temp=p;
	p=q;
	q=temp;
}

	
	
	