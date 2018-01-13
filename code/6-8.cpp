//插入元素theElement并使其索引为theIndex
template <class T>
void chain<T>::insert(int theIndex, const T& theElement)
{
	//在索引为theIndex的位置上插入元素theElement
	if (theIndex < 0 || theIndex > listSize)
	{
		ostringstream s;
		s << "index = " << theIndex << " size = " << listSize;
		throw illegalIndex(s.str());
	}

	if (theIndex == 0)
		//在链表头插入
		firstNode = new chainNode<T>(theElement, firstNode);
	else 
	{
		//寻找新元素的前驱
		chainNode<T>* p = firstNode;
		for (int i = 0; i < theIndex - 1; i++)
			p = p->next;
		//在p后插入
		p->next = new chainNode<T>(theElement, p->next);
	}
	listSize++;
}
