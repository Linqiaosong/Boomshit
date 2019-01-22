#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double s = 0, a, b, func;
	long n;
	cout << "Input a,b\n";
	cin >> a >> b;//积分端点
	double i = a;
	cout << "Input n\n";
	cin >> n;//分段数
	double d;
	d = (b - a) / n;
	while (i <= b)
	{
		func = i*i;//被积函数
		s += func*d;
		i = i + d;
	}
	cout << "the answer is " << s << endl;
	return 0;
}
