//Ѱ��a[0:n-1]�����Ԫ��λ��
//#include <iostream>
//using namespace std;

template<class T>
int indexOfMax(T a[], int n)
{
	//������ֵ�����Ԫ��
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
