//ԭ����������Ԫ��

template <class T>
void rearange(T a[], int n, int r[])
{
    //ԭ����������ʹ֮����
    for(int i = 0; i < n; i++)
        //����ȷ��Ԫ���Ƶ�a[i]
        while(r[i] != i)
        {
            int t = r[i];
            swap(a[i], a[t]);
            swap(r[i], r[t]);
        }
}

