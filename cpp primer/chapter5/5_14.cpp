//记录连续出现的字符串次数
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str,curstr,maxstr;
	int cnt=0,maxcnt=0;
	while(cin>>str)
	{
		if(str==curstr)
			++cnt;
		else
		{
			if(cnt>maxcnt)
			{
				maxcnt=cnt;
				maxstr=curstr;
			}
			curstr=str;
			cnt=1;
		}
	}
	if(maxcnt==1)
		cout<<"没有连续值出现的字符串"<<endl;
	else
		cout<<"出现最多次数的字符串是:"<<maxstr<<" 出现了"<<maxcnt<<"次\n";
}