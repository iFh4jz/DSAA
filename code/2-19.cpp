//矩阵转置
template <class T>
void transpose(T **a, int rows)
{
    //原地完成矩阵a[0:rows-1][0:rows-1]的转置
    for (int i = 0; i < rows; i++)
        for (int j = i+1; j< rows; j++)
            swap(a[i][j], a[j][i]);
}
