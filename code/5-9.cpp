//使用数组迭代器
int main()
{
	int x[3] = [0,1,2];
	//用指针y遍历数组x
	for (int* y=x;y!=x+3;y++)
		cout << *y << " ";
	cout << endl;
	return 0;
}
