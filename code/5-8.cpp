//��һ�����Ա���������
template <class T>
void arrayList<T>::output(cout��out)const
{
	//�����Ա���������
	copy(element, element + listSize, ostream_iterator<T>(cout, " "));
}

//����<<
template <class T>
ostream& operator << (ostream& out, cosnt arrayList<T>& x)
{
	x.output(out); return out;
}


