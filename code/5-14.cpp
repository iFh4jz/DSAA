//vectorList��ɾ���Ͳ���
template<class T>
void vectorList<T>::earse(int theIndex)
{
	//ɾ������ΪtheIndex��Ԫ��
	//���û�����Ԫ�أ����׳��쳣
	checkIndex(theIndex);
	element->earse(begin() + theIndex);
}

template <class T>
void vectorList<T>::insert(int theIndex, const T& theElement)
{
	//������ΪtheIndex������Ԫ��theElement
	if(theIndex < 0 || theIndex > size())
	{
		//��Ч����
		ostringstream s;
		s << "index = " << theIndex << " size = " << size();
		throw illegalIndex(s.str());
	}
	element->insert(element->begin() + theIndex, theElement);
		//������ض���������ʱ�ռ䲻�㣬��ô�����׳�û�в�׽���쳣

}
