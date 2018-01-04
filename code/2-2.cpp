//Ë³Ğò²éÕÒµÄµİ¹éËã·¨
template <class T>
int rSequentialSearch(T a[], int n, const T& x)
{
	if(n < 1) return -1;
	if(a[n-1] == x) return n-1;
	return rSequentialSearch(a, n-1, x);
}

