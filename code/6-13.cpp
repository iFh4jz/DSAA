//搜索带有头结点的循环链表
template <class T>
circularListWithHeader<T>::circularListWithHeader()
{
	//构造函数
	headerNode = new chainNode<T>();
	headerNode->nex = headerNode;
	listSize = 0;

}

template <class T>
int circularListWithHeader<T>::indexOf(const T& theElement) const
{
	//返回元素theElement 首次出现的位置
	//若该元素不存在，则返回-1
	//
	//将元素theElement放入头结点
	headerNode->element = theElement;

	//在链表中搜索元素theElement
	chainNode<T>* currentNode = headerNode->next;
	int index = 0;
	while (currentNode->element != theElement)
	{
		//移到下一节点
		currentNode = currentNode->next;
		index++;
	}
	//确定是否找到元素theElement
	if (currentNode == headerNode)
		return -1;
	else 
		return index;
}
