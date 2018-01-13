//删除索引为theIndex的元素
template <class T>
void chain<T>::earse(int theIndex)
{
	//删除索引为theIndex的元素
	//若该元素不存在，则抛出异常
	checkIndex(theIndex);

	//索引有效，需要找到删除的元素节点
	chain<T>* deleteNode;
	if (theIndex == 0)
	{
		//删除首节点
		deleteNode = firstNode;
		firstNode = firstNode->next;
	}
	else
	{
		//用指针p指向要删除节点的前驱节点
		chainNode<T>* p = firstNode;
		for(int i = 0; i < theIndex - 1; i++)
			p = p->next;
		deleteNode = p->next;
		p->next = p->next->next;	//删除deleteNode指向的节点
	}
	listSize--;
	delete deleteNode;

}
