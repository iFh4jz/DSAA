//��arrayStack
template <class >
class arrayStack : public stack<T>
{
	public : 
		arrayStack(int initialCapacity = 10);
		~arrayStack() {delete [] stack;}
		bool empty() const {return stackTop == -1;}
		int size() const
		{return stackTop +1;}
		T& top()
			{
				if (stackTop == -1)
					throw stackEmpty();
				return stack[stackTop];
			}
		void pop()
			{
				if (stackTop == -1)
					throw stackEmpty();
				stack[stackTop--].~T();		//T����������
			}
		void push(const T& theElement);
	private:
		int stackTop;		//��ǰջ��
		int arrayLength;	//ջ����
		T *stack;
};

template <class T>
arrayStack<T>::arrayStack(int initialCapacity)
{
	//���캯��
	if (initialCapacity < 1)
	{
		ostringstream s;
		s<< "Initial capacity = " << initialCapacity << " Must be > 0";
		throw illegalParameterValue(s.str());
	}
	arrayLength = initialCapacity;
	stack = new T[arrayLength];
	stackTop = -1;
}

template <class T>
void arrayAtack<T>::push(const T& theELement)
{
	//��Ԫ��theElementѹ��ջ
	if (stackTop == arrayLength - 1)
	{
		//�ռ������������ӱ�
		changeLength1D(stack, arrayLength, 2 * arrayLength);
		arrayLength *= 2;
	}
	//��ջ������
	stack[++stackTop] = theElement;
}
