#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
int main()
{
	int a1={1,2,3,4,5}
	int a2={1,2,3,5,5}
	if((end(a1)-begin(a1))!=(end(a2)-begin(a2))
		cout<<"the two arrays are not equal"<<endl;
	else
	{
		for(int i=0;i<(end(a1)-begin(a1);i++)
		{
			if(a1[i]!=a2[i])
			{
				cout<<"the two arrays are not equal"<<endl;
				break;
			}
			if(i=(end(a1)-begin(a1)-1)
				cout<<"the two arrays are equal!"<<endl;
		}
	}
	//使用vector
	vector<int> v1;
	vector<int> v2;
	if(v1==v2)
		cout<<"the two vectors are equal!"<<endl;
	else
		cout<<"the two vectors are not equal!"<<endl;
}
/*定义一个compare函数
#include <iostream>
#include <vector>
#include <iterator>

using std::begin;
using std::end;
using std::cout;
using std::endl;
using std::vector;

// pb point to begin of the array, pe point to end of the array.
bool compare(int* const pb1, int* const pe1, int* const pb2, int* const pe2)
{
    if ((pe1 - pb1) != (pe2 - pb2)) // have different size.
        return false;
    else {
        for (int *i = pb1, *j = pb2; (i != pe1) && (j != pe2); ++i, ++j)
            if (*i != *j) return false;
    }

    return true;
}

int main()
{
    int arr1[3] = {0, 1, 2};
    int arr2[3] = {0, 2, 4};

    if (compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
        cout << "The two arrays are equal." << endl;
    else
        cout << "The two arrays are not equal." << endl;

    cout << "==========" << endl;

    vector<int> vec1 = {0, 1, 2};
    vector<int> vec2 = {0, 1, 2};

    if (vec1 == vec2)
        cout << "The two vectors are equal." << endl;
    else
        cout << "The two vectors are not equal." << endl;

    return 0;
}*/		