//��STL��copy������һ�ֿ�ִ�д���
template <class T>
void copy(iterator start, iterator end, iterator to)
{
	//��[start,end]���Ƶ�[to, to+end-start]
	while(start!=end)
	{*to = *start; start++;to++}
}
