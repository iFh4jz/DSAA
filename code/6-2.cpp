//链表节点的结构定义
template <class T>
class chain : public linearList<T>
{
	public:
		//构造函数， 复制构造函数和析构函数
		chain(int initialCapacity = 10);
		chain(const chain<T>&);
		~chain();

		//抽象数据类型ADT的方法
		bool empty() const {return listSize == 0;}
		int size() const {return listSize;}
		T& get(int theIndex) cosnt;
		int indexOf(const T& theElement) const;
		void earse(int theIndex);
		void insert(int theIndex, const T& theElement);
		void output(ostream& out) const;

	protected:
		void checkIndex(int theIndex) const;
			//如果索引无效，抛出异常
			chainNode<T>* firstNode;		//指向链表第一个节点的指针
			int listSize;					//线性表的元素个数
};
