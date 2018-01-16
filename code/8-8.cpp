//ʹ��ջ��⺺ŵ������
//ʹ����������ջ
//ȫ�ֱ�����tower[1:3]��ʾ������
arrayStack<int> tower[4];

void moveAndShow(int, int, int, int);

void towerOfHanoi(int n)
{
	//����moveAndShow��Ԥ����
	for (int d = n; d > 0; d--) //��ʼ��
		tower[1].push(d);		//�ѵ���d�ӵ���1

	//��n�����Ӵ���1�Ƶ�3, ����2��Ϊ��תվ
	moveAndShow(n, 1, 2, 3);
}

void moveAndShow(int n, int x, int y, int z)
{
	//����x������n�������Ƶ���y,��ʾ�ƶ���Ĳ���
	//����z��Ϊ��תվ
	if (n > 0)
	{
		moveAndShow(n-1, x, z, y);
		int d = tower[x].top();		//��һ������
		tower[x].pop();				//����x�Ķ����Ƶ�
		tower[y].push(d);			//��y�Ķ���
		showState();				//��ʾ��3�Ĳ���
		moveAndShow(n-1, z, y, x);
	}
}
