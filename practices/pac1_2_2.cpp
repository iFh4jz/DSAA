//编写一个 模板函数, 返回值是数组a[0:n-1]中value出现的次数

/*#include <iostream>

using namespace std;
*/

template<class T>
int count(T a[], T n, T value)
{
	int Count = 0;
	for (int i = 0; i <15 ; i++)
	{
		if (a[i] == value)
			Count++;
	}
	return Count;
}
/*
int main()
{
	int a[15] = {1, 2, 2, 2, 4, 6, 7, 8, 1, 4, 4, 4, 4, 5, 7};
    int value = 1;
	cout << "The " << value << " appears " <<
            count(a, 15, value) <<" times in array a. "<< endl;
//	system("pause");
    return 0;
    
}
*/
