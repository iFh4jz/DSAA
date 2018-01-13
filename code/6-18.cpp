template <class T>
void chain<T>::binSort(int range)
{
	//对链表中的节点排序
	//创建并初始化箱子
	chainNode<T> **bottom, **top;
	bottom = new chainNode<T>* [range + 1];
	top = new chainNode<T>* [range = 1];
	for (int b = 0; b <= range; b++)
		bottom[b] = NULL;
	//把链表的节点分配到箱子
	for (; firstNode != NULL; firstNode = firstNode->next)
	{
		//把首节点firstNode加到箱子中
		int theBin = firstNode->element;	//元素类型转换到整形int
		if (bottom[theBin] == NULL)			//箱子为空
			bottom[theBin] = top[theBin] = firstNode;
		else
		{
			//箱子不空
			top[theBin]->next = firstNode;
			top[theBin] = firstNode;
		}
	}
	//把箱子中的节点收集到有序链表
	chainNode<T> *y = NULL;
	for (int theBin = 0; theBin <= range; theBin++)
		if (bottom[theBin] != NULL)
		{
			//箱子不空
			if (y == NULL)			//第一个非空箱子
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
