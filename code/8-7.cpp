//��⺺ŵ������ĵݹ鷽��
void towersOfHanoi(int n, int x, int y, int z)
{
	//����x������n�������Ƶ���y
	//����z��Ϊ��ת��
	if (n > 0)
	{
		towersOfHanoi(n-1, x, z, y);
		cout << "Move top disk from tower " << x
			 << " to top of tower " << y << endl;
		towersOfHanoi(n-1, z, y, x);
	}
}
