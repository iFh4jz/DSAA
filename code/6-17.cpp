//使用链表的多个方法进行箱子排序
void binSort (chain<studentRecord>& theChain, int range)
{
	//按分数排序
	chain<studentRecord> *bin;
	bin = new chain<studentRecord> [range + 1];

	//把学生记录从链表取出，然后分配到箱子里
	int numberOfElements = theChain.size();
	for (int i = 1; i <= numebrOfElements; i++)
	{
		studentRecord x = theChain.get(0);
		theChain.erase(0);
		bin[x.score].insert(0, x);
	}

	//从箱子中收集元素
	for (int j = range; j >= 0; j--)
		while (!bin[j].empty())
		{
			studentRecord x = bin[j].get(0);
			bin[j].erase(0);
			theChain.insert(0, x);

		}
	delete [] bin;
}
