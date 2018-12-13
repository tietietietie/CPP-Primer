#include <iostream>
using namespace std;
unsigned score[11]; //放在函数里必须初始化
int main()
{
	unsigned s=0;
	while(cin>>s)
	{
		if(s<=100)
			++score[s/10];
		else
			cout<<"error!please input unsigned value between 0~100\n";
	}
	cout<<"各分段的人数为：\n";
	for(auto s1:score) //注意此处容器的写法
		cout<<s1<<" ";
}