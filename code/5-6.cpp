//ɾ������ΪtheIndex��Ԫ��
template <class T>
void arrayList<T>::earse(int theIndex)
{
	//ɾ��������ΪtheIndex��Ԫ��
	//�����Ԫ�ز����ڣ����׳��쳣
	checkIndex(theIndex);
	//��Ч����,�ƶ�����������theIndex��Ԫ��
	copy(element + theIndex + 1, element + listSize, element + theIndex);
	element[--listSize].~T();		//������������
}
