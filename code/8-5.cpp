//��������ջ
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
		chainNode<T>* stackTop;		//ջ��ָ��
		int stackSize;				//ջ��Ԫ�ظ���

};
template <class T>
linkedStack<T>::~linkedStack()
{
	//��������
	while (stackTop != NULL)
	{
		//ɾ��ջ���ڵ�
		chainNode<T>* nextNode = stackTop->next;
		delete stackTop;
		stackTop = nextNode;
	}
}

template <class T>
void linkedStack<T>::pop()
{
	//ɾ��ջ���ڵ�
	if (stackSize == 0)
		throw stackEmpty();
	chainNode<T>* nextNode = stackTop->next;
	delete stackTop;
	stackTop = nextNode;
	stackSize--;
}
