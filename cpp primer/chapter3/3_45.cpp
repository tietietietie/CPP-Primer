//使用auto
#include <iostream>
#include <cstddef>
#include <iterator>
using namespace std;
int main()
{
    int ia[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    //使用范围for
    for(auto &p:ia)
        for(int q:p)
            cout<<q<<" ";
    cout<<endl;
    //使用下标运算符
    for(size_t i=0;i<3;i++)
        for(size_t j=0;j<4;j++)
            cout<<ia[i][j]<<" ";
    cout<<endl;
    //使用指针
    for(auto *p=begin(ia);p!=end(ia);p++)
        for(int *q=begin(*p);q!=end(*p);q++)
            cout<<*q<<" ";
    cout<<endl;
}