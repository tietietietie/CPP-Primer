//判断成绩
#include <iostream>
using namespace std;
int main()
{
	unsigned grade=0;
	cin>>grade;
	string finalgrade;
	finalgrade=(grade>90)? "high pass":(grade>75)? "pass":
										(grade<60)? "fail":"low pass"
	cout<<finalgrade<<endl;
	//使用if判断
	if(grade>90)
		finalgrade="high grade";
	else if(grade>75)
		finalgrade="pass";
	else if(grade<60)
		finalgrade="fail";
	else
		finalgrade="low pass";
	cout<<finalgrade<<endl;
}