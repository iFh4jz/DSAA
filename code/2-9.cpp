//ð������ 
template <class T>
void bubbleSort(T a[], int n)
{
	//������Ԫ��a[0:n-1]ʹ��ð������
	for(int i = n; i > 1; i--)
		bubble(a, i);
}
