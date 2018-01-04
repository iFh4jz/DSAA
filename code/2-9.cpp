template<class T>
void rank(T a[], int n, int r[])
{
	//给数组a[0:n-1]的n个元素排名次
	//结果在r[0:n-1]中返回
	for(int i = 0; i < n; i++)
		r[i] = 0;	//初始化
	//比较所有元素对
	for(int i = 1; i < n; i++)
		for(int j = 0; j < i; j++)
			if(a[j] <= a[i])
				r[i]++；
			else
				r[j]++;
}
