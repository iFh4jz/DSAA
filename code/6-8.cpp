//����Ԫ��theElement��ʹ������ΪtheIndex
template <class T>
void chain<T>::insert(int theIndex, const T& theElement)
{
	//������ΪtheIndex��λ���ϲ���Ԫ��theElement
	if (theIndex < 0 || theIndex > listSize)
	{
		ostringstream s;
		s << "index = " << theIndex << " size = " << listSize;
		throw illegalIndex(s.str());
	}

	if (theIndex == 0)
		//������ͷ����
		firstNode = new chainNode<T>(theElement, firstNode);
	else 
	{
		//Ѱ����Ԫ�ص�ǰ��
		chainNode<T>* p = firstNode;
		for (int i = 0; i < theIndex - 1; i++)
			p = p->next;
		//��p�����
		p->next = new chainNode<T>(theElement, p->next);
	}
	listSize++;
}
