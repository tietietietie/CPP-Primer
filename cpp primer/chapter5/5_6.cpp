//将数字成绩转换为字母成绩（利用vector）
//使用条件运算符?:
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> scores{"F","D","C","B","A","A++"};
    string letterscore;
    unsigned grades;
    while(cin>>grades&&grades<=100)
    {
        grades<60?letterscore=scores[0]:letterscore=scores[grades/10-5];
        cout<<letterscore<<endl;
    }
}