//��ʱ��ֹ��ð������
template <class T>
bool bubble(T a[], int n)
{
    //������a[0:n-1]�����Ԫ���Ƶ����Ҷ�
    bool swapped = false;  //ĿǰΪֹδ����
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i+1])
        {
            swap(a[i], a[i+1]);
            swapped = true;  //����
        }
    return swapped;
}

template <class T>
void bubbleSorte(T a[], int n)
{
    //��ʱ��ֹð������
    for (int i = n; i > 1 && bubble(a, i); i--);
}
