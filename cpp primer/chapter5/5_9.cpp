//使用if判断元音，并计数
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec(5,0);
	char ch;
	while(cin>>ch)
	{
		if(ch=='a')
			++ivec[0];
		if(ch=='e')
			++ivec[1];
		if(ch=='i')
			++ivec[2];
		if(ch=='o')
			++ivec[3];
		if(ch=='u')
			++ivec[4];
	}
	cout<<"number of a is "<<ivec[0]<<endl
		<<"number of e is "<<ivec[1]<<endl
		<<"number of i is "<<ivec[2]<<endl
		<<"number of o is "<<ivec[3]<<endl
		<<"number of u is "<<ivec[4]<<endl;
}