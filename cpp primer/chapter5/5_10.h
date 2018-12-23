//用if判断元音，并包括大小写
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec(5,0);
	char ch;
	while(cin>>ch)
	{
		if(ch=='a' || ch=='A')
			++ivec[0];
		if(ch=='e' || ch=='E')
			++ivec[1];
		if(ch=='i' || ch=='I')
			++ivec[2];
		if(ch=='o' || ch=='O')
			++ivec[3];
		if(ch=='u' || ch=='U')
			++ivec[4];
	}
	cout<<"number of a/A is "<<ivec[0]<<endl
		<<"number of e/E is "<<ivec[1]<<endl
		<<"number of i/I is "<<ivec[2]<<endl
		<<"number of o/O is "<<ivec[3]<<endl
		<<"number of u/U is "<<ivec[4]<<endl;
}