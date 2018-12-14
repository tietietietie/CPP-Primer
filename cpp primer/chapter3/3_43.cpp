//使用不同的方法输出二维数组
#include <iostream>
#include <cstddef>
#include <iterator>
using namespace std;
int main()
{
	int ia[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
	//使用范围for
	for(int (&p)[4]:ia)  //注意如果此处不是引用，则编译器将会用数组首指针初始化数组p
		for(int q:p)  //这显然会引发错误，所以必须使用加括号的引用。
			cout<<q<<" ";
	cout<<endl;
	//使用下标运算符
	for(size_t i=0;i<3;i++)
		for(size_t j=0;j<4;j++)
			cout<<ia[i][j]<<" ";
	cout<<endl;
	//使用指针
	for(int (*p)[4]=begin(ia);p!=end(ia);p++)
		for(int *q=begin(*p);q!=end(*p);q++) //p是类型为int[4]的指针，显然不能赋值给q
			cout<<*q<<" ";  //所以必须解引用p，得到数组，数组赋值即将首指针赋给q
	cout<<endl;