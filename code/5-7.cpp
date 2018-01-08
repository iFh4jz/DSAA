template <class T>
void arrayList<T>::insert(int theIndex, const T& theElement)
{
	//在索引theIndex处插入元素theElement
	if (theIndex < 0 || theIndex > listSize)
	{
		//无效索引
		ostringstream s;
		s << "index = " << theIndex << " size = " << listSize;
		throw illegalIndex(s.str());
	}
}

//有效索引,确定数组是否已满
if (listSize == arrayLength)
{
	//数组空间已满，数组长度倍增
	changeLength1D(element, arrayLength, 2 * arrayLength);
	arrayLength *= 2;
}

//把元素向右移动一个位置
copy_backward(element + theIndex, element + listSize, element + listSize + 1);

element[theIndex] = theElement;
listSize++;
