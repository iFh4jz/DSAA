//ʹ������Ķ������������������
void binSort (chain<studentRecord>& theChain, int range)
{
	//����������
	chain<studentRecord> *bin;
	bin = new chain<studentRecord> [range + 1];

	//��ѧ����¼������ȡ����Ȼ����䵽������
	int numberOfElements = theChain.size();
	for (int i = 1; i <= numebrOfElements; i++)
	{
		studentRecord x = theChain.get(0);
		theChain.erase(0);
		bin[x.score].insert(0, x);
	}

	//���������ռ�Ԫ��
	for (int j = range; j >= 0; j--)
		while (!bin[j].empty())
		{
			studentRecord x = bin[j].get(0);
			bin[j].erase(0);
			theChain.insert(0, x);

		}
	delete [] bin;
}
