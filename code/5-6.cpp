//删除索引为theIndex的元素
template <class T>
void arrayList<T>::earse(int theIndex)
{
	//删除其索引为theIndex的元素
	//如果该元素不存在，则抛出异常
	checkIndex(theIndex);
	//有效索引,移动其索引大于theIndex的元素
	copy(element + theIndex + 1, element + listSize, element + theIndex);
	element[--listSize].~T();		//调用析构函数
}
