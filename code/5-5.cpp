template <class T>
void arrayList<T>::checkIndex(int theIndex) const
{
	//ȷ������theIndex��0��listSize-1֮��
	if (theIndex < 0 || theIndex >= listSize)
	{
		ostringstream s;
		s << "index = " << theIndex << " size = " << listSize;
		throw illegalIndex(s.str());
	}
}

template <class T>
T& arrayList<T>::get(int theIndex) const
{
	//��������ΪtheIndex��Ԫ��
	//����Ԫ�ز�����,���׳��쳣
	checkIndex(theIndex);
	return element[theIndex];
}

template<class T>
int arrayList<T>::indexOf(const T& theElement) const
{
	//����Ԫ��theElement��һ�γ���ʱ������
	//����Ԫ�ز����ڣ��򷵻�-1
	//����Ԫ��theElement
	int theIndex = (int) (find(element, element + listsize, theElement) - element);
	//ȷ��Ԫ��theElement�Ƿ��ҵ�
	if (theIndex == listSize)
		//û���ҵ�
		return -1;
	else
		return theIndex;
}
