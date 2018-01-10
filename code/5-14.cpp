//vectorList的删除和插入
template<class T>
void vectorList<T>::earse(int theIndex)
{
	//删除索引为theIndex的元素
	//如果没有这个元素，则抛出异常
	checkIndex(theIndex);
	element->earse(begin() + theIndex);
}

template <class T>
void vectorList<T>::insert(int theIndex, const T& theElement)
{
	//在索引为theIndex处插入元素theElement
	if(theIndex < 0 || theIndex > size())
	{
		//无效索引
		ostringstream s;
		s << "index = " << theIndex << " size = " << size();
		throw illegalIndex(s.str());
	}
	element->insert(element->begin() + theIndex, theElement);
		//如果在重定向量长度时空间不足，那么可以抛出没有捕捉的异常

}
