//һ�����Ա�ĳ�����

template <class T>
class linearList
{
    public:
        virtual ~linearList() {};
        virtual bool empty() const = 0;
                            //����true,���ҽ������Ա�Ϊ��
        virtual int size() const = 0;
                            //�������Ա��Ԫ�ظ���
        virtual T& get(int theIndex) const = 0;
                            //��������ΪtheIndex��Ԫ��
        virtual int indexOf(const T& theelement) const = 0;
                            //����Ԫ��theElement��һ�γ��ֵ�����
        virtual void erase(int theIndex) = 0;
                            //ɾ������ΪtheIndex��Ԫ��
        virtual void insert(int theIndex, const T& theElement) = 0;
                            //��theElement���뵽����ΪtheIndex��λ��
        virtual void output(ostream& out) const = 0;
                            //�����Ա���������out
};
