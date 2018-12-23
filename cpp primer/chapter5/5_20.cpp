//判断是否有连续两个相同string
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str,laststr=0;
	bool cnt=0;
	while(cin>>str)
	{
		if(str==laststr)
		{
			cnt=1;
			break;
		}
		else
			laststr=str;
	}
	if(cnt)
		cout<<"重复出现两个单词:"<<str<<endl;
	else
		cout<<"没有单词是重复出现的！"<<endl;
}