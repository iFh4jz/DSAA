//链队列的插入和删除方法
template <class T>
void linkedQueue<T>::push(const T& theElement)
{
	//把元素theElement插到队尾
	
	//申请新元素节点
	chainNode<T>* newNode = new chainNode<T>(theElement, NULL);

	//把新节点插到队尾
	if (queueSize == 0)
		queueFront = newNode;		//队列空
	else
		queueBack->next = newNode;	//队列不空
	queueBack = newNode;
	queueSize++;
}

template <class T>
void linkedQueue<T>::pop()
{
	//删除首元素
	if (queueFront == NULL)
		throw queueEmpty();
	chainNode<T>* nextNode = queueFront->next;
	delete queueFront;
	queueFront = nextNode;
	queueSize--;
}
