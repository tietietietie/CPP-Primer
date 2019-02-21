//绝对值函数
#include <iosteram>
using namespace std;
unsigned absolute_value(int val)
{
	if(val<0)
		return -val;
	return val;
}