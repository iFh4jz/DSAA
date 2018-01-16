//�����еĲ����ɾ������
template <class T>
void linkedQueue<T>::push(const T& theElement)
{
	//��Ԫ��theElement�嵽��β
	
	//������Ԫ�ؽڵ�
	chainNode<T>* newNode = new chainNode<T>(theElement, NULL);

	//���½ڵ�嵽��β
	if (queueSize == 0)
		queueFront = newNode;		//���п�
	else
		queueBack->next = newNode;	//���в���
	queueBack = newNode;
	queueSize++;
}

template <class T>
void linkedQueue<T>::pop()
{
	//ɾ����Ԫ��
	if (queueFront == NULL)
		throw queueEmpty();
	chainNode<T>* nextNode = queueFront->next;
	delete queueFront;
	queueFront = nextNode;
	queueSize--;
}
