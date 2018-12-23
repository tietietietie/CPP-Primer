//比较两个vector对象
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec1={0,1,1,2};
	vector<int> ivec2={0,1,1,2,3,5,8};
	decltype(ivec1.size()) i;
	if(ivec1.size()>ivec2.size())
		i=ivec2.size();
	else
		i=ivec1.size();
	for(decltype(ivec1.size()) j=0;j<i;++j)
		if(ivec1[j]!=ivec2[j])
		{
			cout<<"false"<<endl;
			break;
		}
		else if(j==(i-1))
			cout<<"ture"<<endl;
}