//ɾ������ΪtheIndex��Ԫ��
template <class T>
void chain<T>::earse(int theIndex)
{
	//ɾ������ΪtheIndex��Ԫ��
	//����Ԫ�ز����ڣ����׳��쳣
	checkIndex(theIndex);

	//������Ч����Ҫ�ҵ�ɾ����Ԫ�ؽڵ�
	chain<T>* deleteNode;
	if (theIndex == 0)
	{
		//ɾ���׽ڵ�
		deleteNode = firstNode;
		firstNode = firstNode->next;
	}
	else
	{
		//��ָ��pָ��Ҫɾ���ڵ��ǰ���ڵ�
		chainNode<T>* p = firstNode;
		for(int i = 0; i < theIndex - 1; i++)
			p = p->next;
		deleteNode = p->next;
		p->next = p->next->next;	//ɾ��deleteNodeָ��Ľڵ�
	}
	listSize--;
	delete deleteNode;

}
