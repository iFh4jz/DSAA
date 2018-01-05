//选择排序
template <class T>
void selectionSort (T a[], int n)
{
	//给数组a[0:n-1]的n个元素排序
	for(int size = n; size > 1; size--)
	{
		int j = indexOfMax(a, size); //indexOfMax()，寻找a[0:n-1]的最大元素位置
		swap(a[j], a[size - 1]);
	}
}
