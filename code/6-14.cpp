//用于箱子排序的链表元素结构
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



//结构studentRecord的另一种定义
struct studentRecord
{
	int score;
	string* name;

	operator int() const {return score;}
		//从studentRecord 到int的类型转换
	
};

ostream& operator << (ostream& out, const studentRecord& x)
	{out << x.score << ' ' << x.name << endl;
	return out;
	}

//结构studentRecord的第三种定义
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
