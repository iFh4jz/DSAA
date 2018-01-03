/*
 *交换两个整数的不正确代码,因为数值传参不会改变实参的值
*/
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
