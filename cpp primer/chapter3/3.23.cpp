#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> iv;
	for(int i=0;i<10;++i)
		iv.push_back(i);
	for(auto it=iv.begin();it!=iv.end();++it)
	{
		*it *=2;
		cout<<*it<<" ";
	}
}
