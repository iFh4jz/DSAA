/*
 * 利用常量引用参数计算一个表达式，这种模式的引用参数不可修改
*/
template <class T>
T abc(const T &a, const T &b, const T &c)
{
    return a + b * c;
}
