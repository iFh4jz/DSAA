//������ֵԪ��a[0:n-1]�ĳ˻�
template <class T>
T product(T a[], int n)
{
	T theProduct = 1;
	return accumulate(a, a+n, multiplies<T>());
}
