//输出匹配的括号
/*
 *求解策略
 *例如(a*(b+c)+d),通过观察，如果从左往右扫描一个字符串，那么每一个右括号
 *都与最近扫描的那个未匹配左括号相匹配，这种观察结果促使我们在从左往右的
 *扫描过程中，将扫描的左括号压入栈中，每当扫描到一个右括号，就将其与栈顶
 *的左括号(如果存在)相匹配并将匹配的左括号从栈顶删除
  */
void printMatchedPairs(string expr)
{
	//括号匹配
	arrayStack<int> s;
	int length = (int) expr.size();

	//扫描表达式expr寻找左括号和右括号
	for (int i = 0; i < length; i++)
		if(expr.at(i) == '(')
			s.push(i);
		else
			if (expr.at(i) == ')')
				try
				{
					//从栈中删除匹配的左括号
					cout << s.top() << ' ' << i << endl;
					s.pop();	//没有栈匹配
				}
					catch(stackEmpty)
					{
						//栈为空。没有匹配的左括号
						cout << "No match for right parenthesis"
							 << " at " << i << endl;
					}
		//栈不为空。剩余在栈中的左括号是不匹配的
		while (!s.empty())
		{
			cout << "No match for left parenthesis at "
				 << s.top() << endl;
			s.pop();
		}
}
