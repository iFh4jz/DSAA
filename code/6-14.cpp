//�����������������Ԫ�ؽṹ
struct studentRecord
{
	int score;
	string* name;
	int operator !=(const studentRecord& x) const
	{return (score != x.score);}
};

ostream& operator << (ostream& out, const studentRecord& x)
{
	out << x.score << ' ' << *x.name << endl;
	return out;
}



//�ṹstudentRecord����һ�ֶ���
struct studentRecord
{
	int score;
	string* name;

	operator int() const {return score;}
		//��studentRecord ��int������ת��
	
};

ostream& operator << (ostream& out, const studentRecord& x)
	{out << x.score << ' ' << x.name << endl;
	return out;
	}

//�ṹstudentRecord�ĵ����ֶ���
struct studentRecord
{
	int score;
	string* name;

	int operator != (const studentRecord& x) const
	{return (score!= x.score);}
	operator int() const {return score;}
};

ostream& operator << (ostream& out, const studentRecord& x)
{out << x.score << ' ' << *x.name << endl; return out;}
