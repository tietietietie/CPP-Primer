//找到奇值并翻倍
include <iostream>
include <vector>
using namespace std;
int main()
{
	vector<int> ivec={0,1,2,3,4,5,6,7,8,9};
	for(auto &it:ivec)
		it%2!=0?it*=2:it;  //expr2必须要有。
	for(auto it:ivec)
		cout<<it<<" ";
	cout<<endl;
}