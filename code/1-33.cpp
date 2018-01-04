#include <iostream>
#include <numeric>
using namespace std;

template<class T>
T sum(T a[], int n)
{
	T theSum = 0;
	return accumulate(a, a+n, theSum);
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int n = 4;
	int he = sum(a, 6);
	cout << he << " " << sum(a, n) << endl;
	return 0;
}
