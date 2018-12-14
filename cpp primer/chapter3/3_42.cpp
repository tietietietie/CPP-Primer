//将int型vector拷贝给int数组
#include <iostream>
#include <vector>
#include <cstddef>
using namespace std;
int main()
{
	vector<int> ivec(5,2);
	const size_t n=ivec.size();
	int iarr[n]={};
	size_t i=0;
	for(auto j:ivec)
	{
		iarr[i]=j;
		cout<<iarr[i]<<" ";
		i++;
	}
}