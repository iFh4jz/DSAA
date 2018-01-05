//利用附加数组的计数排序
template <class T>
void rearrange(T a[], int n, int r[])
{//使用一个附加数组u,将元素排序
	T *u = new T [n];	//创建附加数组

	//把a中元素移到u中正确位置
	for(int i = 0; i < n; i++)
		u[r[i]] = a[i];

	//把u中元素移到a
	for(i = 0; i < n; i++)
		a[i] = u[i];
	delete [] u;
	
}
