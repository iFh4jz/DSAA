//链表的析构函数
template <class T>
chain<T>::~chain()
{
	//链表析构函数，删除链表的所有节点
	chainNode<T>* nextNode = firstNode->next;
	delete firstNode;
	firstNode = nextNode;
}
