//ѡ������
template <class T>
void selectionSort (T a[], int n)
{
	//������a[0:n-1]��n��Ԫ������
	for(int size = n; size > 1; size--)
	{
		int j = indexOfMax(a, size); //indexOfMax()��Ѱ��a[0:n-1]�����Ԫ��λ��
		swap(a[j], a[size - 1]);
	}
}
