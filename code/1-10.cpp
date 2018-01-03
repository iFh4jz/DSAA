template <class T>
bool make2Array(T ** &x, int numberOfRows, int numberOfColumns)
{
    try{
        //创建行指针
            x = new T * [numberOfRows];
        //为每一行分配空间
            for (int i = 0; i < numberOfRows; i++)
                x[i] = new int [numberOfColumns];
            return true;
    }
    catch (bad_alloc)
    {
        return false;
    }
}
