//һ��ð������
template <class T>
void bubble(T a[], int n)
{
	//��a[0:n-1]�����Ԫ���Ƶ��ұ�
	for(int i = 0; i < n - 1; i++)
		if(a[i] > a[i+1])
			swap(a[i], a[i+1]);
}
