//在队列中插入一个元素
template <class T>
void arrayQueue<T>::push(const T& theElement)
{
	//把元素theElement加入队列
	//如果需要，则增加数组长度
	if ((theBack + 1) % arrayLength == theFront)
	{
		//加倍数组长度
		//此处是数组长度加倍的代码

	}
	//把元素theElement插入队列尾部
	queueBack = (queueBack + 1) % arrayLength;
	queue[queueBack] = theElement;
}
