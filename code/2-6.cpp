//���ø�������ļ�������
template <class T>
void rearrange(T a[], int n, int r[])
{//ʹ��һ����������u,��Ԫ������
	T *u = new T [n];	//������������

	//��a��Ԫ���Ƶ�u����ȷλ��
	for(int i = 0; i < n; i++)
		u[r[i]] = a[i];

	//��u��Ԫ���Ƶ�a
	for(i = 0; i < n; i++)
		a[i] = u[i];
	delete [] u;
	
}
