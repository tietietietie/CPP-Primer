//reset int
#include <iostream>
using namespace std;
void reset(int &a);
int main()
{
	int a=8;
	reset(a);
	cout<<a<<endl;
}

void reset(int &a)
{
	a=0;
}