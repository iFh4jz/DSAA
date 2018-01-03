/*
 * 一个更通用的版本
 * 每个形参可以是不同的数据类型，而函数的返回值和第一个形参类型相同
*/
template <class Ta, class Tb, class Tc>
Ta abc(const Ta &a, const Tb &b, const Tc &c)
{
    return a + b * c;
}

