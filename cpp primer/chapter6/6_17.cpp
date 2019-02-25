//判断string是否有大写字母，将string改成全部小写
#include <iostream>
#include <string>
using namespace std;
bool hasupper(const string &s);
void tolower(string &s);
int main()
{
	string s="Hello World";
	if(hasupper)
	{
		cout<<"存在大写字母,并改成小写"<<endl;
		tolower(s);
		cout<<s<<endl;
	}
	else
		cout<<"不存在大写字母"<<endl;
	return 0;
}
bool hasupper(const string &s)
{
	for(auto c:s)
		if(isupper(c))
			return true;
	return false;
}

void tolower(string &s)
{
	for(auto &c:s)
		c=tolower(c);
}