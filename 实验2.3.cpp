#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三边长：";
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		cout<<"该三条边无法构成三角形"<<endl;
	}
	else
	{
		double perimeter = 0;
		perimeter = a + b + c;
		cout << "周长是：" << perimeter << endl;
		if (a == b || a == c || b == c)
		{
			cout << "该三角形是等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}	
}