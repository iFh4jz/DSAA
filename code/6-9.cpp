//output方法
template <class T>
void chain<T>::output(ostream& out) const
{
	//把链表放入输出流
	for (chainNode<T>*	currentNode = firstNode;
						currentNode != NULL;
						currentNode = currentNode->next)
		out << currentNode->element << " ";
}
//重载<<
template <class T>
ostream& operator << (ostream& out, const chain<T>& x)
{x.output(out);
return out;
}
