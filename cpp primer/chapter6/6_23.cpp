//不同形参的print函数
#include <iostream>
using namespace std;
void print(const int);
void print(const int *,size_t);
int main()
{
	int i=0;
	int j[2]={0,1};
	print(i);
	print(j,2);
	return 0;
}

void print(const int a)
{
	cout<<a<<endl;
}

void print(const int *a,size_t b)
{
	for(size_t i=0;i<b;++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}