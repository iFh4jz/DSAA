//对STL的copy函数的一种可执行代码
template <class T>
void copy(iterator start, iterator end, iterator to)
{
	//从[start,end]复制到[to, to+end-start]
	while(start!=end)
	{*to = *start; start++;to++}
}
