//����ת��
template <class T>
void transpose(T **a, int rows)
{
    //ԭ����ɾ���a[0:rows-1][0:rows-1]��ת��
    for (int i = 0; i < rows; i++)
        for (int j = i+1; j< rows; j++)
            swap(a[i][j], a[j][i]);
}
