template<class T>
void rank(T a[], int n, int r[])
{
	//������a[0:n-1]��n��Ԫ��������
	//�����r[0:n-1]�з���
	for(int i = 0; i < n; i++)
		r[i] = 0;	//��ʼ��
	//�Ƚ�����Ԫ�ض�
	for(int i = 1; i < n; i++)
		for(int j = 0; j < i; j++)
			if(a[j] <= a[i])
				r[i]++��
			else
				r[j]++;
}
