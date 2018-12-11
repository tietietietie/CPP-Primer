#include <iostream>
#include<cctype>
#include<vector>
//int global_int;
using namespace std;
//struct Foo{/* 此处为空 */}
//定义销售书籍的数据结构
struct Sales_Data{
    unsigned units_sold=0;
    string bookNo;//不用包含string类型，在iostream中已经包含
    double revenue=0.0;
    double price=0.0; //单价
};

int main()
{
    //在函数体内的内置变量不会被默认初始化，输出时显示地址值？
    /*int local_int;
    cout<<global_int<<"\n"<<local_int;*/
    //转义
    /*cout << "\tHi!\n";
    return 0;*/
    //八进制
    /*int month=09;报错！*/
    //转义符后面接数字
    /*cout<<"who goes with F\145rgus?\012";*/
    //为什么错了？
    /*cin>>int value_input;*/
    //pointer
    /*int i=1,j=2;
    int *p=&i;
    p=&j;
    *p=3;
    cout<<j;*/
    //对常量取地址,类型一定要匹配！
    /*const int i=5;
    int *p=&i;*/
    //一条声明语句只能有一个基本类型
    /*auto i=0,pi=3.14;*/
    //using使用
    /*using wages=double;
    wages pi=3.14;
    cout<<pi<<"\n";*/
    //实现相同ISBN的书籍相加
    /*cout<<"please input the ISBN number,units_sold and price of two books\n";
    Sales_Data data1,data2;
    cin>>data1.bookNo>>data1.units_sold>>data1.price
       >>data2.bookNo>>data2.units_sold>>data2.price;
    data1.revenue=data1.price*data1.units_sold;
    data2.revenue=data2.price*data2.units_sold;
    if(data1.bookNo==data2.bookNo)
    {
        cout<<"Two books with the same ISBN\n"<<data1.bookNo<<" "
            <<data1.units_sold+data2.units_sold<<" "
            <<(data1.revenue+data2.revenue)/(data1.units_sold+data2.units_sold)
            <<" "<<data1.revenue+data2.revenue<<"\n";
    }
    else
        cout<<"error!please input two books with same ISBN\n";*/
    //输出多本相同的书并求和
    /*Sales_Data total,cur;
    cout<<"please input the books ISBN,units_sold,price\n";
    if(cin>>total.bookNo)
    {
        cin>>total.units_sold>>total.price;
        total.revenue=total.units_sold*total.price;
        while(cin>>cur.bookNo)
        {
            if(cur.bookNo==total.bookNo)
            {
                cin>>cur.units_sold>>cur.price;
                cur.revenue=cur.units_sold*cur.price;
                total.units_sold+=cur.units_sold;
                total.revenue+=cur.revenue;
                total.price=total.revenue/total.units_sold;
            }
            else
            {
                cout<<"error!not the same book!the former book datas are:\n";
                cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.price<<" "
                    <<total.revenue<<endl;
                break;
            }
        }
        cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.price<<" "
            <<total.revenue<<endl;
    }*/
    //把字符串变成大写
    /*string str("hello world!");
    for (auto &c : str)
        c=toupper(c);
    cout<<str<<endl;*/
    //cin>>作为判断条件的返回值问题???
    /*int n;
    while(cin>>n)
        cout<<"you can't input this character!"<<endl;*/
    //cin问题
    /*int a,b,c;
    cin>>a>>b>>c;*/
    //删除字符串标点
    /*string str("zhang,tie!"),newstr;
    for(auto c:str)
        if(!ispunct(c))
            newstr+=c;
    cout<<newstr<<endl;*/
    //在缓冲器中读入字符串，并删除值
    /*string str;
    while(getline(cin,str))
    {
        for(auto c:str)
            if(!ispunct(c))
                cout<<c;
        cout<<endl;
    }*/
    //cin问题
    /*string str,str1;
    cin>>str;
    cout<<str;
    cin>>str1;
    cout<<str1;*/
    //vector
    /*vector<int> ivec;
    int i=0;
    while(cin>>i)
        ivec.push_back(i);*/
    //存入一组词，改成大写，输出
    vector<string> svec;
    string s;
    while(cin>>s)
        svec.push_back(s);
    for(auto &str:svec)
    {
        for(auto &s1:str)
            s1=toupper(s1);
        cout<<str<<endl;
    }
}
