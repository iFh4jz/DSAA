//������dictionary
class dictionary
{
	public:
		virtual ~dictionary() {}
		virtual bool empty() const = 0;
					//����true, ���ҽ����ֵ�Ϊ��
		virtual int size() const = 0;
		virtual pair<const K, E*> find(const K&) const = 0;
}
