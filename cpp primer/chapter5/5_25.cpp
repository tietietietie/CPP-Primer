//使用try...throw...catch...
#include <iostream>
using namespace std;
int main()
{
	int i,j;
	cin>>i>>j;
	begin:try{								//begin要在try处开始？和catch配合？
	if(j==0)
		throw overflow_error("分母不能为零");
	cout<<i/j<<endl;}
	catch(overflow_error err){
		cout<<err.what()<<endl;
		cout<<"重新输入？y/n"<<endl;
		char c;
		cin>>c;
		if(c=='y')
			goto begin;
}