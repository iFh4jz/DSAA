//�ڶ����в���һ��Ԫ��
template <class T>
void arrayQueue<T>::push(const T& theElement)
{
	//��Ԫ��theElement�������
	//�����Ҫ�����������鳤��
	if ((theBack + 1) % arrayLength == theFront)
	{
		//�ӱ����鳤��
		//�˴������鳤�ȼӱ��Ĵ���

	}
	//��Ԫ��theElement�������β��
	queueBack = (queueBack + 1) % arrayLength;
	queue[queueBack] = theElement;
}
