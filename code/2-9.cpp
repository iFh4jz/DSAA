//冒泡排序 
template <class T>
void bubbleSort(T a[], int n)
{
	//对数组元素a[0:n-1]使用冒泡排序
	for(int i = n; i > 1; i--)
		bubble(a, i);
}
