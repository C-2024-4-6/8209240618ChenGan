#include<iostream>
using namespace std;
static int divisor(int a, int b)
{
	int t = 1, o = 0;
	int i = (a > b) ? a : b;
	for (t; t < i + 1; t++)
	{
		if (a % t == 0 && b % t == 0)
		{
			o = t;
		}
	}
	return o;
}
int main()
{
	int m, n;
	cout << "请输入m：";
	cin >> m;
	cout << "请输入n：";
	cin >> n;
	int u = 0;
	u = divisor(m, n);
	cout << "m和n的最大公约数为：" << u << endl;
	int p = 0;
	p = (m / u) * n;
	cout << "m和n的最小公倍数为：" << p << endl;

}