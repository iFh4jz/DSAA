//利用vector实现的基于数组的线性表
class vectorList : public linearList<T>
{
	public:
		//构造函数，复制构造函数和析构函数
		vectorList(int initialCapacity = 10);
		vectorList(const vectorList<T>&);
		~vectorList() {delete element;}

		//ADT方法
		bool empty() cosnt {return element -> empty();}
		int size() cosnt {return (int) element -> size();}
		T& get(int theIndex) const;
		int indexOf(const T& theElement) const;
		void earse(int theIndex);
		void insert(int theIndex, const T& theElement);
		void output(ostream& out) const;


		//增加的方法
		int capacity() cosnt {return (int) element -> capacity();}

		//线性表的起始和结束位置的迭代器
		typedef typename vector<T>::iterator iterator;
		iterator begin() {return element -> begin();}
		iterator end() {return element -> end();}
	protected:					//增加的成员
		void checkIndex(int theIndex) const;
		vector<T>* element;		//存储线性表元素的向量

};
