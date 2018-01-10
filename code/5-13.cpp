//vectorList的构造函数
template <class T>
vectorList<T>::vectorList(int initialCapacity)
{
	//构造函数
	if(initialCapacity < 1)
	{
		ostringstream s;
		s << "Initial capacity = " << initialCapacity << " Must be > 0";
		throw illegalParameterValue(s.str());
	}
	element = new vector<T>;
			//创建容量为0的空向量
	element -> reserve(initialCapacity);
			//vector容量从0增加到initialCapacity
}

template <class T>
vectorList<T>::vectorList(const vectorList<T>& theList)
{
	//复制构造函数
	element = new <T>(*thiList.element);
}
