//ʹ�����������
int main()
{
	int x[3] = [0,1,2];
	//��ָ��y��������x
	for (int* y=x;y!=x+3;y++)
		cout << *y << " ";
	cout << endl;
	return 0;
}
