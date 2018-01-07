//原地重排数组元素

template <class T>
void rearange(T a[], int n, int r[])
{
    //原地重排数组使之有序
    for(int i = 0; i < n; i++)
        //把正确的元素移到a[i]
        while(r[i] != i)
        {
            int t = r[i];
            swap(a[i], a[t]);
            swap(r[i], r[t]);
        }
}

