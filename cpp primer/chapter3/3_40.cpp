#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	const char ca1[]="zhang";
	const char ca2[]="tie";
	char largestr[30]={};  //不能是常量字符
	strcpy(largestr,ca1);
	strcat(largestr," ");
	strcat(largestr,ca2);
	cout<<largestr<<endl;
}
/*可以利用size_t类型定义下标
 *    size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;
 */