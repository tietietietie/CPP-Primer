#include <iostream>
using namespace std;
int main()
{
	int a[10]={};
	for(int i=0;i<10;i++)
		a[i]=i;
	int a1[10]={};
	for(int i=0;i<10;i++)
		a1[i]=a[i];
}

/*改进：使用头文件cstddef中的类型size_t来表示数组的下标
 *#include <cstddef>
 *#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int ia[10];
    for (size_t i = 0; i < 10; ++i) ia[i] = i;

    for (auto i : ia) cout << i << " ";
    cout << endl;

    return 0;
}*/