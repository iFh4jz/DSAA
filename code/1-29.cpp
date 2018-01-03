/*
 *计算n!的递归函数
 * 
*/
int factorial(int n)
{
    if(n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}


