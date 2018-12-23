//分别用for和while编写程序
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	//将输入存入vector中
	vector<int> ivec;
	int i=0;
	while(cin>>i)
		ivec.push_back(i);
	for(;cin>>i;)
		ivec.push_back(i);
	//输出vector中的元素
	auto it=ivec.begin();
	while(it!=ivec.end())
	{
		cout<<*it<<" ";
		++it;
	}
	cout<<endl;
	for(auto it1=ivec.begin();it1!=ivec.end();++it)
		cout<<*it<<" ";
	cout<<endl;
}
	
