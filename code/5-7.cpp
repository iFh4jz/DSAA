template <class T>
void arrayList<T>::insert(int theIndex, const T& theElement)
{
	//������theIndex������Ԫ��theElement
	if (theIndex < 0 || theIndex > listSize)
	{
		//��Ч����
		ostringstream s;
		s << "index = " << theIndex << " size = " << listSize;
		throw illegalIndex(s.str());
	}
}

//��Ч����,ȷ�������Ƿ�����
if (listSize == arrayLength)
{
	//����ռ����������鳤�ȱ���
	changeLength1D(element, arrayLength, 2 * arrayLength);
	arrayLength *= 2;
}

//��Ԫ�������ƶ�һ��λ��
copy_backward(element + theIndex, element + listSize, element + listSize + 1);

element[theIndex] = theElement;
listSize++;
