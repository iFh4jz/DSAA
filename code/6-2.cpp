//����ڵ�Ľṹ����
template <class T>
class chain : public linearList<T>
{
	public:
		//���캯���� ���ƹ��캯������������
		chain(int initialCapacity = 10);
		chain(const chain<T>&);
		~chain();

		//������������ADT�ķ���
		bool empty() const {return listSize == 0;}
		int size() const {return listSize;}
		T& get(int theIndex) cosnt;
		int indexOf(const T& theElement) const;
		void earse(int theIndex);
		void insert(int theIndex, const T& theElement);
		void output(ostream& out) const;

	protected:
		void checkIndex(int theIndex) const;
			//���������Ч���׳��쳣
			chainNode<T>* firstNode;		//ָ�������һ���ڵ��ָ��
			int listSize;					//���Ա��Ԫ�ظ���
};
