//使用STL算法next_permutation求排序
template <class T>
void permutations(T list[], int k, int m)
{
	//生成list[k:m]的所有排列
	//假设k<=m
	//将排序逐个输出
	do{
		copy(list, list+m+1,
				ostream_iterator<T>(cout, " "));
		cout << endl;
	}
	while (next_permutation(list, list+m+1));


}
