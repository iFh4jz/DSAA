//����vectorʵ�ֵĻ�����������Ա�
class vectorList : public linearList<T>
{
	public:
		//���캯�������ƹ��캯������������
		vectorList(int initialCapacity = 10);
		vectorList(const vectorList<T>&);
		~vectorList() {delete element;}

		//ADT����
		bool empty() cosnt {return element -> empty();}
		int size() cosnt {return (int) element -> size();}
		T& get(int theIndex) const;
		int indexOf(const T& theElement) const;
		void earse(int theIndex);
		void insert(int theIndex, const T& theElement);
		void output(ostream& out) const;


		//���ӵķ���
		int capacity() cosnt {return (int) element -> capacity();}

		//���Ա����ʼ�ͽ���λ�õĵ�����
		typedef typename vector<T>::iterator iterator;
		iterator begin() {return element -> begin();}
		iterator end() {return element -> end();}
	protected:					//���ӵĳ�Ա
		void checkIndex(int theIndex) const;
		vector<T>* element;		//�洢���Ա�Ԫ�ص�����

};
