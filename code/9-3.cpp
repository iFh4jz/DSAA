//分配新的数组元素
T* newQueue = new T[2 * arrayLength];

//把原数组元素复制到新数组
int start = (theFront + 1) % arrayLength;
if (start < 2)
	//没有成环
	copy(queue + start, queue + start + arrayLength - 1, newQueue);
else
{
	//队列成环
	copy(queue + start, queue + arrayLength, newQueue);
	copy(queue, queue + theBack + 1, newQueue + arrayLength - start);
}

//设置新队列的首和尾的元素位置
theFront = 2 * arrayLength - 1;
theBack = arrayLength -2;		//队列长度arrayLength - 1
arrayLength *= 2;
delete [] queue;
queue = newQueue;


//从队列中删除一个元素
void pop()
{
	//删除队列首元素
	if (theFront ==theBack)
		throw queueEmpty();
	theFront = (theFront + 1) % arrayLength;
	queue[theFront].~T();		//给T解析
}
	
