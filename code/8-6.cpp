//���ƥ�������
/*
 *������
 *����(a*(b+c)+d),ͨ���۲죬�����������ɨ��һ���ַ�������ôÿһ��������
 *�������ɨ����Ǹ�δƥ����������ƥ�䣬���ֹ۲�����ʹ�����ڴ������ҵ�
 *ɨ������У���ɨ���������ѹ��ջ�У�ÿ��ɨ�赽һ�������ţ��ͽ�����ջ��
 *��������(�������)��ƥ�䲢��ƥ��������Ŵ�ջ��ɾ��
  */
void printMatchedPairs(string expr)
{
	//����ƥ��
	arrayStack<int> s;
	int length = (int) expr.size();

	//ɨ����ʽexprѰ�������ź�������
	for (int i = 0; i < length; i++)
		if(expr.at(i) == '(')
			s.push(i);
		else
			if (expr.at(i) == ')')
				try
				{
					//��ջ��ɾ��ƥ���������
					cout << s.top() << ' ' << i << endl;
					s.pop();	//û��ջƥ��
				}
					catch(stackEmpty)
					{
						//ջΪ�ա�û��ƥ���������
						cout << "No match for right parenthesis"
							 << " at " << i << endl;
					}
		//ջ��Ϊ�ա�ʣ����ջ�е��������ǲ�ƥ���
		while (!s.empty())
		{
			cout << "No match for left parenthesis at "
				 << s.top() << endl;
			s.pop();
		}
}
