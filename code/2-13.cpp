//及时终止的冒泡排序
template <class T>
bool bubble(T a[], int n)
{
    //把数组a[0:n-1]的最大元素移到最右端
    bool swapped = false;  //目前为止未交换
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i+1])
        {
            swap(a[i], a[i+1]);
            swapped = true;  //交换
        }
    return swapped;
}

template <class T>
void bubbleSorte(T a[], int n)
{
    //及时终止冒泡排序
    for (int i = n; i > 1 && bubble(a, i); i--);
}
