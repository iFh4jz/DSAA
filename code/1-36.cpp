//���㲢���һ�����η��̵ĸ�
//#include <iostream>
//using namespace std;

void outputRoots(const double& a, const double& b, const double& c)
{
	//�����������η��̵ĸ�
	double d = b * b - 4 * a * c;
	if(d > 0){
		double sqrtd = sqrt(d);
		cout << "There are two real roots "
			 << (-b + sqrtd) / (2 * a) << " and "
			 << (-b - sqrtd) / (2 * a)
			 << endl;
	}
	else if (d == 0)
		cout << "There is only one distinct root "
			 << -b / (2 * a)
			 <<endl;
		else
			cout << "The roots are complex"
				 << endl
				 << "The real part is "
				 << -b / (2 * a) << endl
				 << "The imaginary part is "
				 << sqrt(-d) / (2 * a) << endl;

}
/*
int main()
{
	int a = 2, b = 3, c = 4;
	outputRoots(a, b, c);
	return 0;

}
*/
