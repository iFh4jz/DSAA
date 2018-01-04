//计算数值元素a[0:n-1]的乘积
template <class T>
T product(T a[], int n)
{
	T theProduct = 1;
	return accumulate(a, a+n, multiplies<T>());
}
