#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str("zhang tie");
    if(str.begin()!=str.end())  //判断是否为空字符串
        {
        auto a=str.begin();
        *a=toupper(*a);
    }
    cout<<str<<endl;
}
