//用整型数组初始化vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int int_arr[6]={0,1,2,3,4,5};
	vector<int> ivec(begin(int_arr),end(int_arr));  //注意初始化格式
	for(auto i:ivec)
		cout<<i<<" ";
	cout<<endl;
}