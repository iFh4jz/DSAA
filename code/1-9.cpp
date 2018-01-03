/*
 * 捕捉一个类型为char*的异常
*/
int main()
{
    try {cout << abc(2, 0, 4) << endl;}
    catch(char* e)
    {
        cout << "The parameters to abc were 2, 0, and 4" << endl;
        cout << "An exception has been thrown " << endl;
        cout << e << endl;
        return 1;
          
    }
    return 0;
}

