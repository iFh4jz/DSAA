//求解汉诺塔问题的递归方法
void towersOfHanoi(int n, int x, int y, int z)
{
	//把塔x顶部的n个碟子移到塔y
	//用塔z作为中转地
	if (n > 0)
	{
		towersOfHanoi(n-1, x, z, y);
		cout << "Move top disk from tower " << x
			 << " to top of tower " << y << endl;
		towersOfHanoi(n-1, z, y, x);
	}
}
