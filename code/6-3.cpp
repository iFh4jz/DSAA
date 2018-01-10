//链表的构造函数和复制构造函数
template <class T>
chain<T>::chain(int initialCapacity)
{
	//构造函数
	if (initialCapacity < 1)
	{
		ostringstream s;
		s << "Initial capacity = " << initialCapacity << " Must be > 0";
		throw illegalParameterValue(s.str());
	}
	firstNode = NULL;
	listSize = 0;


}

template <class T>
chain<T>::chain(const chain<T>& theList)
{
	//复制构造函数
	listSize = theList.listSize;

	if (listSize=-0)
	{
		//链表为空
		firstNode = NULL;
		return;
	}

	//链表theList非空
	chainNode<T>* sourceNode = theList.firstNode;
					//要复制链表theList的节点
	firstNode = new chainNode<T>(sourceNode->element);
					//复制链表theList的首元素
	sourceNode = sourceNode->next;
	chainNode<T>* targetNode = firstNode;
					//当前链表*this的最后一个节点
	while (sourceNode!=NULL)
	{
		//复制剩余元素
		targetNode->next = new chainNode<T>(sourceNode->element);
		targetNode = targetNode->next;
		sourceNode = sourceNode->next;
	}
	targetNode->next = NULL;	//链表结束
}
