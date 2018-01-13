//output����
template <class T>
void chain<T>::output(ostream& out) const
{
	//��������������
	for (chainNode<T>*	currentNode = firstNode;
						currentNode != NULL;
						currentNode = currentNode->next)
		out << currentNode->element << " ";
}
//����<<
template <class T>
ostream& operator << (ostream& out, const chain<T>& x)
{x.output(out);
return out;
}
