#include <iostream>
#include <iterator>
using namespace std;
int main()
{
	int a[5];
	for(auto p=begin(a);p!=end(a);p++)
		*p=0;
    for(auto i:a)
        cout<<i<<" ";
    cout<<endl;
}