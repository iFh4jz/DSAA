//寻找a[0:n-1]的最大元素位置
//#include <iostream>
//using namespace std;

template<class T>
int indexOfMax(T a[], int n)
{
	//查找数值的最大元素
	int indexOfMax = 0;
	for (int i = 1; i < n; i++)
		if (a[indexOfMax] < a[i])
			indexOfMax = i;
	return indexOfMax;
}
/*
int main()
{
	int a[] = {2,3,4,7,9,1,5,8};
	int local = indexOfMax(a, 8);
	cout << local << endl;
	return 0;
}
*/
