template <class T>
void arrayList<T>::checkIndex(int theIndex) const
{
	//确定索引theIndex在0和listSize-1之间
	if (theIndex < 0 || theIndex >= listSize)
	{
		ostringstream s;
		s << "index = " << theIndex << " size = " << listSize;
		throw illegalIndex(s.str());
	}
}

template <class T>
T& arrayList<T>::get(int theIndex) const
{
	//返回索引为theIndex的元素
	//若此元素不存在,则抛出异常
	checkIndex(theIndex);
	return element[theIndex];
}

template<class T>
int arrayList<T>::indexOf(const T& theElement) const
{
	//返回元素theElement第一次出现时的索引
	//若该元素不存在，则返回-1
	//查找元素theElement
	int theIndex = (int) (find(element, element + listsize, theElement) - element);
	//确定元素theElement是否找到
	if (theIndex == listSize)
		//没有找到
		return -1;
	else
		return theIndex;
}
