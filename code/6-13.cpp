//��������ͷ����ѭ������
template <class T>
circularListWithHeader<T>::circularListWithHeader()
{
	//���캯��
	headerNode = new chainNode<T>();
	headerNode->nex = headerNode;
	listSize = 0;

}

template <class T>
int circularListWithHeader<T>::indexOf(const T& theElement) const
{
	//����Ԫ��theElement �״γ��ֵ�λ��
	//����Ԫ�ز����ڣ��򷵻�-1
	//
	//��Ԫ��theElement����ͷ���
	headerNode->element = theElement;

	//������������Ԫ��theElement
	chainNode<T>* currentNode = headerNode->next;
	int index = 0;
	while (currentNode->element != theElement)
	{
		//�Ƶ���һ�ڵ�
		currentNode = currentNode->next;
		index++;
	}
	//ȷ���Ƿ��ҵ�Ԫ��theElement
	if (currentNode == headerNode)
		return -1;
	else 
		return index;
}
