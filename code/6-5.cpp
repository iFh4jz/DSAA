//方法get的返回值是索引为theIndex的元素
template<class T>
T& chain<T>::get(int theIndex)const
{
	//返回索引为theIndex的元素
	//若该元素不存在，则抛出异常
	checkIndex(theIndex)

	//移向所需要的节点
	chainNode<T>* currentNode = firstNode;
	for (int i = 0; i < theIndex; i++)
		currentNode = currentNode->next;
	return
		currentNode->element;
}


