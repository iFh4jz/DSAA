//类arrayStack
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
				stack[stackTop--].~T();		//T的析构函数
			}
		void push(const T& theElement);
	private:
		int stackTop;		//当前栈顶
		int arrayLength;	//栈容量
		T *stack;
};

template <class T>
arrayStack<T>::arrayStack(int initialCapacity)
{
	//构造函数
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
	//将元素theElement压入栈
	if (stackTop == arrayLength - 1)
	{
		//空间已满，容量加倍
		changeLength1D(stack, arrayLength, 2 * arrayLength);
		arrayLength *= 2;
	}
	//在栈顶插入
	stack[++stackTop] = theElement;
}
