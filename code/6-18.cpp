template <class T>
void chain<T>::binSort(int range)
{
	//�������еĽڵ�����
	//��������ʼ������
	chainNode<T> **bottom, **top;
	bottom = new chainNode<T>* [range + 1];
	top = new chainNode<T>* [range = 1];
	for (int b = 0; b <= range; b++)
		bottom[b] = NULL;
	//������Ľڵ���䵽����
	for (; firstNode != NULL; firstNode = firstNode->next)
	{
		//���׽ڵ�firstNode�ӵ�������
		int theBin = firstNode->element;	//Ԫ������ת��������int
		if (bottom[theBin] == NULL)			//����Ϊ��
			bottom[theBin] = top[theBin] = firstNode;
		else
		{
			//���Ӳ���
			top[theBin]->next = firstNode;
			top[theBin] = firstNode;
		}
	}
	//�������еĽڵ��ռ�����������
	chainNode<T> *y = NULL;
	for (int theBin = 0; theBin <= range; theBin++)
		if (bottom[theBin] != NULL)
		{
			//���Ӳ���
			if (y == NULL)			//��һ���ǿ�����
				firstNode = bottom[theBin];
			else 
				y->next = bottom[theBin];
			y = top[theBin];
		}
	if (y != NULL)
		y->next = NULL;
	delete [] bottom;
	delete [] top;
}
