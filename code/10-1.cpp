//抽象类dictionary
class dictionary
{
	public:
		virtual ~dictionary() {}
		virtual bool empty() const = 0;
					//返回true, 当且仅当字典为空
		virtual int size() const = 0;
		virtual pair<const K, E*> find(const K&) const = 0;
}
