//输出各种内置类型所占空间大小
#inlcude <iostream>
using namespace std;
int main()
{
	cout<<"bool "<<sizeof(bool)<<endl
		<<"char "<<sizeof(char)<<endl
		<<"int "<<sizeof(int)<<endl
		<<"short "<<sizeof(short)<<endl
		<<"long "<<sizeof(long)<<endl
		<<"double "<<sizeof(double)<<endl
		<<"float "<<sizeof(float)<<endl;
}