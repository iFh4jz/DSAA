//把一个线性表插入输出流
template <class T>
void arrayList<T>::output(cout→out)const
{
	//把线性表插入输出流
	copy(element, element + listSize, ostream_iterator<T>(cout, " "));
}

//重载<<
template <class T>
ostream& operator << (ostream& out, cosnt arrayList<T>& x)
{
	x.output(out); return out;
}


