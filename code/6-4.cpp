//�������������
template <class T>
chain<T>::~chain()
{
	//��������������ɾ����������нڵ�
	chainNode<T>* nextNode = firstNode->next;
	delete firstNode;
	firstNode = nextNode;
}
