//定制链表栈
template <class T>
class linkedStack : public stack<T>
{
	public :
		linkedStack(int initialCapacity = 10)
		{stackTop = NULL; stackSize = 0;}
		~linkedStack();
		bool empty() const
			{return stackSize == 0;}
		int size() const
			{return stackSize;}
		T& top()
			{
				if (stackSize == 0)
					throw stackEmpty();
				return stackTop->element;
			}
		void pop();
		void push(const T& theElement)
			{
				stackTop = new chainNode<T>(theElement, stackTop);
				stackSize++;
			}
	private:
		chainNode<T>* stackTop;		//栈顶指针
		int stackSize;				//栈中元素个数

};
template <class T>
linkedStack<T>::~linkedStack()
{
	//析构函数
	while (stackTop != NULL)
	{
		//删除栈顶节点
		chainNode<T>* nextNode = stackTop->next;
		delete stackTop;
		stackTop = nextNode;
	}
}

template <class T>
void linkedStack<T>::pop()
{
	//删除栈顶节点
	if (stackSize == 0)
		throw stackEmpty();
	chainNode<T>* nextNode = stackTop->next;
	delete stackTop;
	stackTop = nextNode;
	stackSize--;
}
