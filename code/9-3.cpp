//�����µ�����Ԫ��
T* newQueue = new T[2 * arrayLength];

//��ԭ����Ԫ�ظ��Ƶ�������
int start = (theFront + 1) % arrayLength;
if (start < 2)
	//û�гɻ�
	copy(queue + start, queue + start + arrayLength - 1, newQueue);
else
{
	//���гɻ�
	copy(queue + start, queue + arrayLength, newQueue);
	copy(queue, queue + theBack + 1, newQueue + arrayLength - start);
}

//�����¶��е��׺�β��Ԫ��λ��
theFront = 2 * arrayLength - 1;
theBack = arrayLength -2;		//���г���arrayLength - 1
arrayLength *= 2;
delete [] queue;
queue = newQueue;


//�Ӷ�����ɾ��һ��Ԫ��
void pop()
{
	//ɾ��������Ԫ��
	if (theFront ==theBack)
		throw queueEmpty();
	theFront = (theFront + 1) % arrayLength;
	queue[theFront].~T();		//��T����
}
	
