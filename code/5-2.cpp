//�ı�һ��һά���鳤��
template <class T>
void changeLength1D(T*& a, int oldLength, int newLength)
{
    if (newLength < 0)
        throw illegalParameterValue("new length must be >= 0");

    T* temp = new T[newLength]; //������
    int number = min(oldLength, newLength); //��Ҫ���Ƶ�Ԫ�ظ���
    copy(a, a + number, temp);
    delete [] a;        //�ͷ���������ڴ�ռ�
    a = temp;
    
}
