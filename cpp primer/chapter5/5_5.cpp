//将数字成绩转换为字母成绩（利用vector）
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> scores{"F","D","C","B","A","A++"};
    string letterscore;
    unsigned grades;
    while(cin>>grades)
    {
        if(grades<60)
            letterscore=scores[0];
        else
            letterscore=scores[grades/10-5];
        cout<<letterscore<<endl;
    }
}