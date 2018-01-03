/*
 * 该程序使用引用传参
*/

template <class T>
T abc(T &a, T &b, T &c)
{
    return a + b * c;
}
