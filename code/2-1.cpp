//顺序查找
//#include <iostream>
//using namespace std;
template <class T>
int sequentialSearch(T a[], int n, const T& x)
{
	//在数组中查找元素x
	//如果找到则返回元素位置，否则返回-1
	int i;
	for(i = 0; i < n && a[i] != x; i++);
	if(i == n)
		return -1;
	else
		return i;

}
/*
int main ()
{
	int a[] = {1,2,3,4,4,31,2,1,57,8,24,3,4,6,1,0};
	int x = 1;
	cout << sequentialSearch(a, 16, 31) << endl;
	return 0;
}
*/
