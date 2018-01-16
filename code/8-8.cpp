//使用栈求解汉诺塔问题
//使用数组描述栈
//全局变量，tower[1:3]表示三个塔
arrayStack<int> tower[4];

void moveAndShow(int, int, int, int);

void towerOfHanoi(int n)
{
	//函数moveAndShow的预处理
	for (int d = n; d > 0; d--) //初始化
		tower[1].push(d);		//把碟子d加到塔1

	//把n个碟子从塔1移到3, 用塔2作为中转站
	moveAndShow(n, 1, 2, 3);
}

void moveAndShow(int n, int x, int y, int z)
{
	//把塔x顶部的n个碟子移到塔y,显示移动后的布局
	//用塔z作为中转站
	if (n > 0)
	{
		moveAndShow(n-1, x, z, y);
		int d = tower[x].top();		//把一个碟子
		tower[x].pop();				//从塔x的顶部移到
		tower[y].push(d);			//塔y的顶部
		showState();				//显示塔3的布局
		moveAndShow(n-1, z, y, x);
	}
}
